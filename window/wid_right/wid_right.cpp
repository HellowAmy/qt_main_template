
#include "wid_right.h"

#include "wid_button.h"

#include <QHBoxLayout>

wid_right::wid_right(QWidget *parent) : QWidget(parent)
{
    wid_button *butt = new wid_button(this);
    butt->setText("butt wid_right");

    wid_button *butt2 = new wid_button("butt wid_right 2",this);

    QHBoxLayout *lay = new QHBoxLayout(this);
    lay->addWidget(butt);
    lay->addWidget(butt2);
}

wid_right::~wid_right()
{
}