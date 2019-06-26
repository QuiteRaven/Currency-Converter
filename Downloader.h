#ifndef DOWNLOADER_H
#define DOWNLOADER_H

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QUrl>

#include "item_edit_frame.h"
#include "item_edit_main_frame.h"

class Downloader : public QObject
{
    Q_OBJECT

public:
    Downloader(QObject *parent);
    ~Downloader();

    void get(QString &Date);
    
private:
    void onResult(QNetworkReply *reply);

private:
    QNetworkAccessManager * _networkManager;
};
#endif // DOWNLOADER_H
