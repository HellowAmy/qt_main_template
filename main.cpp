#include <QApplication>
#include <QWidget>

#include "window/main_window.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc,argv);

    main_window w;
    w.show();

    return a.exec();
}