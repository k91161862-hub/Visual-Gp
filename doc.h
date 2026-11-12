#ifndef DOC_H
#define DOC_H

#include <QDialog>

namespace Ui {
class doc;
}

class doc : public QDialog
{
    Q_OBJECT

public:
    explicit doc(QWidget *parent = nullptr);
    ~doc();

private:
    Ui::doc *ui;
};

#endif // DOC_H
