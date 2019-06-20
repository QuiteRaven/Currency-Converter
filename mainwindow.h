#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include<QFrame>

#include "itemEditFrame.h"
#include "itemEditMainFrame.h"

class QPushButton;
class QAction;

class Buttons : public QFrame
{
	Q_OBJECT

public:
	Buttons(QWidget *parent = 0);

private:
	QPushButton *pConvert;
};

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);
	~MainWindow();

protected slots:
	void newItem(void);

private:
	Buttons				*Btn;
	ItemEditFrame       *Edt;
	ItemEditMainFrame   *MEdt;
	QAction	   * _actNewItem;
	
};
#endif