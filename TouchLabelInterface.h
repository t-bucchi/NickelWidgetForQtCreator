#ifndef _TOUCH_LABEL_INTERFACE_H
#define _TOUCH_LABEL_INTERFACE_H

#include <QDesignerCustomWidgetInterface>
#include <QLabel>

/* Dummy implement of TouchLabel */
class TouchLabel : public QLabel
{
	Q_OBJECT
	Q_PROPERTY(QPixmap selectedPixmap WRITE setSelectedPixmap)
	Q_PROPERTY(QPixmap deselectedPixmap WRITE setDeselectedPixmap)
  public:
	TouchLabel(QWidget *parent=0) : QLabel(parent) {}

	void setSelectedPixmap(QPixmap const &) {}
	void setDeselectedPixmap(QPixmap const &) {}

  signals:
    void tapped();
    void mouseDown();
    void mouseUp();
    void moved();
};

/* TouchLabelInterface */
class TouchLabelInterface : public QObject, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    TouchLabelInterface(QObject *parent = 0);

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

#endif // _TOUCH_LABEL_INTERFACE_H
