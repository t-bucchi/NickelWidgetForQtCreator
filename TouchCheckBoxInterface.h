#ifndef _TOUCH_CHECK_BOX_INTERFACE_H
#define _TOUCH_CHECK_BOX_INTERFACE_H

#include <QDesignerCustomWidgetInterface>
#include <QCheckBox>

/* Dummy implement of TouchLabel */
class TouchCheckBox : public QCheckBox
{
	Q_OBJECT
  public:
	TouchCheckBox(QWidget *parent=0) : QCheckBox(parent) {}

  signals:
    void tapped();
    void mouseDown();
    void mouseUp();
    void moved();
};

/* TouchCheckBoxInterface */
class TouchCheckBoxInterface : public QObject, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    TouchCheckBoxInterface(QObject *parent = 0);

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

#endif // _TOUCH_CHECK_BOX_INTERFACE_H
