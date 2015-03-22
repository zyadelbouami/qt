#include "monaffichage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Monaffichage w;
    w.show();

    return a.exec();
}
