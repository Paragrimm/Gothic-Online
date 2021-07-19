/********************************************************************************
** Form generated from reading UI file 'CDownloader.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CDOWNLOADER_H
#define UI_CDOWNLOADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDownloader
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QProgressBar *progressBar;
    QLabel *labelSpeed;
    QLabel *labelSize;
    QLabel *labelInfo;
    QProgressBar *progressBarTotal;
    QLabel *labelTotalSize;

    void setupUi(QWidget *CDownloader)
    {
        if (CDownloader->objectName().isEmpty())
            CDownloader->setObjectName(QString::fromUtf8("CDownloader"));
        CDownloader->resize(400, 160);
        gridLayoutWidget = new QWidget(CDownloader);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 39, 381, 111));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        progressBar = new QProgressBar(gridLayoutWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        gridLayout->addWidget(progressBar, 2, 0, 1, 2);

        labelSpeed = new QLabel(gridLayoutWidget);
        labelSpeed->setObjectName(QString::fromUtf8("labelSpeed"));
        labelSpeed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelSpeed, 3, 1, 1, 1);

        labelSize = new QLabel(gridLayoutWidget);
        labelSize->setObjectName(QString::fromUtf8("labelSize"));

        gridLayout->addWidget(labelSize, 3, 0, 1, 1);

        labelInfo = new QLabel(gridLayoutWidget);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));

        gridLayout->addWidget(labelInfo, 4, 0, 1, 2);

        progressBarTotal = new QProgressBar(gridLayoutWidget);
        progressBarTotal->setObjectName(QString::fromUtf8("progressBarTotal"));
        progressBarTotal->setValue(24);

        gridLayout->addWidget(progressBarTotal, 0, 0, 1, 2);

        labelTotalSize = new QLabel(gridLayoutWidget);
        labelTotalSize->setObjectName(QString::fromUtf8("labelTotalSize"));

        gridLayout->addWidget(labelTotalSize, 1, 0, 1, 1);


        retranslateUi(CDownloader);

        QMetaObject::connectSlotsByName(CDownloader);
    } // setupUi

    void retranslateUi(QWidget *CDownloader)
    {
        CDownloader->setWindowTitle(QApplication::translate("CDownloader", "Form", nullptr));
        labelSpeed->setText(QString());
        labelSize->setText(QApplication::translate("CDownloader", "TextLabel", nullptr));
        labelInfo->setText(QApplication::translate("CDownloader", "TextLabel", nullptr));
        labelTotalSize->setText(QApplication::translate("CDownloader", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CDownloader: public Ui_CDownloader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CDOWNLOADER_H
