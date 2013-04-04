#include "NickelWidgets.h"
#include "TouchDropDownInterface.h"
#include "TouchLabelInterface.h"
#include "TouchCheckBoxInterface.h"
#include "RadioButtonInterface.h"
#include "TouchSliderInterface.h"
#include "N3ButtonLabelInterface.h"
#include "WirelessPaginationWidgetInterface.h"

NickelWidgets::NickelWidgets(QObject *parent) :
	QObject(parent)
{
	widgets.append(new TouchLabelInterface(this));
	widgets.append(new N3ButtonLabelInterface(this));
	widgets.append(new TouchDropDownInterface(this));
	widgets.append(new TouchCheckBoxInterface(this));
	widgets.append(new RadioButtonInterface(this));
	widgets.append(new TouchSliderInterface(this));
	widgets.append(new WirelessPaginationWidgetInterface(this));
}

QList<QDesignerCustomWidgetInterface *> NickelWidgets::customWidgets() const
{
	return widgets;
}

Q_EXPORT_PLUGIN2(nickelwidgetplugin, NickelWidgets)
