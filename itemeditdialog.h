#ifndef ITEMEDITDIALOG_H
#define ITEMEDITDIALOG_H
#include "itemeditframe.h"
#include "itemeditmainframe.h"
#include <QDialog>
#include<QFrame>
class QPushButton;

namespace Currency  {

/**
 * @brief Окно с конвертором.
 */

namespace IED_helper
{
    class Buttons : public QFrame
    {
        Q_OBJECT
    private:
     QPushButton *pConvert;
     QPushButton *pSave;

    public:
     Buttons(QWidget *parent = 0);
    };//IED_helper
}


class ItemEditDialog : public QDialog
{

    Q_OBJECT



private:
  IED_helper::Buttons *Btn;
  ItemEditFrame       *Edt;
  ItemEditMainFrame   *MEdt;


public:
    ItemEditDialog(QWidget *parent = 0);
        ~ItemEditDialog();
};

#endif // ITEMEDITDIALOG_H

}//namespace Currency
