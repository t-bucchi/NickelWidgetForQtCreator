#ifndef _TOUCHDROPDOWNPLUGIN_H
#define _TOUCHDROPDOWNPLUGIN_H

#include <QDesignerCustomWidgetInterface>
#include <QFrame>
#include <QComboBox>
#include <QVBoxLayout>

/* Dummy implement of TouchDropDown */
class TouchDropDown : public QFrame
{
	Q_OBJECT
  public:
	TouchDropDown(QWidget *parent=0) : QFrame(parent) {
		QVBoxLayout *box = new QVBoxLayout(this);
		box->setSpacing(0);
		QComboBox *combo = new QComboBox(this);
		box->addWidget(combo);
		box->setContentsMargins(0, 0, 0, 0);
	}

  signals:
    void currentIndexChanged(int);

  public slots:
	void setCurrentIndex(int);
	void setCurrentIndex(QString const &);
	void setCurrentIndexFromData(QVariant const &);
	void showMenu();
};

/* TouchDropDownPlugin */
class TouchDropDownPlugin : public QObject, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    TouchDropDownPlugin(QObject *parent = 0);

    bool isContainer() const;
    bool isInitialized() const;
    QIcon icon() const;
    QString domXml() const;
    QString group() const;
    QString includeFile() const;
    QString name() const;
    QString toolTip() const;
    QString whatsThis() const;
    QWidget *createWidget(QWidget *parent);
    void initialize(QDesignerFormEditorInterface *core);

private:
    bool initialized;
};

#endif // _TOUCHDROPDOWNPLUGIN_H
