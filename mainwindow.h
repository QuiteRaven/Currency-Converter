#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QUrl>

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
    void parse(QJsonDocument &js);
    void get(QString &Date);

protected slots:
    void onNewItem();

private:
    void onResult(QNetworkReply *reply);

private:
    Buttons		   *_convertButton = nullptr;
    ItemEditFrame        *_upFrame = nullptr;
    ItemEditMainFrame   *_midFrame = nullptr;
    QAction	         * _actNewItem = nullptr;

private:
    QNetworkAccessManager * _networkManager;
};
#endif