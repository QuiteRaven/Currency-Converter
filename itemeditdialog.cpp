#include "ItemEditDialog.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>

ItemEditDialog::ItemEditDialog(QWidget *parent)
	: QDialog(parent)
{
	setWindowTitle(tr("About"));

	QVBoxLayout *L = new QVBoxLayout(this);


	QFrame *Help = new QFrame(this);
	QHBoxLayout *L1 = new QHBoxLayout(Help);
	QLabel *lbl = new QLabel(Help);
	lbl->setText(tr("SANYA DAI POMOSHI PAZHALUSTA"));
	L->addWidget(lbl);
}


ItemEditDialog::~ItemEditDialog()
{
}
