/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *cards;
    QPushButton *newcard;
    QPushButton *delcard;
    QListWidget *history;
    QLabel *label;
    QPushButton *clear_history;
    QPushButton *startform2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(601, 500);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        cards = new QTableWidget(centralwidget);
        if (cards->columnCount() < 5)
            cards->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        cards->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        cards->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        cards->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        cards->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        cards->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        cards->setObjectName(QString::fromUtf8("cards"));
        cards->setGeometry(QRect(10, 50, 580, 191));
        cards->setShowGrid(true);
        cards->horizontalHeader()->setDefaultSectionSize(115);
        newcard = new QPushButton(centralwidget);
        newcard->setObjectName(QString::fromUtf8("newcard"));
        newcard->setGeometry(QRect(10, 10, 141, 23));
        delcard = new QPushButton(centralwidget);
        delcard->setObjectName(QString::fromUtf8("delcard"));
        delcard->setGeometry(QRect(460, 10, 131, 23));
        history = new QListWidget(centralwidget);
        history->setObjectName(QString::fromUtf8("history"));
        history->setGeometry(QRect(10, 280, 581, 111));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 250, 101, 16));
        clear_history = new QPushButton(centralwidget);
        clear_history->setObjectName(QString::fromUtf8("clear_history"));
        clear_history->setGeometry(QRect(510, 250, 75, 23));
        startform2 = new QPushButton(centralwidget);
        startform2->setObjectName(QString::fromUtf8("startform2"));
        startform2->setGeometry(QRect(500, 410, 91, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 601, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = cards->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \320\272\320\260\321\200\321\202\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = cards->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\320\221\320\260\320\273\320\260\320\275\321\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = cards->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\201\321\217\321\206/\320\263\320\276\320\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = cards->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "PIN", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = cards->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\320\222\320\273\320\260\320\264\320\265\320\273\320\265\321\206", nullptr));
        newcard->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\277\321\203\321\201\321\202\320\270\321\202\321\214 \320\272\320\260\321\200\321\202\321\203", nullptr));
        delcard->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\321\203\321\216", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\271:", nullptr));
        clear_history->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        startform2->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214 \321\200\320\260\320\261\320\276\321\202\321\203\n"
"\321\201 \320\272\320\260\321\200\321\202\320\276\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
