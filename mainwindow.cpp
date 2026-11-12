#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "doc.h"
//пока не умею использовать: #include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("VGp - Visual Gp text editor");

    QStringList args = QCoreApplication::arguments();
    int argc = args.size();

    int start_font_value = 50;
    ui->fontSlider->setRange(20, 200);
    ui->fontSlider->setValue(start_font_value);
    ui->fontLabel->setNum(start_font_value);

    if (argc > 1)
    {
        QFile file(args[1]);
        if (file.open(QIODevice::ReadWrite | QIODevice::Text))
        {
            QString text = file.readAll();
            ui->mainTextEdit->setPlainText(text);
            file.close();
        }

        else
        {
            QMessageBox::critical(this, tr("ошибка чтения"), tr("Не удалось прочитать файл по причине: ") + file.errorString());
            file.close();
        }
    }


    connect(ui->fontSlider, &QSlider::valueChanged, this, [this]()
    {
        QFont font = ui->mainTextEdit->font();
        int new_font = ui->fontSlider->value();

        font.setPointSize(new_font);
        ui->mainTextEdit->setFont(font);

        ui->fontLabel->setNum(new_font);
    });

    connect(ui->actionExit, &QAction::triggered, this, [this]() // выход
    {
        qDebug() << tr("Выход из приложения");
        QApplication::quit();
    });


    connect(ui->actionSave, &QAction::triggered, this, [this]() // сохранение
    {
        qDebug() << tr("Сохранение");

        QStringList args = QCoreApplication::arguments();
        int argc = args.size();

        if (argc > 1)
        {
            QFile file(args[1]);

            if (file.open(QIODevice::WriteOnly | QIODevice::Text))
            {
                QTextStream out(&file);
                out << ui->mainTextEdit->toPlainText();
                ui->statusbar->showMessage(tr("успешно записано!"));
                file.close();
            }

            else
            {
                QMessageBox::critical(this, tr("Ошибка записи"), tr("Не удалось сохранить по причине: ") + file.errorString());
                file.close();
            }
        }

        else
        {
            QMessageBox::warning(this, tr("отсутствие аргумента"), tr("Вы не передали аргумент с названием файла, поэтому записывать некуда. Чтобы узнать как открыть файл нажмите клавишу F1 или файл -> справка | туториал."));
        }
    });


    connect(ui->actionTutor, &QAction::triggered, this, [this]()
    {
        qDebug() << "Открыта справочная информация";
        doc w;
        w.setModal(true);
        w.exec();
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}
