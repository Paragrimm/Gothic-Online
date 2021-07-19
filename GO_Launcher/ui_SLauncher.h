/********************************************************************************
** Form generated from reading UI file 'SLauncher.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLAUNCHER_H
#define UI_SLAUNCHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SLauncher
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *labelLogo;
    QHBoxLayout *horizontalLayout;
    QWidget *userWidget;
    QGridLayout *gridLayout_4;
    QPushButton *buttonAddons;
    QLineEdit *editNickname;
    QComboBox *cboxLanguage;
    QPushButton *buttonOptions;
    QLabel *labelNickname;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonRefresh;
    QTabWidget *tabServerList;
    QWidget *tabInternet;
    QGridLayout *gridLayout_2;
    QTreeWidget *treeInternet;
    QWidget *tabFavorite;
    QGridLayout *gridLayout_3;
    QPushButton *buttonEdit;
    QPushButton *buttonAdd;
    QPushButton *buttonRemove;
    QTreeWidget *treeFavorite;
    QLabel *labelStatus;
    QGroupBox *gboxInfo;
    QVBoxLayout *verticalLayout;
    QLabel *viewHostname;
    QLabel *viewIP;
    QLabel *viewPort;
    QLabel *viewWorld;
    QLabel *viewVersion;
    QLabel *viewOnlinePlayers;
    QLabel *viewPing;
    QLabel *labelDescription;
    QLabel *viewDescription;

    void setupUi(QWidget *SLauncher)
    {
        if (SLauncher->objectName().isEmpty())
            SLauncher->setObjectName(QString::fromUtf8("SLauncher"));
        SLauncher->resize(900, 506);
        gridLayoutWidget = new QWidget(SLauncher);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 881, 481));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelLogo = new QLabel(gridLayoutWidget);
        labelLogo->setObjectName(QString::fromUtf8("labelLogo"));
        labelLogo->setMaximumSize(QSize(16777215, 100));
        labelLogo->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelLogo, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        userWidget = new QWidget(gridLayoutWidget);
        userWidget->setObjectName(QString::fromUtf8("userWidget"));
        userWidget->setStyleSheet(QString::fromUtf8("QWidget#userWidget\n"
"{\n"
"	background-color: rgba(50, 50, 50, 0.7);\n"
"	border: 1px solid #444;\n"
"}"));
        gridLayout_4 = new QGridLayout(userWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        buttonAddons = new QPushButton(userWidget);
        buttonAddons->setObjectName(QString::fromUtf8("buttonAddons"));
        buttonAddons->setMinimumSize(QSize(0, 0));

        gridLayout_4->addWidget(buttonAddons, 0, 2, 1, 1);

        editNickname = new QLineEdit(userWidget);
        editNickname->setObjectName(QString::fromUtf8("editNickname"));
        editNickname->setMinimumSize(QSize(50, 0));
        editNickname->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_4->addWidget(editNickname, 0, 1, 1, 1);

        cboxLanguage = new QComboBox(userWidget);
        cboxLanguage->setObjectName(QString::fromUtf8("cboxLanguage"));
        cboxLanguage->setMinimumSize(QSize(110, 0));

        gridLayout_4->addWidget(cboxLanguage, 0, 4, 1, 1);

        buttonOptions = new QPushButton(userWidget);
        buttonOptions->setObjectName(QString::fromUtf8("buttonOptions"));
        buttonOptions->setMinimumSize(QSize(0, 0));

        gridLayout_4->addWidget(buttonOptions, 0, 3, 1, 1);

        labelNickname = new QLabel(userWidget);
        labelNickname->setObjectName(QString::fromUtf8("labelNickname"));
        labelNickname->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_4->addWidget(labelNickname, 0, 0, 1, 1);


        horizontalLayout->addWidget(userWidget);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        buttonRefresh = new QPushButton(gridLayoutWidget);
        buttonRefresh->setObjectName(QString::fromUtf8("buttonRefresh"));
        buttonRefresh->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(buttonRefresh, 3, 1, 1, 1);

        tabServerList = new QTabWidget(gridLayoutWidget);
        tabServerList->setObjectName(QString::fromUtf8("tabServerList"));
        tabInternet = new QWidget();
        tabInternet->setObjectName(QString::fromUtf8("tabInternet"));
        gridLayout_2 = new QGridLayout(tabInternet);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        treeInternet = new QTreeWidget(tabInternet);
        treeInternet->setObjectName(QString::fromUtf8("treeInternet"));
        treeInternet->header()->setCascadingSectionResizes(false);
        treeInternet->header()->setMinimumSectionSize(30);
        treeInternet->header()->setDefaultSectionSize(70);
        treeInternet->header()->setHighlightSections(false);
        treeInternet->header()->setProperty("showSortIndicator", QVariant(false));

        gridLayout_2->addWidget(treeInternet, 0, 0, 1, 1);

        tabServerList->addTab(tabInternet, QString());
        tabFavorite = new QWidget();
        tabFavorite->setObjectName(QString::fromUtf8("tabFavorite"));
        gridLayout_3 = new QGridLayout(tabFavorite);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        buttonEdit = new QPushButton(tabFavorite);
        buttonEdit->setObjectName(QString::fromUtf8("buttonEdit"));

        gridLayout_3->addWidget(buttonEdit, 1, 1, 1, 1);

        buttonAdd = new QPushButton(tabFavorite);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));

        gridLayout_3->addWidget(buttonAdd, 1, 0, 1, 1);

        buttonRemove = new QPushButton(tabFavorite);
        buttonRemove->setObjectName(QString::fromUtf8("buttonRemove"));

        gridLayout_3->addWidget(buttonRemove, 1, 2, 1, 1);

        treeFavorite = new QTreeWidget(tabFavorite);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeFavorite->setHeaderItem(__qtreewidgetitem);
        treeFavorite->setObjectName(QString::fromUtf8("treeFavorite"));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Symbol"));
        font.setUnderline(false);
        treeFavorite->setFont(font);
        treeFavorite->header()->setMinimumSectionSize(30);
        treeFavorite->header()->setDefaultSectionSize(70);

        gridLayout_3->addWidget(treeFavorite, 0, 0, 1, 3);

        tabServerList->addTab(tabFavorite, QString());

        gridLayout->addWidget(tabServerList, 1, 0, 1, 1);

        labelStatus = new QLabel(gridLayoutWidget);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));
        labelStatus->setStyleSheet(QString::fromUtf8("QLabel#labelStatus\n"
"{\n"
"	color: #fff;\n"
"	font-weight: bold;\n"
"	background: rgba(0, 0, 0, 0.5);\n"
"	padding: 3px;\n"
"}"));

        gridLayout->addWidget(labelStatus, 2, 0, 1, 1);

        gboxInfo = new QGroupBox(gridLayoutWidget);
        gboxInfo->setObjectName(QString::fromUtf8("gboxInfo"));
        gboxInfo->setMinimumSize(QSize(250, 0));
        verticalLayout = new QVBoxLayout(gboxInfo);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        viewHostname = new QLabel(gboxInfo);
        viewHostname->setObjectName(QString::fromUtf8("viewHostname"));
        viewHostname->setMaximumSize(QSize(16777215, 14));

        verticalLayout->addWidget(viewHostname);

        viewIP = new QLabel(gboxInfo);
        viewIP->setObjectName(QString::fromUtf8("viewIP"));
        viewIP->setMaximumSize(QSize(16777215, 14));

        verticalLayout->addWidget(viewIP);

        viewPort = new QLabel(gboxInfo);
        viewPort->setObjectName(QString::fromUtf8("viewPort"));
        viewPort->setMaximumSize(QSize(16777215, 14));

        verticalLayout->addWidget(viewPort);

        viewWorld = new QLabel(gboxInfo);
        viewWorld->setObjectName(QString::fromUtf8("viewWorld"));
        viewWorld->setMaximumSize(QSize(16777215, 14));

        verticalLayout->addWidget(viewWorld);

        viewVersion = new QLabel(gboxInfo);
        viewVersion->setObjectName(QString::fromUtf8("viewVersion"));
        viewVersion->setMaximumSize(QSize(16777215, 14));

        verticalLayout->addWidget(viewVersion);

        viewOnlinePlayers = new QLabel(gboxInfo);
        viewOnlinePlayers->setObjectName(QString::fromUtf8("viewOnlinePlayers"));
        viewOnlinePlayers->setMaximumSize(QSize(16777215, 14));

        verticalLayout->addWidget(viewOnlinePlayers);

        viewPing = new QLabel(gboxInfo);
        viewPing->setObjectName(QString::fromUtf8("viewPing"));
        viewPing->setMaximumSize(QSize(16777215, 14));

        verticalLayout->addWidget(viewPing);

        labelDescription = new QLabel(gboxInfo);
        labelDescription->setObjectName(QString::fromUtf8("labelDescription"));
        labelDescription->setMaximumSize(QSize(16777215, 14));
        labelDescription->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelDescription);

        viewDescription = new QLabel(gboxInfo);
        viewDescription->setObjectName(QString::fromUtf8("viewDescription"));
        viewDescription->setMinimumSize(QSize(0, 0));
        viewDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(viewDescription);


        gridLayout->addWidget(gboxInfo, 1, 1, 2, 1);


        retranslateUi(SLauncher);

        tabServerList->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SLauncher);
    } // setupUi

    void retranslateUi(QWidget *SLauncher)
    {
        SLauncher->setWindowTitle(QApplication::translate("SLauncher", "SLauncher", nullptr));
        labelLogo->setText(QApplication::translate("SLauncher", "<html><head/><body><p><a href=\"www.gothic-online.com.pl\"><img src=\":/img/go_logo.png\"/></a></p></body></html>", nullptr));
        buttonAddons->setText(QApplication::translate("SLauncher", "Addons", nullptr));
        buttonOptions->setText(QApplication::translate("SLauncher", "Options", nullptr));
        labelNickname->setText(QApplication::translate("SLauncher", "Nickname:", nullptr));
        buttonRefresh->setText(QApplication::translate("SLauncher", "Refresh", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeInternet->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("SLauncher", "1", nullptr));
        tabServerList->setTabText(tabServerList->indexOf(tabInternet), QApplication::translate("SLauncher", "Tab 1", nullptr));
        buttonEdit->setText(QApplication::translate("SLauncher", "PushButton", nullptr));
        buttonAdd->setText(QApplication::translate("SLauncher", "PushButton", nullptr));
        buttonRemove->setText(QApplication::translate("SLauncher", "PushButton", nullptr));
        tabServerList->setTabText(tabServerList->indexOf(tabFavorite), QApplication::translate("SLauncher", "Tab 2", nullptr));
        labelStatus->setText(QString());
        gboxInfo->setTitle(QApplication::translate("SLauncher", "GroupBox", nullptr));
        viewHostname->setText(QString());
        viewIP->setText(QString());
        viewPort->setText(QString());
        viewWorld->setText(QString());
        viewVersion->setText(QString());
        viewOnlinePlayers->setText(QString());
        viewPing->setText(QString());
        labelDescription->setText(QApplication::translate("SLauncher", "Description:", nullptr));
        viewDescription->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SLauncher: public Ui_SLauncher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLAUNCHER_H
