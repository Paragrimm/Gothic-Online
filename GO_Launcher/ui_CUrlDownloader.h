/********************************************************************************
** Form generated from reading UI file 'CUrlDownloader.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURLDOWNLOADER_H
#define UI_CURLDOWNLOADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CUrlDownloader
{
public:

    void setupUi(QWidget *CUrlDownloader)
    {
        if (CUrlDownloader->objectName().isEmpty())
            CUrlDownloader->setObjectName(QString::fromUtf8("CUrlDownloader"));
        CUrlDownloader->resize(400, 300);

        retranslateUi(CUrlDownloader);

        QMetaObject::connectSlotsByName(CUrlDownloader);
    } // setupUi

    void retranslateUi(QWidget *CUrlDownloader)
    {
        CUrlDownloader->setWindowTitle(QApplication::translate("CUrlDownloader", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CUrlDownloader: public Ui_CUrlDownloader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURLDOWNLOADER_H
