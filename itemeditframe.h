#ifndef ITEMEDITFRAME_H
#define ITEMEDITFRAME_H

#include <QFrame>

namespace Currency {

class ItemEditFrame : public QFrame
{

    Q_OBJECT

private:
    void setup_Kind(QLayout *L1);

public:
    ItemEditFrame(QWidget *parent = 0);
        ~ItemEditFrame();
};
}//namespace Currency
#endif // ITEMEDITFRAME_H
