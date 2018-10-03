/********************************************************************************
** Form generated from reading UI file 'stock.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCK_H
#define UI_STOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Stock
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Stock)
    {
        if (Stock->objectName().isEmpty())
            Stock->setObjectName(QStringLiteral("Stock"));
        Stock->resize(400, 300);
        menuBar = new QMenuBar(Stock);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Stock->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Stock);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Stock->addToolBar(mainToolBar);
        centralWidget = new QWidget(Stock);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Stock->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Stock);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Stock->setStatusBar(statusBar);

        retranslateUi(Stock);

        QMetaObject::connectSlotsByName(Stock);
    } // setupUi

    void retranslateUi(QMainWindow *Stock)
    {
        Stock->setWindowTitle(QApplication::translate("Stock", "Stock", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Stock: public Ui_Stock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCK_H
