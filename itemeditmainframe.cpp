#include "item_edit_main_frame.h"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QSizePolicy>
#include <QComboBox>

ItemEditMainFrame::ItemEditMainFrame(QWidget *parent)
    :QFrame(parent)
{
    setFrameStyle(StyledPanel | Sunken);
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    QVBoxLayout *layout = new QVBoxLayout(this);
    
        QHBoxLayout *layout_A = new QHBoxLayout();
        layout->setMargin(0);
        layout->addLayout(layout_A);
        setup_USD(layout_A);
        setup_EUR(layout_A);

        QHBoxLayout *layout_B = new QHBoxLayout();
        layout->setMargin(0);
        layout->addLayout(layout_B);
        setup_GBP(layout_B);
        setup_JPY(layout_B);

        QHBoxLayout *layout_C = new QHBoxLayout();
        layout->setMargin(0);
        layout->addLayout(layout_C);
        setup_KZT(layout_C);
        setup_RUB(layout_C);
}

void ItemEditMainFrame::setup_USD(QLayout *currency)
{
    QVBoxLayout *layout = new QVBoxLayout();
    layout->setMargin(10);
    currency->addItem(layout);

    QLabel *text = new QLabel(this);
    text->setText(tr("USD"));
    layout->addWidget(text, 0, Qt::AlignBottom);

    QLineEdit *field = new QLineEdit(this);
    field->setReadOnly(true);
    layout->addWidget(field);
}

void ItemEditMainFrame::setup_EUR(QLayout *currency)
{
    QVBoxLayout *layout = new QVBoxLayout();
    layout->setMargin(10);
    currency->addItem(layout);

    QLabel *text = new QLabel(this);
    text->setText(tr("EUR"));
    layout->addWidget(text, 0, Qt::AlignBottom);

    QLineEdit *field = new QLineEdit(this);
    field->setReadOnly(true);
    layout->addWidget(field);
}

void ItemEditMainFrame::setup_GBP(QLayout *currency)
{
    QVBoxLayout *layout = new QVBoxLayout();
    layout->setMargin(10);
    currency->addItem(layout);

    QLabel *text = new QLabel(this);
    text->setText(tr("GBP"));
    layout->addWidget(text, 0, Qt::AlignBottom);

    QLineEdit *field = new QLineEdit(this);
    field->setReadOnly(true);
    layout->addWidget(field);
}

void ItemEditMainFrame::setup_JPY(QLayout *currency)
{
    QVBoxLayout *layout = new QVBoxLayout();
    layout->setMargin(10);
    currency->addItem(layout);

    QLabel *text = new QLabel(this);
    text->setText(tr("JPY"));
    layout->addWidget(text, 0, Qt::AlignBottom);

    QLineEdit *field = new QLineEdit(this);
    field->setReadOnly(true);
    layout->addWidget(field);
}

void ItemEditMainFrame::setup_KZT(QLayout *currency)
{
    QVBoxLayout *layout = new QVBoxLayout();
    layout->setMargin(10);
    currency->addItem(layout);

    QLabel *text = new QLabel(this);
    text->setText(tr("KZT"));
    layout->addWidget(text, 0, Qt::AlignBottom);

    QLineEdit *field = new QLineEdit(this);
    field->setReadOnly(true);
    layout->addWidget(field);
}

void ItemEditMainFrame::setup_RUB(QLayout *currency)
{
    QVBoxLayout *layout = new QVBoxLayout();
   
    layout->setMargin(10);
    currency->addItem(layout);

    QLabel *text = new QLabel(this);
    text->setText(tr("RUB"));
    layout->addWidget(text, 0, Qt::AlignBottom);

    QLineEdit *field = new QLineEdit(this);
    field->setReadOnly(true);
    layout->addWidget(field);
}

ItemEditMainFrame::~ItemEditMainFrame()
{
}
