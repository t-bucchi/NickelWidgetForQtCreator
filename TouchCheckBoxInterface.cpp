#include "TouchCheckBoxInterface.h"

#include <QtPlugin>
#include <QDebug>

TouchCheckBoxInterface::TouchCheckBoxInterface(QObject *parent)
    : QObject(parent)
{
    initialized = false;
}

void TouchCheckBoxInterface::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (initialized)
        return;

    initialized = true;
}

bool TouchCheckBoxInterface::isInitialized() const
{
    return initialized;
}

QWidget *TouchCheckBoxInterface::createWidget(QWidget *parent)
{
    return new TouchCheckBox(parent);
}

QString TouchCheckBoxInterface::name() const
{
    return "TouchCheckBox";
}

QString TouchCheckBoxInterface::group() const
{
    return "Nickel Widgets";
}

QIcon TouchCheckBoxInterface::icon() const
{
    return QIcon();
}

QString TouchCheckBoxInterface::toolTip() const
{
    return "";
}

QString TouchCheckBoxInterface::whatsThis() const
{
    return "";
}

bool TouchCheckBoxInterface::isContainer() const
{
    return false;
}

QString TouchCheckBoxInterface::domXml() const
{
    return
		"<ui language=\"c++\" stdsetdef=\"1\">\n"
		" <widget class=\"TouchCheckBox\" name=\"touchCheckBox\">\n"
		"  <property name=\"text\">\n"
		"   <string>TouchCheckBox</string>\n"
		"  </property>\n"
		" </widget>\n"
		"</ui>\n";
}

QString TouchCheckBoxInterface::includeFile() const
{
    return "TouchCheckBox.h";
}
