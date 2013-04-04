#include "RadioButtonInterface.h"

#include <QtPlugin>
#include <QDebug>

RadioButtonInterface::RadioButtonInterface(QObject *parent)
    : QObject(parent)
{
    initialized = false;
}

void RadioButtonInterface::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (initialized)
        return;

    initialized = true;
}

bool RadioButtonInterface::isInitialized() const
{
    return initialized;
}

QWidget *RadioButtonInterface::createWidget(QWidget *parent)
{
    return new RadioButton(parent);
}

QString RadioButtonInterface::name() const
{
    return "RadioButton";
}

QString RadioButtonInterface::group() const
{
    return "Nickel Widgets";
}

QIcon RadioButtonInterface::icon() const
{
    return QIcon();
}

QString RadioButtonInterface::toolTip() const
{
    return "";
}

QString RadioButtonInterface::whatsThis() const
{
    return "";
}

bool RadioButtonInterface::isContainer() const
{
    return false;
}

QString RadioButtonInterface::domXml() const
{
    return
		"<ui language=\"c++\">\n"
		" <widget class=\"RadioButton\" name=\"radioButton\">\n"
		"  <property name=\"text\">\n"
		"   <string>RadioButton</string>\n"
		"  </property>\n"
		"  <property name=\"styleSheet\">\n"
		"   <string notr=\"true\">QRadioButton::indicator::unchecked {\n"
		"  image: url(\":/images/widgets/radio_btn_off_trilogy.png\");\n"
		"}\n"
		"QRadioButton::indicator::checked {\n"
		"  image: url(\":/images/widgets/radio_btn_on_trilogy.png\");\n"
		"}\n"
		"QRadioButton::indicator::unchecked[deviceCodeName=\"kraken\"] {\n"
		"  image: url(\":/images/widgets/radio_btn_off_kraken.png\");\n"
		"}\n"
		"QRadioButton::indicator::checked[deviceCodeName=\"kraken\"] {\n"
		"  image: url(\":/images/widgets/radio_btn_on_kraken.png\");\n"
		"}\n"
		"</string>"
		"  </property>\n"
		" </widget>\n"
		"</ui>\n";
}

QString RadioButtonInterface::includeFile() const
{
    return "RadioButton.h";
}
