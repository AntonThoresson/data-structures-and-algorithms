/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include "torngrafik.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionReset;
    QAction *action3;
    QAction *action5;
    QAction *action10;
    QAction *action20;
    QAction *action50;
    QAction *action100;
    QAction *actionMix;
    QAction *actionSlow;
    QAction *actionNormal;
    QAction *actionFast;
    QAction *actionmoveDiscs;
    QAction *actionsolveMixed;
    Torngrafik *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuSettings;
    QMenu *menuSize;
    QMenu *menuSpeed;
    QMenu *menuUppdrag;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/reset.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReset->setIcon(icon);
        action3 = new QAction(MainWindow);
        action3->setObjectName(QString::fromUtf8("action3"));
        action3->setCheckable(true);
        action5 = new QAction(MainWindow);
        action5->setObjectName(QString::fromUtf8("action5"));
        action5->setCheckable(true);
        action10 = new QAction(MainWindow);
        action10->setObjectName(QString::fromUtf8("action10"));
        action10->setCheckable(true);
        action20 = new QAction(MainWindow);
        action20->setObjectName(QString::fromUtf8("action20"));
        action20->setCheckable(true);
        action50 = new QAction(MainWindow);
        action50->setObjectName(QString::fromUtf8("action50"));
        action50->setCheckable(true);
        action100 = new QAction(MainWindow);
        action100->setObjectName(QString::fromUtf8("action100"));
        action100->setCheckable(true);
        actionMix = new QAction(MainWindow);
        actionMix->setObjectName(QString::fromUtf8("actionMix"));
        actionSlow = new QAction(MainWindow);
        actionSlow->setObjectName(QString::fromUtf8("actionSlow"));
        actionSlow->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/turtle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSlow->setIcon(icon1);
        actionNormal = new QAction(MainWindow);
        actionNormal->setObjectName(QString::fromUtf8("actionNormal"));
        actionNormal->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/rabbit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNormal->setIcon(icon2);
        actionFast = new QAction(MainWindow);
        actionFast->setObjectName(QString::fromUtf8("actionFast"));
        actionFast->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/rocket.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFast->setIcon(icon3);
        actionmoveDiscs = new QAction(MainWindow);
        actionmoveDiscs->setObjectName(QString::fromUtf8("actionmoveDiscs"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/play1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionmoveDiscs->setIcon(icon4);
        actionsolveMixed = new QAction(MainWindow);
        actionsolveMixed->setObjectName(QString::fromUtf8("actionsolveMixed"));
        centralWidget = new Torngrafik(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuSize = new QMenu(menuSettings);
        menuSize->setObjectName(QString::fromUtf8("menuSize"));
        menuSpeed = new QMenu(menuSettings);
        menuSpeed->setObjectName(QString::fromUtf8("menuSpeed"));
        menuUppdrag = new QMenu(menuBar);
        menuUppdrag->setObjectName(QString::fromUtf8("menuUppdrag"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuUppdrag->menuAction());
        menuSettings->addAction(actionReset);
        menuSettings->addAction(menuSize->menuAction());
        menuSettings->addAction(actionMix);
        menuSettings->addAction(menuSpeed->menuAction());
        menuSize->addAction(action3);
        menuSize->addAction(action5);
        menuSize->addAction(action10);
        menuSize->addAction(action20);
        menuSize->addAction(action50);
        menuSize->addAction(action100);
        menuSpeed->addAction(actionSlow);
        menuSpeed->addAction(actionNormal);
        menuSpeed->addAction(actionFast);
        menuUppdrag->addAction(actionmoveDiscs);
        menuUppdrag->addAction(actionsolveMixed);
        mainToolBar->addAction(actionSlow);
        mainToolBar->addAction(actionNormal);
        mainToolBar->addAction(actionFast);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionReset);
        mainToolBar->addAction(actionmoveDiscs);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionReset->setText(QCoreApplication::translate("MainWindow", "\303\205terst\303\244ll", nullptr));
        action3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        action5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        action10->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        action20->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        action50->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        action100->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        actionMix->setText(QCoreApplication::translate("MainWindow", "Blanda", nullptr));
        actionSlow->setText(QCoreApplication::translate("MainWindow", "l\303\245ngsam", nullptr));
        actionNormal->setText(QCoreApplication::translate("MainWindow", "lagom", nullptr));
        actionFast->setText(QCoreApplication::translate("MainWindow", "snabb", nullptr));
        actionmoveDiscs->setText(QCoreApplication::translate("MainWindow", "moveDiscs", nullptr));
        actionsolveMixed->setText(QCoreApplication::translate("MainWindow", "solveMixed", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MainWindow", "Inst\303\244llningar", nullptr));
        menuSize->setTitle(QCoreApplication::translate("MainWindow", "Storlek", nullptr));
        menuSpeed->setTitle(QCoreApplication::translate("MainWindow", "hastighet", nullptr));
        menuUppdrag->setTitle(QCoreApplication::translate("MainWindow", "Uppdrag", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
