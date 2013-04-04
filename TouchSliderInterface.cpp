#include "TouchSliderInterface.h"

#include <QtPlugin>
#include <QDebug>

TouchSliderInterface::TouchSliderInterface(QObject *parent)
    : QObject(parent)
{
    initialized = false;
}

void TouchSliderInterface::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (initialized)
        return;

    initialized = true;
}

bool TouchSliderInterface::isInitialized() const
{
    return initialized;
}

QWidget *TouchSliderInterface::createWidget(QWidget *parent)
{
    return new TouchSlider(parent);
}

QString TouchSliderInterface::name() const
{
    return "TouchSlider";
}

QString TouchSliderInterface::group() const
{
    return "Nickel Widgets";
}

QIcon TouchSliderInterface::icon() const
{
    return QIcon();
}

QString TouchSliderInterface::toolTip() const
{
    return "";
}

QString TouchSliderInterface::whatsThis() const
{
    return "";
}

bool TouchSliderInterface::isContainer() const
{
    return false;
}

QString TouchSliderInterface::domXml() const
{
    return
		"<ui language=\"c++\">\n"
		" <widget class=\"TouchSlider\" name=\"touchSlider\">\n"
		"  <property name=\"styleSheet\">\n"
		"   <string notr=\"true\">QSlider {\n"
		"  background-color: white;\n"
		"  height: 50px;\n"
		"}\n"
		"\n"
		"QSlider::groove:horizontal {\n"
		"  height: 1px; \n"
		"  background-color: black;\n"
		"  margin-left: 7px;\n"
		"  margin-right: 7px;\n"
		"}\n"
		"\n"
		"QSlider::handle {\n"
		"  image: url(:/images/reading/scrubber_handle_off.png);\n"
		"  width: 44px;\n  height: 44px;\n"
		"  margin-top: -22px;\n"
		"  margin-bottom: -22px;\n"
		"  margin-left: -8px;\n"
		"  margin-right: -8px;\n"
		"}\n"
		"QSlider::handle:pressed {\n"
		"  image: url(:/images/reading/scrubber_handle_hit.png);\n"
		"  width: 44px;\n"
		"  height: 44px;\n"
		"  margin-top: -22px;\n"
		"  margin-bottom: -22px;\n"
		"  margin-left: -8px;\n"
		"  margin-right: -8px;\n"
		"}\n"
		"\n"
		"QSlider::groove:horizontal[deviceCodeName=\"kraken\"] {\n"
		"  margin-left: 10px;\n"
		"  margin-right: 10px;\n"
		"}\n"
		"\n"
		"QSlider::handle[deviceCodeName=\"kraken\"] {\n"
		"  image: url(:/images/reading/scrubber_handle_off_kraken.png);\n"
		"  width: 56px;\n"
		"  height: 56px;\n"
		"  margin-top: -28px;\n"
		"  margin-bottom: -28px;\n"
		"  margin-left: -10px;\n"
		"  margin-right: -10px;\n"
		"}\n"
		"QSlider::handle:pressed[deviceCodeName=\"kraken\"] {\n"
		"  image: url(:/images/reading/scrubber_handle_hit_kraken.png);\n"
		"  width: 56px;\n"
		"  height: 56px;\n"
		"  margin-top: -28px;\n"
		"  margin-bottom: -28px;\n"
		"  margin-left: -10px;\n"
		"  margin-right: -10px;\n"
		"}\n"
		"</string>"
		"  </property>\n"
		"  <property name=\"orientation\">\n"
		"   <enum>Qt::Horizontal</enum>\n"
		"  </property>\n"
		" </widget>\n"
		"</ui>\n";
}

QString TouchSliderInterface::includeFile() const
{
    return "TouchSlider.h";
}
