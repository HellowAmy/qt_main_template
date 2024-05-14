
#ifndef WID_LAB_H
#define WID_LAB_H

#include <QWidget>
#include <QLabel>

class wid_lab : public QLabel
{
    Q_OBJECT
public:
    wid_lab(QWidget *parent = nullptr);
    ~wid_lab();

signals:

protected:

private:

};
#endif // WID_LAB_H
