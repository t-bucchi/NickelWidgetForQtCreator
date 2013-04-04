#ifndef _N3BUTTON_LABEL_INTERFACE_H
#define _N3BUTTON_LABEL_INTERFACE_H

#include <QDesignerCustomWidgetInterface>
#include "TouchLabelInterface.h"

/* Dummy implement of N3ButtonLabel */
class N3ButtonLabel : public TouchLabel
{
	Q_OBJECT
  public:
	N3ButtonLabel(QWidget *parent=0) : TouchLabel(parent) {
		setStyleSheet(
			"border: 2px solid black;\n"
			"background-color: white;\n"
			"border-radius: 5px;");
	}

  public slots:
    void reverseColors();
    void defaultColors();
};

/* N3ButtonLabelInterface */
class N3ButtonLabelInterface : public QObject, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    N3ButtonLabelInterface(QObject *parent = 0);

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
