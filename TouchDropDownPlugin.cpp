#include "TouchDropDownPlugin.h"

#include <QtPlugin>
#include <QDebug>

TouchDropDownPlugin::TouchDropDownPlugin(QObject *parent)
    : QObject(parent)
{
    initialized = false;
}

void TouchDropDownPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (initialized)
        return;

    initialized = true;
}

bool TouchDropDownPlugin::isInitialized() const
{
    return initialized;
}

QWidget *TouchDropDownPlugin::createWidget(QWidget *parent)
{
	qDebug() << __PRETTY_FUNCTION__;
    return new TouchDropDown(parent);
}

QString TouchDropDownPlugin::name() const
{
    return "TouchDropDown";
}

QString TouchDropDownPlugin::group() const
{
    return "Nickel Widgets";
}

QIcon TouchDropDownPlugin::icon() const
{
    return QIcon();
}

QString TouchDropDownPlugin::toolTip() const
{
    return "";
}

QString TouchDropDownPlugin::whatsThis() const
{
    return "";
}

bool TouchDropDownPlugin::isContainer() const
{
    return false;
}

QString TouchDropDownPlugin::domXml() const
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

QString TouchDropDownPlugin::includeFile() const
{
    return "TouchDropDown.h";
}

Q_EXPORT_PLUGIN2(nickelwidget, TouchDropDownPlugin)
