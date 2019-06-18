#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QAction;

namespace Currency {


class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QAction *actNewItem;
    QAction *actAbout;

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected slots:
    void newItem(void);
};

} //namespace Currency
#endif // MAINWINDOW_H
