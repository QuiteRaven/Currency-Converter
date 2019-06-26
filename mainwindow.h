#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "item_edit_frame.h"
#include "item_edit_main_frame.h"

class QPushButton;
class QAction;

class Buttons : public QWidget
{
    Q_OBJECT

public:
    explicit Buttons(QWidget *parent = nullptr);

private:
    QPushButton *_convertButton;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected slots:
    void onNewItem();

private:
    Buttons		   *_convertButton = nullptr;
    ItemEditFrame        *_upFrame = nullptr;
    ItemEditMainFrame   *_midFrame = nullptr;
    QAction	         * _actNewItem = nullptr;
};
#endif