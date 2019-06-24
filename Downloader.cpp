#include "Downloader.h"

Downloader::Downloader()
{
    _networkManager = new QNetworkAccessManager();
    connect(_networkManager, &QNetworkAccessManager::finished, this, &Downloader::onResult);
    _networkManager->get(QNetworkRequest(QUrl("https://www.cbr-xml-daily.ru/daily_json.js")));
}

void Downloader::onResult(QNetworkReply *reply)
{
    if (!reply->error()) {
        auto json = QJsonDocument::fromJson(reply->readAll());
    }
    reply->deleteLater();
}

Downloader::~Downloader()
{
}