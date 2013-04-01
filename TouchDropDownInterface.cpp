#include "TouchDropDownInterface.h"

#include <QtPlugin>
#include <QDebug>

TouchDropDownInterface::TouchDropDownInterface(QObject *parent)
    : QObject(parent)
{
    initialized = false;
}

void TouchDropDownInterface::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (initialized)
        return;

    initialized = true;
}

bool TouchDropDownInterface::isInitialized() const
{
    return initialized;
}

QWidget *TouchDropDownInterface::createWidget(QWidget *parent)
{
    return new TouchDropDown(parent);
}

QString TouchDropDownInterface::name() const
{
    return "TouchDropDown";
}

QString TouchDropDownInterface::group() const
{
    return "Nickel Widgets";
}

QIcon TouchDropDownInterface::icon() const
{
    return QIcon();
}

QString TouchDropDownInterface::toolTip() const
{
    return "";
}

QString TouchDropDownInterface::whatsThis() const
{
    return "";
}

bool TouchDropDownInterface::isContainer() const
{
    return false;
}

QString TouchDropDownInterface::domXml() const
{
    return
		"<ui language=\"c++\">\n"
		" <widget class=\"TouchDropDown\" name=\"touchDropDown\">\n"
		"  <property name=\"styleSheet\">\n"
		"   <string notr=\"true\">border: 1px solid black;\n"
		"font: ;\n"
		"</string>"
		"  </property>\n"
		" </widget>\n"
		"</ui>\n";
}

QString TouchDropDownInterface::includeFile() const
{
    return "TouchDropDown.h";
}
