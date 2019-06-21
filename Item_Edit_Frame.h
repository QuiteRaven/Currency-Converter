#ifndef ITEMEDITFRAME_H
#define ITEMEDITFRAME_H

#include <QFrame>

class ItemEditFrame : public QWidget
{
    Q_OBJECT

public:
    explicit ItemEditFrame(QWidget *parent = nullptr);
    ~ItemEditFrame();

private:
    void setup_currency(QLayout *currency);
};
#endif