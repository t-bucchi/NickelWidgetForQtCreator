#include "TouchLabelInterface.h"

#include <QtPlugin>
#include <QDebug>

TouchLabelInterface::TouchLabelInterface(QObject *parent)
    : QObject(parent)
{
    initialized = false;
}

void TouchLabelInterface::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (initialized)
        return;

    initialized = true;
}

bool TouchLabelInterface::isInitialized() const
{
    return initialized;
}

QWidget *TouchLabelInterface::createWidget(QWidget *parent)
{
    return new TouchLabel(parent);
}

QString TouchLabelInterface::name() const
{
    return "TouchLabel";
}

QString TouchLabelInterface::group() const
{
    return "Nickel Widgets";
}

QIcon TouchLabelInterface::icon() const
{
    return QIcon();
}

QString TouchLabelInterface::toolTip() const
{
    return "";
}

QString TouchLabelInterface::whatsThis() const
{
    return "";
}

bool TouchLabelInterface::isContainer() const
{
    return false;
}

QString TouchLabelInterface::domXml() const
{
    return
		"<ui language=\"c++\">\n"
		" <widget class=\"TouchLabel\" name=\"touchLabel\">\n"
		"  <property name=\"text\">\n"
		"   <string>TouchLabel</string>\n"
		"  </property>\n"
		" </widget>\n"
		"</ui>\n";
}

QString TouchLabelInterface::includeFile() const
{
    return "TouchLabel.h";
}
