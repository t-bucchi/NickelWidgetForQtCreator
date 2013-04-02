#include "NickelWidgets.h"
#include "TouchDropDownInterface.h"
#include "TouchLabelInterface.h"

NickelWidgets::NickelWidgets(QObject *parent) :
	QObject(parent)
{
	widgets.append(new TouchDropDownInterface(this));
	widgets.append(new TouchLabelInterface(this));
}

QList<QDesignerCustomWidgetInterface *> NickelWidgets::customWidgets() const
{
	return widgets;
}

Q_EXPORT_PLUGIN2(nickelwidgetplugin, NickelWidgets)
