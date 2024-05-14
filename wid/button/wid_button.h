
#ifndef WID_BUTTON_H
#define WID_BUTTON_H

#include <QWidget>
#include <QPushButton>

class wid_button : public QPushButton
{
    Q_OBJECT
public:
    using QPushButton::QPushButton;
    wid_button(QWidget *parent = nullptr);
    ~wid_button();

signals:

protected:

private:

};
#endif // WID_BUTTON_H
