
#include "main_window.h"
#include <QPushButton>
#include <QHBoxLayout>
#include <QDebug>

#include "wid_button.h"
#include "wid_lab.h"
#include "wid_left/wid_left.h"
#include "wid_right/wid_right.h"

#include <QUdpSocket>

main_window::main_window(QWidget *parent) : QWidget(parent)
{
    QPushButton *butt1 = new QPushButton("butt1",this);
    wid_button *butt2 = new wid_button(this);
    butt2->setText("butt2");

    wid_lab *lab1 = new wid_lab(this);
    lab1->setText("lab1");

    wid_lab *lab2 = new wid_lab(this);
    lab2->setText("lab2");

    wid_left *r1 = new wid_left(this);
    wid_right *r2 = new wid_right(this);


    QHBoxLayout *lay = new QHBoxLayout(this);
    lay->addWidget(butt1);
    lay->addWidget(butt2);
    lay->addWidget(lab1);
    lay->addWidget(lab2);
    lay->addWidget(r1);
    lay->addWidget(r2);


    connect(butt2,&wid_button::clicked,[=](){
        qDebug()<<"clicked";
        emit sn_click();
    });
    connect(this,&main_window::sn_click,[=](){
        qDebug()<<"sn_click";
    });
}

main_window::~main_window()
{
}