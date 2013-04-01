#include "NickelWidgets.h"
#include "TouchDropDownInterface.h"

NickelWidgets::NickelWidgets(QObject *parent) :
	QObject(parent)
{
	widgets.append(new TouchDropDownInterface(this));
}

QList<QDesignerCustomWidgetInterface *> NickelWidgets::customWidgets() const
{
	return widgets;
}

Q_EXPORT_PLUGIN2(nickelwidgetplugin, NickelWidgets)
