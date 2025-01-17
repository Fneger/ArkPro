#ifndef VOLUMETOOLWIDGET_H
#define VOLUMETOOLWIDGET_H

#include "BusinessLogic/Audio/Audio.h"
#include "BusinessLogic/Port/Port.h"
#include <QWidget>
#include <QScopedPointer>

class VolumeToolWidgetPrivate;
class VolumeToolWidget
        : protected QWidget
        , protected Audio::Interface
{
    Q_OBJECT
    Q_DISABLE_COPY(VolumeToolWidget)
public:
    explicit VolumeToolWidget(QWidget* parent = NULL);
    ~VolumeToolWidget();
protected:
    void resizeEvent(QResizeEvent* event);
    bool event(QEvent* event);
    void changeEvent(QEvent* event);
protected slots:
    //AudioManager::Interface
    void onFMChange(int freq);
    void onFMIsOpen(int open);
    void onVolumeChange(int type, int volume);
    void onVolumeRangeChange(int min, int max);
    void onMCUDataRecv(const Port::Type type, const char *buffer, const int size);
private slots:
    void onMinusBtnRelease();
    void onPlusBtnRelease();
    void onTickMarksMillesimalEnd(const int millesimal);
signals:
    void clicked();
private:
    friend class VolumeToolWidgetPrivate;
    QScopedPointer<VolumeToolWidgetPrivate> m_Private;

};

#endif // VOLUMETOOLWIDGET_H
