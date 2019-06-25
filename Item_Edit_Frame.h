#ifndef ITEMEDITFRAME_H
#define ITEMEDITFRAME_H

#include <QFrame>

#include "Downloader.h"

class ItemEditFrame : public QWidget
{
    Q_OBJECT

public:
    explicit ItemEditFrame(QWidget *parent = nullptr);
    ~ItemEditFrame();

    QString GetDate() const { return _date; }
private:
    void setup_currency(QLayout *currency);
    QString _date;
};
#endif