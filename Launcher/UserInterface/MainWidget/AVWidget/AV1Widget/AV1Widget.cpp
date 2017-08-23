#include "AV1Widget.h"
#include "AutoConnect.h"
#include "UserInterface/Common/MessageBox.h"
#include "UserInterface/Common/Utility.h"
#include "UserInterface/Common/BmpWidget.h"
#include "EventEngine.h"
#include "BusinessLogic/Common/BusinessLogicUtility.h"
#include <QPainter>
#include <QDebug>
#include <QTimer>
#include <QMouseEvent>

namespace SourceString {
static const QString No_AV1_Signal = QString(QObject::tr("No AV1 Signal..."));
static const QString Conneting_AV1_Signal = QString(QObject::tr("Conneting AV1 Signal..."));
}

class AV1WidgetPrivate
{
    Q_DISABLE_COPY(AV1WidgetPrivate)
public:
    explicit AV1WidgetPrivate(AV1Widget* parent);
    ~AV1WidgetPrivate();
    void initialize();
    void connectAllSlots();
    QColor m_BackgroundColor;
    BmpWidget* m_ShortCutWidget;
    QTimer* m_Timer;
    MessageBox* m_DeviceMessageBox;
    QRect m_TouchRect;
    bool m_ShowFlag;
private:
    AV1Widget* m_Parent;
};

AV1Widget::AV1Widget(QWidget *parent)
    : QWidget(parent)
    , Widget::Interface()
    , m_Private(new AV1WidgetPrivate(this))
{
}

AV1Widget::~AV1Widget()
{
}

void AV1Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.fillRect(rect(), QBrush(QColor(0x00, 0x00, 0x00)));
    QWidget::paintEvent(event);
}

void AV1Widget::resizeEvent(QResizeEvent *event)
{
    g_Widget->geometryFit(0, 0, g_Widget->baseWindowWidth(), g_Widget->baseWindowHeight(), this);
    g_Widget->geometryFit(0, 0, g_Widget->baseWindowWidth(), g_Widget->baseWindowHeight(), m_Private->m_DeviceMessageBox);
    QWidget::resizeEvent(event);
}

void AV1Widget::mouseReleaseEvent(QMouseEvent *event)
{
    if (isVisible()) {
        if (m_Private->m_TouchRect.contains(event->pos())) {
            if (m_Private->m_TouchRect == QRect(0, 0, g_Widget->baseWindowWidth(), g_Widget->baseWindowHeight())) {
                g_Widget->setWidgetType(Widget::T_AV1, WidgetStatus::Show);
            } else {
                g_Widget->setWidgetType(Widget::T_AV1FullScreen, WidgetStatus::Show);
            }
        }
    }
    QWidget::mouseReleaseEvent(event);
}

void AV1Widget::ontWidgetTypeChange(const Widget::Type type, const QString &status)
{
    switch (type) {
    case Widget::T_Back: {
        if (WidgetStatus::RequestShow == status) {
            if (isVisible()) {
                g_Widget->setWidgetType(Widget::T_Home, WidgetStatus::RequestShow);
            }
        }
        break;
    }
    case Widget::T_AV1: {
        if (WidgetStatus::RequestShow == status) {
            g_AV->startAV(AVT_1, g_Widget->baseWindowWidth() * g_Widget->widthScalabilityFactor(), g_Widget->baseWindowHeight() * g_Widget->heightScalabilityFactor());
        } else if (WidgetStatus::Show == status) {
            m_Private->m_TouchRect = QRect(0, 50, g_Widget->baseWindowWidth(), g_Widget->baseWindowHeight() - 50 - 70);
            m_Private->m_Timer->start();
            m_Private->m_ShowFlag = true;
            setVisible(true);
        }
        break;
    }
    case Widget::T_AV1FullScreen: {
        if (WidgetStatus::RequestShow == status) {
            g_Widget->setWidgetType(Widget::T_AV1FullScreen, WidgetStatus::Show);
        } else if (WidgetStatus::Show == status) {
            m_Private->m_TouchRect = QRect(0, 0, g_Widget->baseWindowWidth(), g_Widget->baseWindowHeight());
            m_Private->m_Timer->stop();
        }
        break;
    }
    default: {
        if (WidgetStatus::Show == status) {
            m_Private->m_DeviceMessageBox->setVisible(false);
            setVisible(false);
            if (m_Private->m_ShowFlag) {
                g_AV->stopAV(AVT_1);
                m_Private->m_ShortCutWidget->setVisible(false);
            }
            m_Private->m_ShowFlag = false;
            m_Private->m_Timer->stop();
        }
        break;
    }
    }
}

void AV1Widget::onAVStatus(const int type, const int status)
{
    if (AVT_1 == type) {
        if (AVS_Connecting == status) {
            m_Private->m_BackgroundColor = Utility::customBlackColor();
            m_Private->m_DeviceMessageBox->setText(SourceString::Conneting_AV1_Signal);
            m_Private->m_DeviceMessageBox->setVisible(true);
            g_Widget->setWidgetType(Widget::T_AV1, WidgetStatus::Show);
            QVariant* variant = new QVariant();
            variant->setValue(static_cast<QWidget*>(m_Private->m_ShortCutWidget));
            EventEngine::CustomEvent<QVariant> event(static_cast<QEvent::Type>(CustomEventType::TabBarWidgetAddChild), variant);
            g_EventEngine->sendCustomEvent(event);
            g_Widget->geometryFit(0 + 84 * 3, 0, 104, g_Widget->baseTabBarHeight(), m_Private->m_ShortCutWidget);
            update();
        } else if (AVS_Connected == status) {
            m_Private->m_BackgroundColor = Utility::videoColor();
            m_Private->m_DeviceMessageBox->setVisible(false);
            update();
        } else if (AVS_Disconnect == status) {
            m_Private->m_BackgroundColor = Utility::customBlackColor();
            m_Private->m_DeviceMessageBox->setText(SourceString::No_AV1_Signal);
            m_Private->m_DeviceMessageBox->setVisible(true);
            if (isVisible()) {
                g_Widget->setWidgetType(Widget::T_AV1, WidgetStatus::Show);
            }
        }
    }
}

void AV1Widget::onTimeout()
{
    qDebug() << "AV1Widget::onTimeout";
    g_Widget->setWidgetType(Widget::T_AV1FullScreen, WidgetStatus::RequestShow);
}

AV1WidgetPrivate::AV1WidgetPrivate(AV1Widget *parent)
    : m_Parent(parent)
{
    m_ShowFlag = false;
    m_Timer = NULL;
    m_DeviceMessageBox = NULL;
    m_ShortCutWidget = NULL;
    m_BackgroundColor = Utility::customBlackColor();
    initialize();
    connectAllSlots();
    m_Parent->setVisible(false);
}

AV1WidgetPrivate::~AV1WidgetPrivate()
{
}

void AV1WidgetPrivate::initialize()
{
    m_ShortCutWidget = new BmpWidget(m_Parent);
    m_ShortCutWidget->hide();
    m_Timer = new QTimer(m_Parent);
    m_Timer->setSingleShot(true);
    m_Timer->setInterval(7000);
    m_DeviceMessageBox = new MessageBox(m_Parent);
    m_DeviceMessageBox->hide();
    m_DeviceMessageBox->setAutoHide(false);
    m_DeviceMessageBox->setFontPointSize(18 * g_Widget->widthScalabilityFactor());
}

void AV1WidgetPrivate::connectAllSlots()
{
    connectSignalAndSlotByNamesake(g_Widget, m_Parent);
    connectSignalAndSlotByNamesake(g_AV, m_Parent);
    Qt::ConnectionType type = static_cast<Qt::ConnectionType>(Qt::UniqueConnection | Qt::AutoConnection);
    QObject::connect(m_Timer,  SIGNAL(timeout()),
                     m_Parent, SLOT(onTimeout()),
                     type);
}