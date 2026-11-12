/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionTutor;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPlainTextEdit *mainTextEdit;
    QSlider *fontSlider;
    QLabel *fontLabel;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1091, 727);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionTutor = new QAction(MainWindow);
        actionTutor->setObjectName("actionTutor");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        mainTextEdit = new QPlainTextEdit(centralwidget);
        mainTextEdit->setObjectName("mainTextEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainTextEdit->sizePolicy().hasHeightForWidth());
        mainTextEdit->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(50);
        mainTextEdit->setFont(font);
        mainTextEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::IBeamCursor)));

        gridLayout->addWidget(mainTextEdit, 0, 2, 1, 1);

        fontSlider = new QSlider(centralwidget);
        fontSlider->setObjectName("fontSlider");
        fontSlider->setOrientation(Qt::Orientation::Vertical);

        gridLayout->addWidget(fontSlider, 0, 0, 1, 1);

        fontLabel = new QLabel(centralwidget);
        fontLabel->setObjectName("fontLabel");
        QFont font1;
        font1.setPointSize(12);
        fontLabel->setFont(font1);

        gridLayout->addWidget(fontLabel, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1091, 23));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addSeparator();
        menu->addAction(actionSave);
        menu->addSeparator();
        menu->addAction(actionExit);
        menu->addAction(actionTutor);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "\321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "\320\262\321\213\321\205\320\276\320\264", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTutor->setText(QCoreApplication::translate("MainWindow", "\321\201\320\277\321\200\320\260\320\262\320\272\320\260 | \321\202\321\203\321\202\320\276\321\200\320\270\320\260\320\273", nullptr));
#if QT_CONFIG(shortcut)
        actionTutor->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        mainTextEdit->setPlainText(QString());
        fontLabel->setText(QCoreApplication::translate("MainWindow", "null", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\321\204\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
