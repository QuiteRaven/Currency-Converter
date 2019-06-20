#ifndef ITEMEDITFRAME_H
#define ITEMEDITFRAME_H

#include <QFrame>

class ItemEditFrame : public QFrame
{

	Q_OBJECT

public:
	ItemEditFrame(QWidget *parent = 0);
		~ItemEditFrame();

private:
	void setup_Kind(QLayout *L1);
};
#endif