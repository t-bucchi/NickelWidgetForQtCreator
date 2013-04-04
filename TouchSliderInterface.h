#ifndef _TOUCH_SLIDER_INTERFACE_H
#define _TOUCH_SLIDER_INTERFACE_H

#include <QDesignerCustomWidgetInterface>
#include <QSlider>

/* Dummy implement of TouchSlider */
class TouchSlider : public QSlider
{
	Q_OBJECT
  public:
	TouchSlider(QWidget *parent=0) : QSlider(parent) {}

  signals:
	void valueDoneChanging(int);
	void forceBlackAndWhite();
	void unforceBlackAndWhite();
	void forceImmediate();
	void unforceImmediate();
};

/* TouchSliderInterface */
class TouchSliderInterface : public QObject, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    TouchSliderInterface(QObject *parent = 0);

    bool isContainer() const;
    bool isInitialized() const;
    QIcon icon() const;
    QString domXml() const;
    QString group() const;
    QString includeFile() const;
    QString name() const;
    QString toolTip() const;
    QString whatsThis() const;
    QWidget *createWidget(QWidget *parent);
    void initialize(QDesignerFormEditorInterface *core);

private:
    bool initialized;
};

#endif // _TOUCH_SLIDER_INTERFACE_H
