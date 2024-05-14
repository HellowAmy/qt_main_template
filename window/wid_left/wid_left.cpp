
#include "wid_left.h"

#include "wid_button.h"
#include <QVBoxLayout>

wid_left::wid_left(QWidget *parent) : QWidget(parent)
{
    wid_button *butt = new wid_button(this);
    butt->setText("butt wid_left 1");

    wid_button *butt2 = new wid_button(this);
    butt2->setText("butt wid_left 2");

    QVBoxLayout *lay = new QVBoxLayout(this);
    lay->addWidget(butt);
    lay->addWidget(butt2);
}

wid_left::~wid_left()
{
}