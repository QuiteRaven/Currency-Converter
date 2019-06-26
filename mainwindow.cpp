#include "mainwindow.h"
#include "item_edit_dialog.h"
#include "item_edit_main_frame.h"
#include "item_edit_frame.h"

#include <QPushButton>
#include <QMenuBar>
#include <QAction>
#include <QFrame>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QBoxLayout>
#include <QSizePolicy>

const QString API_KEY = "5e77529f0adfeacd8f2b";

Buttons::Buttons(QWidget *parent)
    :QWidget(parent)
{
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);

    auto *layout = new QHBoxLayout(this);
    layout->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum));

    _convertButton = new QPushButton(this);
    layout->addWidget(_convertButton);
    _convertButton->setText(tr("Convert"));

    layout->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum));
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("Currency-Converter"));

    auto *frame = new QFrame();
    setCentralWidget(frame);
    auto *layout = new QVBoxLayout(frame);

    _upFrame = new ItemEditFrame(this);
    layout->addWidget(_upFrame);

    _midFrame = new ItemEditMainFrame(this);
    layout->addWidget(_midFrame);

    _convertButton = new Buttons(this);
    layout->addWidget(_convertButton);

    _actNewItem = new QAction(this);
    _actNewItem->setText(tr("About"));
    connect(_actNewItem, &QAction::triggered, this, &MainWindow::onNewItem);
    QMenu *mItem = menuBar()->addMenu(tr("Help"));
    mItem->addAction(_actNewItem);
}

MainWindow::~MainWindow()
{

}

void MainWindow::onNewItem() {
    ItemEditDialog aboutDialog(this);
    aboutDialog.exec();
}

