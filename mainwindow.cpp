#include "MainWindow.h"
#include "itemeditdialog.h"
#include "itemeditmainframe.h"
#include "itemeditframe.h"

#include <QPushButton>
#include <QMenuBar>
#include <QAction>
#include <QFrame>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QBoxLayout>
#include <QSizePolicy>

Buttons::Buttons(QWidget *parent)
	:QFrame(parent)
{

	setSizePolicy(QSizePolicy::Expanding,
				  QSizePolicy::Minimum);

	QHBoxLayout *L = new QHBoxLayout(this);
	L->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding,
		QSizePolicy::Minimum));

	QPushButton *B = pConvert = new QPushButton(this);
	L->addWidget(B);
	B->setText(tr("Convert"));


	L->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding,
		QSizePolicy::Minimum));
}


MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{

	setWindowTitle(tr("Currency-Converter"));
	
	QFrame *F = new QFrame();
	setCentralWidget(F);
	auto *L0 = new QVBoxLayout(F);
	
	//Верхний фрейм

	Edt = new ItemEditFrame(this);
	L0->addWidget(Edt);
	//Средний фрейм
		MEdt = new ItemEditMainFrame(this);
		L0->addWidget(MEdt);
	//Нижний фрейм
	Btn = new Buttons(this);
	L0->addWidget(Btn);

	QAction * _actNewItem = new QAction(this);
	_actNewItem->setText(tr("About"));
	connect(_actNewItem, SIGNAL(triggered()), this, SLOT(newItem()));


	QMenu *mItem = menuBar()->addMenu(tr("Help"));
	mItem->addAction(_actNewItem);


}


MainWindow::~MainWindow()
{
}

void MainWindow::newItem() {
	ItemEditDialog Dia(this);
	Dia.exec();
}

