#ifndef _RADIO_BUTTON_INTERFACE_H
#define _RADIO_BUTTON_INTERFACE_H

#include <QDesignerCustomWidgetInterface>
#include <QRadioButton>

/* Dummy implement of RadioButton */
class RadioButton : public QRadioButton
{
	Q_OBJECT
  public:
	RadioButton(QWidget *parent=0) : QRadioButton(parent) {}
};

/* RadioButtonInterface */
class RadioButtonInterface : public QObject, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    RadioButtonInterface(QObject *parent = 0);

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

#endif // _RADIO_BUTTON_INTERFACE_H
