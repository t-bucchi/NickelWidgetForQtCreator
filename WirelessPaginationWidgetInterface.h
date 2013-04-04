#ifndef _WIRELESS_PAGINATION_WIDGET_INTERFACE_H
#define _WIRELESS_PAGINATION_WIDGET_INTERFACE_H

#include <QDesignerCustomWidgetInterface>
#include <QWidget>
#include <QPixmap>
#include <QLabel>
#include <QHBoxLayout>

/* Dummy implement of WirelessPaginationWidget */
class WirelessPaginationWidget : public QWidget
{
	Q_OBJECT
	Q_PROPERTY(int totalPages WRITE setTotalPages)
	Q_PROPERTY(int currentPage WRITE setCurrentPage)
  public:
	WirelessPaginationWidget(QWidget *parent=0) : QWidget(parent) {
		QHBoxLayout *box = new QHBoxLayout(this);

		box->addWidget(new QWidget(), 1);

		/* Left arrow */
		QLabel *left = new QLabel(this);
		left->setPixmap(QPixmap(":/images/wireless/footer/left.png"));
		box->addWidget(left, 0);

		/* Center label */
		m_label = new QLabel();
		box->addWidget(m_label, 0);

		/* Right arrow */
		QLabel *right = new QLabel(this);
		right->setPixmap(QPixmap(":/images/wireless/footer/right.png"));
		box->addWidget(right, 0);

		box->addWidget(new QWidget(), 1);

		box->setContentsMargins(0, 0, 0, 0);
		m_total = m_current = 0;
		updateText();
	}

  signals:
	void nextPage();
	void previousPage();
  public slots:
	void setTotalPages(int total) { m_total = total; updateText(); }
	void setCurrentPage(int current) { m_current = current; updateText(); }

  private:
	void updateText() {
		m_label->setText(QString::fromUtf8("%1 / %2 ページ")
						 .arg(m_current).arg(m_total));
	}
	QLabel *m_label;
	int m_current;
	int m_total;
};

/* WirelessPaginationWidgetInterface */
class WirelessPaginationWidgetInterface : public QObject, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    WirelessPaginationWidgetInterface(QObject *parent = 0);

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

#endif // _WIRELESS_PAGINATION_WIDGET_INTERFACE_H
