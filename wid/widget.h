
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>

class widget : public QWidget
{
    Q_OBJECT
public:
    widget(QWidget *parent = nullptr);
    ~widget();

signals:

protected:

private:

};
#endif // WIDGET_H
