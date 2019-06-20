#ifndef ITEMEDITDIALOG_H
#define ITEMEDITDIALOG_H
//#include "itemeditframe.h"
//#include "itemeditmainframe.h"
#include <QDialog>
#include<QFrame>



class ItemEditDialog : public QDialog
{
public:
	ItemEditDialog(QWidget *parent = Q_NULLPTR);
	~ItemEditDialog();
};

#endif
