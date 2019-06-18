#include "itemeditframe.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QSizePolicy>
#include <QComboBox>
#include "items.h"
namespace Currency {

ItemEditFrame::ItemEditFrame(QWidget *parent)
    : QFrame (parent)
{

    setSizePolicy(QSizePolicy::Expanding,
                  QSizePolicy::Minimum);
    QHBoxLayout *L = new QHBoxLayout(this);

    {
       {
        QLabel *lbl1 = new QLabel (this);
        lbl1->setText (tr("Data"));
        L->addWidget(lbl1);

        QLineEdit *txt1 = new QLineEdit(this);
        L->addWidget(txt1);
       }
        L->addItem(new QSpacerItem(0,0,QSizePolicy::Expanding,
                               QSizePolicy::Minimum));
       {
        QLabel *lbl = new QLabel (this);
        lbl->setText (tr("Enter currency"));
        L->addWidget(lbl);

        QLineEdit *txt = new QLineEdit(this);
        L->addWidget(txt);
        setup_Kind(L);
       }
     }
}

void ItemEditFrame::setup_Kind(QLayout *L1)
{

    QHBoxLayout *L2 = new QHBoxLayout();
    L1->addItem(L2);

    QComboBox *cbx = new QComboBox (this);
    cbx->addItem(tr("USD"),USD);
    cbx->addItem(tr("EUR"),EUR);
    cbx->addItem(tr("GBP"),GBP);
    cbx->addItem(tr("JPY"),JPY);
    cbx->addItem(tr("KZT"),KZT);
    cbx->addItem(tr("RUB"),RUB);
    L2->addWidget(cbx);

}

ItemEditFrame::~ItemEditFrame()
{

}
}//namespace Currency
