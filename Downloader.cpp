#include "Downloader.h"

const QString API_KEY = "5e77529f0adfeacd8f2b";

Downloader::Downloader(QObject *parent)
    : QObject(parent)
{
    _networkManager = new QNetworkAccessManager();
    connect(_networkManager, &QNetworkAccessManager::finished, this, &Downloader::onResult);
}

void Downloader::onResult(QNetworkReply *reply)
{
    if (!reply->error()) {
        auto json = QJsonDocument::fromJson(reply->readAll());
        QJsonObject jsonObj = json.object();
        QJsonObject jsonObjUSD = jsonObj.value(from + "_USD").toObject(); //from - значение из комбобокса ( ак мне его получить здесь?)
        double rateUSD = jsonObjUSD.value(Date).toDouble(); // Date - значение из пол€ даты( ак его здесь получить?)
        double Enter = Entercurrncy->text().toDouble(); // Entercurrncy значение из пол€ ввода ( ак его здесь получить?)
        double resultUSD = Enter * rate;
        USD->setText(QString::number(resultUSD));// запись в поле с USD (как мне отсюда произвести запись в это поле?)

        QJsonObject jsonObjEUR = jsonObj.value(from + "_EUR").toObject();
        double rateEUR = jsonObjEUR.value(Date).toDouble();
        double Enter = Entercurrncy->text().toDouble();
        double resultEUR = Enter * rate;
        EUR->setText(QString::number(resultEUR));

        QJsonObject jsonObjGBP = jsonObj.value(from + "_GBP").toObject();
        double rateGBP = jsonObjGBP.value(Date).toDouble();
        double Enter = Entercurrncy->text().toDouble();
        double resultGBP = Enter * rate;
        GBP->setText(QString::number(resultGBP));

        QJsonObject jsonObjJPY = jsonObj.value(from + "_JPY").toObject();
        double rateJPY = jsonObjJPY.value(Date).toDouble();
        double Enter = Entercurrncy->text().toDouble();
        double resultJPY = Enter * rate;
        JPY->setText(QString::number(resultJPY));

        QJsonObject jsonObjKZT = jsonObj.value(from + "_KZT").toObject();
        double rateKZT = jsonObjKZT.value(Date).toDouble();
        double Enter = Entercurrncy->text().toDouble();
        double resultKZT = Enter * rate;
        KZT->setText(QString::number(resultKZT));

        QJsonObject jsonObjRUB = jsonObj.value(from + "_RUB").toObject();
        double rateRUB = jsonObjEUR.value(Date).toDouble();
        double Enter = Entercurrncy->text().toDouble();
        double resultRUB = Enter * rate;
        RUB->setText(QString::number(resultRUB));

    }
    reply->deleteLater();
}

void Downloader::get(QString &Date)
{
    QUrl url;
    url = QString("https://free.currconv.com/api/v7/convert?q=%3_USD,%3_EUR,%3_GBP,%3_JPY,%3_KZT,%3_RUB&compact=ultra&date=%1&apiKey=%2")
        .arg(Date).arg(API_KEY).arg(from);
    _networkManager->get(QNetworkRequest(url));
}

Downloader::~Downloader()
{
}