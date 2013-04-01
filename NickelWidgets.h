#ifndef _NIKCEL_WIDGETS_H
#define _NIKCEL_WIDGETS_H

#include <QtDesigner/QtDesigner>
#include <QtCore/qplugin.h>
#include <QList>

class NickelWidgets: public QObject, public QDesignerCustomWidgetCollectionInterface
{
	Q_OBJECT
	Q_INTERFACES(QDesignerCustomWidgetCollectionInterface)

  public:
	NickelWidgets(QObject *parent = 0);

	virtual QList<QDesignerCustomWidgetInterface*> customWidgets() const;

  private:
	QList<QDesignerCustomWidgetInterface *> widgets;
};

#endif // _NIKCEL_WIDGETS_H
