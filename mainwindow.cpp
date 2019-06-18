#include "mainwindow.h"
#include <itemeditdialog.h>
#include <QPushButton>
#include <QMenuBar>
#include <QAction>
namespace Currency {



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

  {
    QAction *A = actNewItem = new QAction (this);
    A->setText(tr("Start"));
    connect(A,SIGNAL(triggered()),this,SLOT(newItem()));
    QAction *B = actAbout = new QAction (this);
    B->setText(tr("About"));

  }

   QMenu *mItem = menuBar()->addMenu(tr("Open"));
    mItem->addAction(actNewItem);
    mItem->addAction(actAbout);


}

MainWindow::~MainWindow()
{

}

void MainWindow::newItem(){
    ItemEditDialog Dia(this);
    Dia.exec();
}

}//namespace Currency
