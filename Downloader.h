#ifndef DOWNLOADER_H
#define DOWNLOADER_H

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QUrl>

class Downloader : public QObject
{
    Q_OBJECT

public:
    Downloader();
    ~Downloader();

private slots:
    void onResult(QNetworkReply *reply);

private:
    QNetworkAccessManager * _networkManager;
};
#endif // DOWNLOADER_H
