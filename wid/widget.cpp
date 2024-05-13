
#include "widget.h"

widget::widget(QWidget *parent) : QWidget(parent)
{
    QPushButton *butt = new QPushButton(this);
    butt->setText("123");
}

widget::~widget()
{
}