#include "N3ButtonLabelInterface.h"

#include <QtPlugin>
#include <QDebug>

N3ButtonLabelInterface::N3ButtonLabelInterface(QObject *parent)
    : QObject(parent)
{
    initialized = false;
}

void N3ButtonLabelInterface::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (initialized)
        return;

    initialized = true;
}

bool N3ButtonLabelInterface::isInitialized() const
{
    return initialized;
}

QWidget *N3ButtonLabelInterface::createWidget(QWidget *parent)
{
    return new N3ButtonLabel(parent);
}

QString N3ButtonLabelInterface::name() const
{
    return "N3ButtonLabel";
}

QString N3ButtonLabelInterface::group() const
{
    return "Nickel Widgets";
}

QIcon N3ButtonLabelInterface::icon() const
{
    return QIcon();
}

QString N3ButtonLabelInterface::toolTip() const
{
    return "";
}

QString N3ButtonLabelInterface::whatsThis() const
{
    return "";
}

bool N3ButtonLabelInterface::isContainer() const
{
    return false;
}

QString N3ButtonLabelInterface::domXml() const
{
    return
		"<ui language=\"c++\">\n"
		" <widget class=\"N3ButtonLabel\" name=\"n3buttonLabel\">\n"
		"  <property name=\"text\">\n"
		"   <string>N3ButtonLabel</string>\n"
		"  </property>\n"
		"  <property name=\"alignment\">\n"
		"   <set>Qt::AlignCenter</set>\n"
		"  </property>\n"
		" </widget>\n"
		"</ui>\n";
}

QString N3ButtonLabelInterface::includeFile() const
{
    return "N3ButtonLabel.h";
}
