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
#include "drawing.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionBlack;
    QAction *actionWhite;
    QAction *actionRed;
    QAction *actionYellow;
    QAction *actionBlue;
    QAction *actionGreen;
    QAction *actionOrange;
    QAction *actionPixelpenna;
    QAction *actionFill;
    QAction *actionErase;
    QAction *actionFillNRFifo;
    QAction *actionSlow;
    QAction *actionNormal;
    QAction *actionsFast;
    QAction *actionUltraFast;
    QAction *actionFillNRStack;
    QAction *actionFull;
    QAction *actionSpiral;
    Drawing *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuTools;
    QMenu *menuFil;
    QMenu *menuHastighet;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(612, 364);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionBlack = new QAction(MainWindow);
        actionBlack->setObjectName(QString::fromUtf8("actionBlack"));
        actionBlack->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/black.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBlack->setIcon(icon);
        actionWhite = new QAction(MainWindow);
        actionWhite->setObjectName(QString::fromUtf8("actionWhite"));
        actionWhite->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/white.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWhite->setIcon(icon1);
        actionRed = new QAction(MainWindow);
        actionRed->setObjectName(QString::fromUtf8("actionRed"));
        actionRed->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/red.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRed->setIcon(icon2);
        actionYellow = new QAction(MainWindow);
        actionYellow->setObjectName(QString::fromUtf8("actionYellow"));
        actionYellow->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/yellow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionYellow->setIcon(icon3);
        actionBlue = new QAction(MainWindow);
        actionBlue->setObjectName(QString::fromUtf8("actionBlue"));
        actionBlue->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBlue->setIcon(icon4);
        actionGreen = new QAction(MainWindow);
        actionGreen->setObjectName(QString::fromUtf8("actionGreen"));
        actionGreen->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/green.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGreen->setIcon(icon5);
        actionOrange = new QAction(MainWindow);
        actionOrange->setObjectName(QString::fromUtf8("actionOrange"));
        actionOrange->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/orange.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOrange->setIcon(icon6);
        actionPixelpenna = new QAction(MainWindow);
        actionPixelpenna->setObjectName(QString::fromUtf8("actionPixelpenna"));
        actionPixelpenna->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPixelpenna->setIcon(icon7);
        actionFill = new QAction(MainWindow);
        actionFill->setObjectName(QString::fromUtf8("actionFill"));
        actionFill->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/fill1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFill->setIcon(icon8);
        actionErase = new QAction(MainWindow);
        actionErase->setObjectName(QString::fromUtf8("actionErase"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/erase.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionErase->setIcon(icon9);
        actionFillNRFifo = new QAction(MainWindow);
        actionFillNRFifo->setObjectName(QString::fromUtf8("actionFillNRFifo"));
        actionFillNRFifo->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/fill2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFillNRFifo->setIcon(icon10);
        actionSlow = new QAction(MainWindow);
        actionSlow->setObjectName(QString::fromUtf8("actionSlow"));
        actionSlow->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/turtle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSlow->setIcon(icon11);
        actionNormal = new QAction(MainWindow);
        actionNormal->setObjectName(QString::fromUtf8("actionNormal"));
        actionNormal->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/rabbit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNormal->setIcon(icon12);
        actionsFast = new QAction(MainWindow);
        actionsFast->setObjectName(QString::fromUtf8("actionsFast"));
        actionsFast->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/rocket.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionsFast->setIcon(icon13);
        actionUltraFast = new QAction(MainWindow);
        actionUltraFast->setObjectName(QString::fromUtf8("actionUltraFast"));
        actionUltraFast->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/cspeed.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUltraFast->setIcon(icon14);
        actionFillNRStack = new QAction(MainWindow);
        actionFillNRStack->setObjectName(QString::fromUtf8("actionFillNRStack"));
        actionFillNRStack->setCheckable(true);
        actionFillNRStack->setIcon(icon10);
        actionFull = new QAction(MainWindow);
        actionFull->setObjectName(QString::fromUtf8("actionFull"));
        actionFull->setCheckable(true);
        actionSpiral = new QAction(MainWindow);
        actionSpiral->setObjectName(QString::fromUtf8("actionSpiral"));
        centralWidget = new Drawing(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 612, 22));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(menuBar->sizePolicy().hasHeightForWidth());
        menuBar->setSizePolicy(sizePolicy1);
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuFil = new QMenu(menuBar);
        menuFil->setObjectName(QString::fromUtf8("menuFil"));
        menuHastighet = new QMenu(menuBar);
        menuHastighet->setObjectName(QString::fromUtf8("menuHastighet"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setIconSize(QSize(16, 16));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFil->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHastighet->menuAction());
        menuTools->addAction(actionBlack);
        menuTools->addAction(actionWhite);
        menuTools->addAction(actionRed);
        menuTools->addAction(actionYellow);
        menuTools->addAction(actionBlue);
        menuTools->addAction(actionGreen);
        menuTools->addAction(actionOrange);
        menuTools->addSeparator();
        menuTools->addAction(actionPixelpenna);
        menuTools->addAction(actionFill);
        menuTools->addAction(actionFull);
        menuTools->addAction(actionFillNRStack);
        menuTools->addAction(actionFillNRFifo);
        menuTools->addSeparator();
        menuFil->addAction(actionErase);
        menuHastighet->addAction(actionSlow);
        menuHastighet->addAction(actionNormal);
        menuHastighet->addAction(actionsFast);
        menuHastighet->addAction(actionUltraFast);
        mainToolBar->addAction(actionErase);
        mainToolBar->addAction(actionSpiral);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionBlack);
        mainToolBar->addAction(actionWhite);
        mainToolBar->addAction(actionRed);
        mainToolBar->addAction(actionYellow);
        mainToolBar->addAction(actionBlue);
        mainToolBar->addAction(actionGreen);
        mainToolBar->addAction(actionOrange);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPixelpenna);
        mainToolBar->addAction(actionFill);
        mainToolBar->addAction(actionFillNRStack);
        mainToolBar->addAction(actionFillNRFifo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSlow);
        mainToolBar->addAction(actionNormal);
        mainToolBar->addAction(actionsFast);
        mainToolBar->addAction(actionUltraFast);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "DALGO Paint", nullptr));
        actionBlack->setText(QCoreApplication::translate("MainWindow", "Svart", nullptr));
        actionWhite->setText(QCoreApplication::translate("MainWindow", "Vit", nullptr));
        actionRed->setText(QCoreApplication::translate("MainWindow", "R\303\266d", nullptr));
        actionYellow->setText(QCoreApplication::translate("MainWindow", "Gul", nullptr));
        actionBlue->setText(QCoreApplication::translate("MainWindow", "Bl\303\245", nullptr));
        actionGreen->setText(QCoreApplication::translate("MainWindow", "Gr\303\266n", nullptr));
        actionOrange->setText(QCoreApplication::translate("MainWindow", "Orange", nullptr));
        actionPixelpenna->setText(QCoreApplication::translate("MainWindow", "Pixelpenna", nullptr));
        actionFill->setText(QCoreApplication::translate("MainWindow", "Fyll", nullptr));
        actionErase->setText(QCoreApplication::translate("MainWindow", "Radera allt!", nullptr));
        actionFillNRFifo->setText(QCoreApplication::translate("MainWindow", "Fyll NR FIFO", nullptr));
        actionSlow->setText(QCoreApplication::translate("MainWindow", "l\303\245ngsam", nullptr));
        actionNormal->setText(QCoreApplication::translate("MainWindow", "lagom", nullptr));
        actionsFast->setText(QCoreApplication::translate("MainWindow", "snabb", nullptr));
        actionUltraFast->setText(QCoreApplication::translate("MainWindow", "c-speed", nullptr));
        actionFillNRStack->setText(QCoreApplication::translate("MainWindow", "Fyll NR Stack", nullptr));
        actionFull->setText(QCoreApplication::translate("MainWindow", "Full", nullptr));
        actionSpiral->setText(QCoreApplication::translate("MainWindow", "Spiral", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Verktyg", nullptr));
        menuFil->setTitle(QCoreApplication::translate("MainWindow", "Fil", nullptr));
        menuHastighet->setTitle(QCoreApplication::translate("MainWindow", "Hastighet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
