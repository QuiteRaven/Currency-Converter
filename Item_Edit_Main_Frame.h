#ifndef ITEMEDITMAINFRAME_H
#define ITEMEDITMAINFRAME_H

#include <QFrame>

class  QLayout;

class ItemEditMainFrame : public QFrame
{
    Q_OBJECT

public:
    explicit ItemEditMainFrame(QWidget *parent = nullptr);
    ~ItemEditMainFrame();

private:
    void setup_USD(QLayout *currency);
    void setup_EUR(QLayout *currency);
    void setup_GBP(QLayout *currency);
    void setup_JPY(QLayout *currency);
    void setup_KZT(QLayout *currency);
    void setup_RUB(QLayout *currency);
};
#endif