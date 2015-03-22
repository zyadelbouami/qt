#ifndef MONAFFICHAGE_H
#define MONAFFICHAGE_H

#include <QMainWindow>

namespace Ui {
class Monaffichage;
}

class Monaffichage : public QMainWindow
{
    Q_OBJECT

public:
    explicit Monaffichage(QWidget *parent = 0);
    ~Monaffichage();

private:
    Ui::Monaffichage *ui;
};

#endif // MONAFFICHAGE_H
