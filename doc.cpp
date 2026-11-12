#include "doc.h"
#include "ui_doc.h"
#include <QDebug>

doc::doc(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::doc)
{
    ui->setupUi(this);

    connect(ui->exitOkButton, &QPushButton::clicked, this, [this]()
    {
        qDebug() << "Справочная информация закрывается";
        this->close();
    });
}

doc::~doc()
{
    delete ui;
}
