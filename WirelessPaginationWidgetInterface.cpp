#include "WirelessPaginationWidgetInterface.h"

#include <QtPlugin>
#include <QDebug>

WirelessPaginationWidgetInterface::WirelessPaginationWidgetInterface(QObject *parent)
    : QObject(parent)
{
    initialized = false;
}

void WirelessPaginationWidgetInterface::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (initialized)
        return;

    initialized = true;
}

bool WirelessPaginationWidgetInterface::isInitialized() const
{
    return initialized;
}

QWidget *WirelessPaginationWidgetInterface::createWidget(QWidget *parent)
{
    return new WirelessPaginationWidget(parent);
}

QString WirelessPaginationWidgetInterface::name() const
{
    return "WirelessPaginationWidget";
}

QString WirelessPaginationWidgetInterface::group() const
{
    return "Nickel Widgets";
}

QIcon WirelessPaginationWidgetInterface::icon() const
{
    return QIcon();
}

QString WirelessPaginationWidgetInterface::toolTip() const
{
    return "";
}

QString WirelessPaginationWidgetInterface::whatsThis() const
{
    return "";
}

bool WirelessPaginationWidgetInterface::isContainer() const
{
    return false;
}

QString WirelessPaginationWidgetInterface::domXml() const
{
    return
		"<ui language=\"c++\">\n"
		" <widget class=\"WirelessPaginationWidget\" name=\"wirelessPaginationWidget\">\n"
		"  <property name=\"totalPages\">\n"
		"   <number>0</number>\n"
		"  </property>\n"
		"  <property name=\"currentPage\">\n"
		"   <number>0</number>\n"
		"  </property>\n"
		" </widget>\n"
		"</ui>\n";
}

QString WirelessPaginationWidgetInterface::includeFile() const
{
    return "WirelessPaginationWidget.h";
}
