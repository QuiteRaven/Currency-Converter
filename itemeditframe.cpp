#include "item_edit_frame.h"
#include "currency_types.h"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QSizePolicy>
#include <QComboBox>

ItemEditFrame::ItemEditFrame(QWidget *parent)
    : QWidget(parent)
{
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
    QHBoxLayout *layout = new QHBoxLayout(this);
    {
        QLabel *text = new QLabel(this);
        text->setText(tr("Data"));
        layout->addWidget(text);

        QLineEdit *field = new QLineEdit(this);
        field->setMaxLength(10);
        field->setText(tr("XX/XX/XXXX"));
        layout->addWidget(field);

        layout->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum));

        QLabel *lable_A = new QLabel(this);
        lable_A->setText(tr("Enter currency"));
        layout->addWidget(lable_A);

        QLineEdit *field_A = new QLineEdit(this);
        field_A->setMaxLength(20);
        layout->addWidget(field_A);
        setup_currency(layout);
    }
}

void ItemEditFrame::setup_currency(QLayout *currency)
{
    QHBoxLayout *layout_A = new QHBoxLayout();
    currency->addItem(layout_A);

    QComboBox *dropList = new QComboBox(this);
    dropList->addItem(tr("USD"), USD);
    dropList->addItem(tr("EUR"), EUR);
    dropList->addItem(tr("GBP"), GBP);
    dropList->addItem(tr("JPY"), JPY);
    dropList->addItem(tr("KZT"), KZT);
    dropList->addItem(tr("RUB"), RUB);
    layout_A->addWidget(dropList);
}

ItemEditFrame::~ItemEditFrame()
{
}
