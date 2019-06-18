#include "itemeditdialog.h"
#include <QFrame>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSizePolicy>


namespace Currency {
namespace IED_helper  {


Buttons::Buttons(QWidget *parent)
    :QFrame(parent)
{

    setSizePolicy(QSizePolicy::Expanding,
                     QSizePolicy::Minimum);

    QHBoxLayout *L = new QHBoxLayout(this);
    L->addItem(new QSpacerItem(0,0,QSizePolicy::Expanding,
                           QSizePolicy::Minimum));

        QPushButton *B = pConvert = new QPushButton(this);
        L->addWidget (B);
        B->setText(tr("Convert"));

        QPushButton *Bb = pSave = new QPushButton(this);
        L->addWidget (Bb);
        Bb->setText(tr("Save"));

        L->addItem(new QSpacerItem(0,0,QSizePolicy::Expanding,
                               QSizePolicy::Minimum));
}
}//namespace IED_helper
ItemEditDialog::ItemEditDialog(QWidget *parent)
    : QDialog (parent)
{
    setWindowTitle(tr("Currency-Converter"));
    QVBoxLayout *L0 = new QVBoxLayout(this);


        //Верхний фрейм
       {
        Edt = new ItemEditFrame (this);
        L0->addWidget(Edt);
       }{//Средний фрейм
         MEdt = new ItemEditMainFrame (this);
         L0->addWidget(MEdt);
       }{//Нижний фрейм
        Btn = new IED_helper::Buttons (this);
        L0->addWidget(Btn);
       }
}



ItemEditDialog::~ItemEditDialog()
{

}

}//namespace Currency
