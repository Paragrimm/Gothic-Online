/********************************************************************************
** Form generated from reading UI file 'CAddons.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADDONS_H
#define UI_CADDONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CAddons
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QListWidget *listAddons;
    QListWidget *listStatus;

    void setupUi(QWidget *CAddons)
    {
        if (CAddons->objectName().isEmpty())
            CAddons->setObjectName(QString::fromUtf8("CAddons"));
        CAddons->resize(400, 380);
        gridLayoutWidget = new QWidget(CAddons);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 29, 381, 341));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        listAddons = new QListWidget(gridLayoutWidget);
        listAddons->setObjectName(QString::fromUtf8("listAddons"));
        listAddons->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(listAddons, 0, 0, 1, 1);

        listStatus = new QListWidget(gridLayoutWidget);
        listStatus->setObjectName(QString::fromUtf8("listStatus"));
        listStatus->setMaximumSize(QSize(100, 16777215));
        listStatus->setProperty("isWrapping", QVariant(false));

        gridLayout->addWidget(listStatus, 0, 1, 1, 1);


        retranslateUi(CAddons);

        QMetaObject::connectSlotsByName(CAddons);
    } // setupUi

    void retranslateUi(QWidget *CAddons)
    {
        CAddons->setWindowTitle(QApplication::translate("CAddons", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CAddons: public Ui_CAddons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADDONS_H
