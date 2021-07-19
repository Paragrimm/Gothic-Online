/********************************************************************************
** Form generated from reading UI file 'CFavorite.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFAVORITE_H
#define UI_CFAVORITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CFavorite
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *labelIP;
    QLineEdit *editIP;
    QPushButton *buttonOk;

    void setupUi(QWidget *CFavorite)
    {
        if (CFavorite->objectName().isEmpty())
            CFavorite->setObjectName(QString::fromUtf8("CFavorite"));
        CFavorite->resize(240, 86);
        gridLayoutWidget = new QWidget(CFavorite);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 29, 221, 51));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelIP = new QLabel(gridLayoutWidget);
        labelIP->setObjectName(QString::fromUtf8("labelIP"));

        gridLayout->addWidget(labelIP, 0, 0, 1, 1);

        editIP = new QLineEdit(gridLayoutWidget);
        editIP->setObjectName(QString::fromUtf8("editIP"));
        editIP->setMaxLength(80);

        gridLayout->addWidget(editIP, 0, 1, 1, 1);

        buttonOk = new QPushButton(gridLayoutWidget);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));

        gridLayout->addWidget(buttonOk, 1, 0, 1, 2);


        retranslateUi(CFavorite);

        QMetaObject::connectSlotsByName(CFavorite);
    } // setupUi

    void retranslateUi(QWidget *CFavorite)
    {
        CFavorite->setWindowTitle(QApplication::translate("CFavorite", "Form", nullptr));
        labelIP->setText(QApplication::translate("CFavorite", "IP:Port", nullptr));
        buttonOk->setText(QApplication::translate("CFavorite", "Action", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CFavorite: public Ui_CFavorite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFAVORITE_H
