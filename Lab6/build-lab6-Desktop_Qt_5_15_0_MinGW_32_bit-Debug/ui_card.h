/********************************************************************************
** Form generated from reading UI file 'card.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARD_H
#define UI_CARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Card
{
public:
    QAction *buy_smth;
    QAction *returnbuy;
    QAction *is_working;
    QAction *balance;
    QAction *work_end;
    QWidget *centralwidget;
    QLabel *numlab;
    QLabel *valid;
    QLabel *name;
    QLabel *CHNM;
    QPushButton *PIN;
    QPushButton *balance_info;
    QPushButton *base_balance;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Card)
    {
        if (Card->objectName().isEmpty())
            Card->setObjectName(QString::fromUtf8("Card"));
        Card->resize(652, 394);
        buy_smth = new QAction(Card);
        buy_smth->setObjectName(QString::fromUtf8("buy_smth"));
        returnbuy = new QAction(Card);
        returnbuy->setObjectName(QString::fromUtf8("returnbuy"));
        is_working = new QAction(Card);
        is_working->setObjectName(QString::fromUtf8("is_working"));
        balance = new QAction(Card);
        balance->setObjectName(QString::fromUtf8("balance"));
        work_end = new QAction(Card);
        work_end->setObjectName(QString::fromUtf8("work_end"));
        centralwidget = new QWidget(Card);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        numlab = new QLabel(centralwidget);
        numlab->setObjectName(QString::fromUtf8("numlab"));
        numlab->setGeometry(QRect(12, 220, 291, 50));
        numlab->setStyleSheet(QString::fromUtf8("font: 75 24pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        numlab->setFrameShape(QFrame::NoFrame);
        valid = new QLabel(centralwidget);
        valid->setObjectName(QString::fromUtf8("valid"));
        valid->setGeometry(QRect(350, 223, 151, 41));
        valid->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        name = new QLabel(centralwidget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(270, 290, 291, 50));
        name->setStyleSheet(QString::fromUtf8("font: 75 24pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        name->setFrameShape(QFrame::NoFrame);
        CHNM = new QLabel(centralwidget);
        CHNM->setObjectName(QString::fromUtf8("CHNM"));
        CHNM->setGeometry(QRect(270, 270, 181, 21));
        CHNM->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        PIN = new QPushButton(centralwidget);
        PIN->setObjectName(QString::fromUtf8("PIN"));
        PIN->setGeometry(QRect(470, 20, 75, 23));
        balance_info = new QPushButton(centralwidget);
        balance_info->setObjectName(QString::fromUtf8("balance_info"));
        balance_info->setGeometry(QRect(560, 20, 75, 23));
        base_balance = new QPushButton(centralwidget);
        base_balance->setObjectName(QString::fromUtf8("base_balance"));
        base_balance->setGeometry(QRect(560, 140, 75, 23));
        Card->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Card);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 652, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        Card->setMenuBar(menubar);
        statusbar = new QStatusBar(Card);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Card->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(buy_smth);
        menu->addAction(returnbuy);
        menu->addAction(is_working);
        menu->addAction(balance);
        menu->addAction(work_end);

        retranslateUi(Card);

        QMetaObject::connectSlotsByName(Card);
    } // setupUi

    void retranslateUi(QMainWindow *Card)
    {
        Card->setWindowTitle(QCoreApplication::translate("Card", "Card", nullptr));
        buy_smth->setText(QCoreApplication::translate("Card", "\320\241\320\276\320\262\320\265\321\200\321\210\320\270\321\202\321\214 \320\277\320\276\320\272\321\203\320\277\320\272\321\203", nullptr));
        returnbuy->setText(QCoreApplication::translate("Card", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214 \321\202\320\276\320\262\320\260\321\200", nullptr));
        is_working->setText(QCoreApplication::translate("Card", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214 \321\200\320\260\320\261\320\276\321\202\321\203 \320\272\320\260\321\200\321\202\321\213", nullptr));
        balance->setText(QCoreApplication::translate("Card", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214 \320\261\320\260\320\273\320\260\320\275\321\201 \320\272\320\260\321\200\321\202\321\213", nullptr));
        work_end->setText(QCoreApplication::translate("Card", "\320\227\320\260\320\272\320\276\320\275\321\207\320\270\321\202\321\214 \321\200\320\260\320\261\320\276\321\202\321\203 \321\201 \320\272\320\260\321\200\321\202\320\276\320\271", nullptr));
        numlab->setText(QCoreApplication::translate("Card", "0460 5453 6070 8391", nullptr));
        valid->setText(QCoreApplication::translate("Card", "Valid:", nullptr));
        name->setText(QCoreApplication::translate("Card", "Vasya Pupkin", nullptr));
        CHNM->setText(QCoreApplication::translate("Card", "Cardholder name:", nullptr));
        PIN->setText(QString());
        balance_info->setText(QString());
        base_balance->setText(QString());
        menu->setTitle(QCoreApplication::translate("Card", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Card: public Ui_Card {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARD_H
