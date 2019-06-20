#ifndef ITEMEDITMAINFRAME_H
#define ITEMEDITMAINFRAME_H

#include <QFrame>

class  QLayout;

class ItemEditMainFrame : public QFrame
{

	Q_OBJECT

public:
	ItemEditMainFrame(QWidget *parent = 0);
		~ItemEditMainFrame();

private:
	void setup_USD(QLayout *L1);
	void setup_EUR(QLayout *L1);
	void setup_GBP(QLayout *L1);
	void setup_JPY(QLayout *L1);
	void setup_KZT(QLayout *L1);
	void setup_RUB(QLayout *L1);
};

#endif