#include "mainwindow.h"
#include "application.h"

int main(int argc, char *argv[])
{
    Currency::Application App(argc, argv);
    Currency::MainWindow w;
    w.show();

    return App.exec();
}
