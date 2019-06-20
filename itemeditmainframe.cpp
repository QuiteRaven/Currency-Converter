#include "ItemEditMainFrame.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QSizePolicy>
#include <QComboBox>


ItemEditMainFrame::ItemEditMainFrame(QWidget *parent)
	:QFrame(parent)
{
	setFrameStyle(StyledPanel | Sunken);
	setSizePolicy(QSizePolicy::Expanding,
				  QSizePolicy::Expanding);
	QVBoxLayout *L1 = new QVBoxLayout(this);
	{
		QHBoxLayout *L3 = new QHBoxLayout();
		L1->setMargin(0);
		L1->addLayout(L3);
		setup_USD(L3);
		setup_EUR(L3);
	}

	{
		QHBoxLayout *L3 = new QHBoxLayout();
		L1->setMargin(0);
		L1->addLayout(L3);
		setup_GBP(L3);
		setup_JPY(L3);
	}

	{
		QHBoxLayout *L3 = new QHBoxLayout();
		L1->setMargin(0);
		L1->addLayout(L3);
		setup_KZT(L3);
		setup_RUB(L3);
	}


}

void ItemEditMainFrame::setup_USD(QLayout *L1)
{

	QVBoxLayout *L2 = new QVBoxLayout();
	L2->setSpacing(0);
	L2->setMargin(10);
	L1->addItem(L2);

	QLabel *lbl = new QLabel(this);
	lbl->setText(tr("USD"));
	L2->addWidget(lbl);



	QLineEdit *txt = new QLineEdit(this);
	L2->addWidget(txt);


}

void ItemEditMainFrame::setup_EUR(QLayout *L1)
{

	QVBoxLayout *L2 = new QVBoxLayout();
	L2->setSpacing(0);
	L2->setMargin(10);
	L1->addItem(L2);

	QLabel *lbl = new QLabel(this);
	lbl->setText(tr("EUR"));
	L2->addWidget(lbl);


	QLineEdit *txt = new QLineEdit(this);
	L2->addWidget(txt);
}

void ItemEditMainFrame::setup_GBP(QLayout *L1)
{

	QVBoxLayout *L2 = new QVBoxLayout();
	L2->setSpacing(0);
	L2->setMargin(10);
	L1->addItem(L2);

	QLabel *lbl = new QLabel(this);
	lbl->setText(tr("GPB"));
	L2->addWidget(lbl);


	QLineEdit *txt = new QLineEdit(this);
	L2->addWidget(txt);
}

void ItemEditMainFrame::setup_JPY(QLayout *L1)
{

	QVBoxLayout *L2 = new QVBoxLayout();
	L2->setSpacing(0);
	L2->setMargin(10);
	L1->addItem(L2);

	QLabel *lbl = new QLabel(this);
	lbl->setText(tr("JPY"));
	L2->addWidget(lbl);


	QLineEdit *txt = new QLineEdit(this);
	L2->addWidget(txt);
}

void ItemEditMainFrame::setup_KZT(QLayout *L1)
{

	QVBoxLayout *L2 = new QVBoxLayout();
	L2->setSpacing(0);
	L2->setMargin(10);
	L1->addItem(L2);

	QLabel *lbl = new QLabel(this);
	lbl->setText(tr("KZT"));
	L2->addWidget(lbl);


	QLineEdit *txt = new QLineEdit(this);
	L2->addWidget(txt);
}

void ItemEditMainFrame::setup_RUB(QLayout *L1)
{

	QVBoxLayout *L2 = new QVBoxLayout();
	L2->setSpacing(0);
	L2->setMargin(10);
	L1->addItem(L2);

	QLabel *lbl = new QLabel(this);
	lbl->setText(tr("RUB"));
	L2->addWidget(lbl);


	QLineEdit *txt = new QLineEdit(this);
	L2->addWidget(txt);
}

ItemEditMainFrame::~ItemEditMainFrame()
{
}
