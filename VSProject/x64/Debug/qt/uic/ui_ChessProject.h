/********************************************************************************
** Form generated from reading UI file 'ChessProject.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHESSPROJECT_H
#define UI_CHESSPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChessProjectClass
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_1;
    QLabel *label_3;
    QLabel *label_2;
    QListWidget *listGamesWidget;
    QPushButton *StartGameButton;
    QLabel *selectionLabel;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_c4;
    QPushButton *pushButton_f6;
    QPushButton *pushButton_f2;
    QPushButton *pushButton_e1;
    QPushButton *pushButton_h8;
    QPushButton *pushButton_g3;
    QPushButton *pushButton_f4;
    QPushButton *pushButton_f3;
    QPushButton *pushButton_e4;
    QPushButton *pushButton_g6;
    QPushButton *pushButton_b7;
    QPushButton *pushButton_f8;
    QPushButton *pushButton_d3;
    QPushButton *pushButton_a6;
    QPushButton *pushButton_g4;
    QPushButton *pushButton_c2;
    QPushButton *pushButton_b3;
    QPushButton *pushButton_c5;
    QPushButton *pushButton_b5;
    QPushButton *pushButton_b8;
    QPushButton *pushButton_g1;
    QPushButton *pushButton_h5;
    QPushButton *pushButton_d5;
    QPushButton *pushButton_c1;
    QPushButton *pushButton_a3;
    QPushButton *pushButton_d4;
    QPushButton *pushButton_h3;
    QPushButton *pushButton_g2;
    QPushButton *pushButton_a2;
    QPushButton *pushButton_c7;
    QPushButton *pushButton_b6;
    QPushButton *pushButton_d8;
    QPushButton *pushButton_c6;
    QPushButton *pushButton_d2;
    QPushButton *pushButton_b1;
    QPushButton *pushButton_h7;
    QPushButton *pushButton_d1;
    QPushButton *pushButton_a8;
    QPushButton *pushButton_e6;
    QPushButton *pushButton_e3;
    QPushButton *pushButton_c3;
    QPushButton *pushButton_e7;
    QPushButton *pushButton_h6;
    QPushButton *pushButton_a7;
    QPushButton *pushButton_h1;
    QPushButton *pushButton_e8;
    QPushButton *pushButton_a5;
    QPushButton *pushButton_f5;
    QPushButton *pushButton_e5;
    QPushButton *pushButton_g7;
    QPushButton *pushButton_g5;
    QPushButton *pushButton_a4;
    QPushButton *pushButton_c8;
    QPushButton *pushButton_b2;
    QPushButton *pushButton_h2;
    QPushButton *pushButton_d6;
    QPushButton *pushButton_a1;
    QPushButton *pushButton_b4;
    QPushButton *pushButton_f1;
    QPushButton *pushButton_d7;
    QPushButton *pushButton_h4;
    QPushButton *pushButton_e2;
    QPushButton *pushButton_f7;
    QPushButton *pushButton_g8;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QLabel *label_17;
    QLabel *label_15;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_16;
    QLabel *label_14;
    QLabel *label_18;

    void setupUi(QMainWindow *ChessProjectClass)
    {
        if (ChessProjectClass->objectName().isEmpty())
            ChessProjectClass->setObjectName(QString::fromUtf8("ChessProjectClass"));
        ChessProjectClass->resize(1294, 679);
        ChessProjectClass->setWindowOpacity(1.000000000000000);
        centralWidget = new QWidget(ChessProjectClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(760, 40, 491, 141));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_1 = new QLabel(verticalLayoutWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_1->setFont(font);
        label_1->setScaledContents(false);

        verticalLayout->addWidget(label_1);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        listGamesWidget = new QListWidget(centralWidget);
        listGamesWidget->setObjectName(QString::fromUtf8("listGamesWidget"));
        listGamesWidget->setGeometry(QRect(760, 200, 491, 281));
        listGamesWidget->setLineWidth(5);
        StartGameButton = new QPushButton(centralWidget);
        StartGameButton->setObjectName(QString::fromUtf8("StartGameButton"));
        StartGameButton->setGeometry(QRect(760, 550, 491, 51));
        QFont font1;
        font1.setPointSize(12);
        StartGameButton->setFont(font1);
        selectionLabel = new QLabel(centralWidget);
        selectionLabel->setObjectName(QString::fromUtf8("selectionLabel"));
        selectionLabel->setGeometry(QRect(760, 510, 391, 20));
        selectionLabel->setFont(font1);
        selectionLabel->setTextFormat(Qt::AutoText);
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(110, 70, 561, 542));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_c4 = new QPushButton(gridLayoutWidget);
        pushButton_c4->setObjectName(QString::fromUtf8("pushButton_c4"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_c4->sizePolicy().hasHeightForWidth());
        pushButton_c4->setSizePolicy(sizePolicy);
        pushButton_c4->setMinimumSize(QSize(60, 60));
        pushButton_c4->setMaximumSize(QSize(150, 150));
        QFont font2;
        font2.setPointSize(22);
        pushButton_c4->setFont(font2);
        pushButton_c4->setLayoutDirection(Qt::LeftToRight);
        pushButton_c4->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_c4, 2, 3, 1, 1);

        pushButton_f6 = new QPushButton(gridLayoutWidget);
        pushButton_f6->setObjectName(QString::fromUtf8("pushButton_f6"));
        sizePolicy.setHeightForWidth(pushButton_f6->sizePolicy().hasHeightForWidth());
        pushButton_f6->setSizePolicy(sizePolicy);
        pushButton_f6->setMinimumSize(QSize(60, 60));
        pushButton_f6->setMaximumSize(QSize(150, 150));
        QPalette palette;
        QBrush brush(QColor(255, 207, 159, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(255, 170, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_f6->setPalette(palette);
        pushButton_f6->setFont(font2);
        pushButton_f6->setLayoutDirection(Qt::LeftToRight);
        pushButton_f6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_f6, 5, 5, 1, 1);

        pushButton_f2 = new QPushButton(gridLayoutWidget);
        pushButton_f2->setObjectName(QString::fromUtf8("pushButton_f2"));
        sizePolicy.setHeightForWidth(pushButton_f2->sizePolicy().hasHeightForWidth());
        pushButton_f2->setSizePolicy(sizePolicy);
        pushButton_f2->setMinimumSize(QSize(60, 60));
        pushButton_f2->setMaximumSize(QSize(150, 150));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_f2->setPalette(palette1);
        pushButton_f2->setFont(font2);
        pushButton_f2->setLayoutDirection(Qt::LeftToRight);
        pushButton_f2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_f2, 5, 1, 1, 1);

        pushButton_e1 = new QPushButton(gridLayoutWidget);
        pushButton_e1->setObjectName(QString::fromUtf8("pushButton_e1"));
        sizePolicy.setHeightForWidth(pushButton_e1->sizePolicy().hasHeightForWidth());
        pushButton_e1->setSizePolicy(sizePolicy);
        pushButton_e1->setMinimumSize(QSize(60, 60));
        pushButton_e1->setMaximumSize(QSize(150, 150));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_e1->setPalette(palette2);
        pushButton_e1->setFont(font2);
        pushButton_e1->setLayoutDirection(Qt::LeftToRight);
        pushButton_e1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_e1, 4, 0, 1, 1);

        pushButton_h8 = new QPushButton(gridLayoutWidget);
        pushButton_h8->setObjectName(QString::fromUtf8("pushButton_h8"));
        sizePolicy.setHeightForWidth(pushButton_h8->sizePolicy().hasHeightForWidth());
        pushButton_h8->setSizePolicy(sizePolicy);
        pushButton_h8->setMinimumSize(QSize(60, 60));
        pushButton_h8->setMaximumSize(QSize(150, 150));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_h8->setPalette(palette3);
        pushButton_h8->setFont(font2);
        pushButton_h8->setLayoutDirection(Qt::LeftToRight);
        pushButton_h8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_h8, 7, 7, 1, 1);

        pushButton_g3 = new QPushButton(gridLayoutWidget);
        pushButton_g3->setObjectName(QString::fromUtf8("pushButton_g3"));
        sizePolicy.setHeightForWidth(pushButton_g3->sizePolicy().hasHeightForWidth());
        pushButton_g3->setSizePolicy(sizePolicy);
        pushButton_g3->setMinimumSize(QSize(60, 60));
        pushButton_g3->setMaximumSize(QSize(150, 150));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_g3->setPalette(palette4);
        pushButton_g3->setFont(font2);
        pushButton_g3->setLayoutDirection(Qt::LeftToRight);
        pushButton_g3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_g3, 6, 2, 1, 1);

        pushButton_f4 = new QPushButton(gridLayoutWidget);
        pushButton_f4->setObjectName(QString::fromUtf8("pushButton_f4"));
        sizePolicy.setHeightForWidth(pushButton_f4->sizePolicy().hasHeightForWidth());
        pushButton_f4->setSizePolicy(sizePolicy);
        pushButton_f4->setMinimumSize(QSize(60, 60));
        pushButton_f4->setMaximumSize(QSize(150, 150));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_f4->setPalette(palette5);
        pushButton_f4->setFont(font2);
        pushButton_f4->setLayoutDirection(Qt::LeftToRight);
        pushButton_f4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_f4, 5, 3, 1, 1);

        pushButton_f3 = new QPushButton(gridLayoutWidget);
        pushButton_f3->setObjectName(QString::fromUtf8("pushButton_f3"));
        sizePolicy.setHeightForWidth(pushButton_f3->sizePolicy().hasHeightForWidth());
        pushButton_f3->setSizePolicy(sizePolicy);
        pushButton_f3->setMinimumSize(QSize(60, 60));
        pushButton_f3->setMaximumSize(QSize(150, 150));
        pushButton_f3->setFont(font2);
        pushButton_f3->setLayoutDirection(Qt::LeftToRight);
        pushButton_f3->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_f3, 5, 2, 1, 1);

        pushButton_e4 = new QPushButton(gridLayoutWidget);
        pushButton_e4->setObjectName(QString::fromUtf8("pushButton_e4"));
        sizePolicy.setHeightForWidth(pushButton_e4->sizePolicy().hasHeightForWidth());
        pushButton_e4->setSizePolicy(sizePolicy);
        pushButton_e4->setMinimumSize(QSize(60, 60));
        pushButton_e4->setMaximumSize(QSize(150, 150));
        pushButton_e4->setFont(font2);
        pushButton_e4->setLayoutDirection(Qt::LeftToRight);
        pushButton_e4->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_e4, 4, 3, 1, 1);

        pushButton_g6 = new QPushButton(gridLayoutWidget);
        pushButton_g6->setObjectName(QString::fromUtf8("pushButton_g6"));
        sizePolicy.setHeightForWidth(pushButton_g6->sizePolicy().hasHeightForWidth());
        pushButton_g6->setSizePolicy(sizePolicy);
        pushButton_g6->setMinimumSize(QSize(60, 60));
        pushButton_g6->setMaximumSize(QSize(150, 150));
        pushButton_g6->setFont(font2);
        pushButton_g6->setLayoutDirection(Qt::LeftToRight);
        pushButton_g6->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_g6, 6, 5, 1, 1);

        pushButton_b7 = new QPushButton(gridLayoutWidget);
        pushButton_b7->setObjectName(QString::fromUtf8("pushButton_b7"));
        sizePolicy.setHeightForWidth(pushButton_b7->sizePolicy().hasHeightForWidth());
        pushButton_b7->setSizePolicy(sizePolicy);
        pushButton_b7->setMinimumSize(QSize(60, 60));
        pushButton_b7->setMaximumSize(QSize(150, 150));
        pushButton_b7->setFont(font2);
        pushButton_b7->setLayoutDirection(Qt::LeftToRight);
        pushButton_b7->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_b7, 1, 6, 1, 1);

        pushButton_f8 = new QPushButton(gridLayoutWidget);
        pushButton_f8->setObjectName(QString::fromUtf8("pushButton_f8"));
        sizePolicy.setHeightForWidth(pushButton_f8->sizePolicy().hasHeightForWidth());
        pushButton_f8->setSizePolicy(sizePolicy);
        pushButton_f8->setMinimumSize(QSize(60, 60));
        pushButton_f8->setMaximumSize(QSize(150, 150));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_f8->setPalette(palette6);
        pushButton_f8->setFont(font2);
        pushButton_f8->setLayoutDirection(Qt::LeftToRight);
        pushButton_f8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_f8, 5, 7, 1, 1);

        pushButton_d3 = new QPushButton(gridLayoutWidget);
        pushButton_d3->setObjectName(QString::fromUtf8("pushButton_d3"));
        sizePolicy.setHeightForWidth(pushButton_d3->sizePolicy().hasHeightForWidth());
        pushButton_d3->setSizePolicy(sizePolicy);
        pushButton_d3->setMinimumSize(QSize(60, 60));
        pushButton_d3->setMaximumSize(QSize(150, 150));
        pushButton_d3->setFont(font2);
        pushButton_d3->setLayoutDirection(Qt::LeftToRight);
        pushButton_d3->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_d3, 3, 2, 1, 1);

        pushButton_a6 = new QPushButton(gridLayoutWidget);
        pushButton_a6->setObjectName(QString::fromUtf8("pushButton_a6"));
        sizePolicy.setHeightForWidth(pushButton_a6->sizePolicy().hasHeightForWidth());
        pushButton_a6->setSizePolicy(sizePolicy);
        pushButton_a6->setMinimumSize(QSize(60, 60));
        pushButton_a6->setMaximumSize(QSize(150, 150));
        pushButton_a6->setFont(font2);
        pushButton_a6->setLayoutDirection(Qt::LeftToRight);
        pushButton_a6->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_a6, 0, 5, 1, 1);

        pushButton_g4 = new QPushButton(gridLayoutWidget);
        pushButton_g4->setObjectName(QString::fromUtf8("pushButton_g4"));
        sizePolicy.setHeightForWidth(pushButton_g4->sizePolicy().hasHeightForWidth());
        pushButton_g4->setSizePolicy(sizePolicy);
        pushButton_g4->setMinimumSize(QSize(60, 60));
        pushButton_g4->setMaximumSize(QSize(150, 150));
        pushButton_g4->setFont(font2);
        pushButton_g4->setLayoutDirection(Qt::LeftToRight);
        pushButton_g4->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_g4, 6, 3, 1, 1);

        pushButton_c2 = new QPushButton(gridLayoutWidget);
        pushButton_c2->setObjectName(QString::fromUtf8("pushButton_c2"));
        sizePolicy.setHeightForWidth(pushButton_c2->sizePolicy().hasHeightForWidth());
        pushButton_c2->setSizePolicy(sizePolicy);
        pushButton_c2->setMinimumSize(QSize(60, 60));
        pushButton_c2->setMaximumSize(QSize(150, 150));
        pushButton_c2->setFont(font2);
        pushButton_c2->setLayoutDirection(Qt::LeftToRight);
        pushButton_c2->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_c2, 2, 1, 1, 1);

        pushButton_b3 = new QPushButton(gridLayoutWidget);
        pushButton_b3->setObjectName(QString::fromUtf8("pushButton_b3"));
        sizePolicy.setHeightForWidth(pushButton_b3->sizePolicy().hasHeightForWidth());
        pushButton_b3->setSizePolicy(sizePolicy);
        pushButton_b3->setMinimumSize(QSize(60, 60));
        pushButton_b3->setMaximumSize(QSize(150, 150));
        pushButton_b3->setFont(font2);
        pushButton_b3->setLayoutDirection(Qt::LeftToRight);
        pushButton_b3->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_b3, 1, 2, 1, 1);

        pushButton_c5 = new QPushButton(gridLayoutWidget);
        pushButton_c5->setObjectName(QString::fromUtf8("pushButton_c5"));
        sizePolicy.setHeightForWidth(pushButton_c5->sizePolicy().hasHeightForWidth());
        pushButton_c5->setSizePolicy(sizePolicy);
        pushButton_c5->setMinimumSize(QSize(60, 60));
        pushButton_c5->setMaximumSize(QSize(150, 150));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_c5->setPalette(palette7);
        pushButton_c5->setFont(font2);
        pushButton_c5->setLayoutDirection(Qt::LeftToRight);
        pushButton_c5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_c5, 2, 4, 1, 1);

        pushButton_b5 = new QPushButton(gridLayoutWidget);
        pushButton_b5->setObjectName(QString::fromUtf8("pushButton_b5"));
        sizePolicy.setHeightForWidth(pushButton_b5->sizePolicy().hasHeightForWidth());
        pushButton_b5->setSizePolicy(sizePolicy);
        pushButton_b5->setMinimumSize(QSize(60, 60));
        pushButton_b5->setMaximumSize(QSize(150, 150));
        pushButton_b5->setFont(font2);
        pushButton_b5->setLayoutDirection(Qt::LeftToRight);
        pushButton_b5->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_b5, 1, 4, 1, 1);

        pushButton_b8 = new QPushButton(gridLayoutWidget);
        pushButton_b8->setObjectName(QString::fromUtf8("pushButton_b8"));
        sizePolicy.setHeightForWidth(pushButton_b8->sizePolicy().hasHeightForWidth());
        pushButton_b8->setSizePolicy(sizePolicy);
        pushButton_b8->setMinimumSize(QSize(60, 60));
        pushButton_b8->setMaximumSize(QSize(150, 150));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Button, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_b8->setPalette(palette8);
        pushButton_b8->setFont(font2);
        pushButton_b8->setLayoutDirection(Qt::LeftToRight);
        pushButton_b8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_b8, 1, 7, 1, 1);

        pushButton_g1 = new QPushButton(gridLayoutWidget);
        pushButton_g1->setObjectName(QString::fromUtf8("pushButton_g1"));
        sizePolicy.setHeightForWidth(pushButton_g1->sizePolicy().hasHeightForWidth());
        pushButton_g1->setSizePolicy(sizePolicy);
        pushButton_g1->setMinimumSize(QSize(60, 60));
        pushButton_g1->setMaximumSize(QSize(150, 150));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Button, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_g1->setPalette(palette9);
        pushButton_g1->setFont(font2);
        pushButton_g1->setLayoutDirection(Qt::LeftToRight);
        pushButton_g1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_g1, 6, 0, 1, 1);

        pushButton_h5 = new QPushButton(gridLayoutWidget);
        pushButton_h5->setObjectName(QString::fromUtf8("pushButton_h5"));
        sizePolicy.setHeightForWidth(pushButton_h5->sizePolicy().hasHeightForWidth());
        pushButton_h5->setSizePolicy(sizePolicy);
        pushButton_h5->setMinimumSize(QSize(60, 60));
        pushButton_h5->setMaximumSize(QSize(150, 150));
        pushButton_h5->setFont(font2);
        pushButton_h5->setLayoutDirection(Qt::LeftToRight);
        pushButton_h5->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_h5, 7, 4, 1, 1);

        pushButton_d5 = new QPushButton(gridLayoutWidget);
        pushButton_d5->setObjectName(QString::fromUtf8("pushButton_d5"));
        sizePolicy.setHeightForWidth(pushButton_d5->sizePolicy().hasHeightForWidth());
        pushButton_d5->setSizePolicy(sizePolicy);
        pushButton_d5->setMinimumSize(QSize(60, 60));
        pushButton_d5->setMaximumSize(QSize(150, 150));
        pushButton_d5->setFont(font2);
        pushButton_d5->setLayoutDirection(Qt::LeftToRight);
        pushButton_d5->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_d5, 3, 4, 1, 1);

        pushButton_c1 = new QPushButton(gridLayoutWidget);
        pushButton_c1->setObjectName(QString::fromUtf8("pushButton_c1"));
        sizePolicy.setHeightForWidth(pushButton_c1->sizePolicy().hasHeightForWidth());
        pushButton_c1->setSizePolicy(sizePolicy);
        pushButton_c1->setMinimumSize(QSize(60, 60));
        pushButton_c1->setMaximumSize(QSize(150, 150));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Button, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_c1->setPalette(palette10);
        pushButton_c1->setFont(font2);
        pushButton_c1->setLayoutDirection(Qt::LeftToRight);
        pushButton_c1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_c1, 2, 0, 1, 1);

        pushButton_a3 = new QPushButton(gridLayoutWidget);
        pushButton_a3->setObjectName(QString::fromUtf8("pushButton_a3"));
        sizePolicy.setHeightForWidth(pushButton_a3->sizePolicy().hasHeightForWidth());
        pushButton_a3->setSizePolicy(sizePolicy);
        pushButton_a3->setMinimumSize(QSize(60, 60));
        pushButton_a3->setMaximumSize(QSize(150, 150));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Button, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_a3->setPalette(palette11);
        pushButton_a3->setFont(font2);
        pushButton_a3->setLayoutDirection(Qt::LeftToRight);
        pushButton_a3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);\n"
""));

        gridLayout->addWidget(pushButton_a3, 0, 2, 1, 1);

        pushButton_d4 = new QPushButton(gridLayoutWidget);
        pushButton_d4->setObjectName(QString::fromUtf8("pushButton_d4"));
        sizePolicy.setHeightForWidth(pushButton_d4->sizePolicy().hasHeightForWidth());
        pushButton_d4->setSizePolicy(sizePolicy);
        pushButton_d4->setMinimumSize(QSize(60, 60));
        pushButton_d4->setMaximumSize(QSize(150, 150));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Button, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_d4->setPalette(palette12);
        pushButton_d4->setFont(font2);
        pushButton_d4->setLayoutDirection(Qt::LeftToRight);
        pushButton_d4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_d4, 3, 3, 1, 1);

        pushButton_h3 = new QPushButton(gridLayoutWidget);
        pushButton_h3->setObjectName(QString::fromUtf8("pushButton_h3"));
        sizePolicy.setHeightForWidth(pushButton_h3->sizePolicy().hasHeightForWidth());
        pushButton_h3->setSizePolicy(sizePolicy);
        pushButton_h3->setMinimumSize(QSize(60, 60));
        pushButton_h3->setMaximumSize(QSize(150, 150));
        pushButton_h3->setFont(font2);
        pushButton_h3->setLayoutDirection(Qt::LeftToRight);
        pushButton_h3->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);\n"
"\n"
""));

        gridLayout->addWidget(pushButton_h3, 7, 2, 1, 1);

        pushButton_g2 = new QPushButton(gridLayoutWidget);
        pushButton_g2->setObjectName(QString::fromUtf8("pushButton_g2"));
        sizePolicy.setHeightForWidth(pushButton_g2->sizePolicy().hasHeightForWidth());
        pushButton_g2->setSizePolicy(sizePolicy);
        pushButton_g2->setMinimumSize(QSize(60, 60));
        pushButton_g2->setMaximumSize(QSize(150, 150));
        pushButton_g2->setFont(font2);
        pushButton_g2->setLayoutDirection(Qt::LeftToRight);
        pushButton_g2->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);\n"
""));

        gridLayout->addWidget(pushButton_g2, 6, 1, 1, 1);

        pushButton_a2 = new QPushButton(gridLayoutWidget);
        pushButton_a2->setObjectName(QString::fromUtf8("pushButton_a2"));
        sizePolicy.setHeightForWidth(pushButton_a2->sizePolicy().hasHeightForWidth());
        pushButton_a2->setSizePolicy(sizePolicy);
        pushButton_a2->setMinimumSize(QSize(60, 60));
        pushButton_a2->setMaximumSize(QSize(150, 150));
        pushButton_a2->setFont(font2);
        pushButton_a2->setLayoutDirection(Qt::LeftToRight);
        pushButton_a2->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_a2, 0, 1, 1, 1);

        pushButton_c7 = new QPushButton(gridLayoutWidget);
        pushButton_c7->setObjectName(QString::fromUtf8("pushButton_c7"));
        sizePolicy.setHeightForWidth(pushButton_c7->sizePolicy().hasHeightForWidth());
        pushButton_c7->setSizePolicy(sizePolicy);
        pushButton_c7->setMinimumSize(QSize(60, 60));
        pushButton_c7->setMaximumSize(QSize(150, 150));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::Button, brush);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush);
        palette13.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_c7->setPalette(palette13);
        pushButton_c7->setFont(font2);
        pushButton_c7->setLayoutDirection(Qt::LeftToRight);
        pushButton_c7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_c7, 2, 6, 1, 1);

        pushButton_b6 = new QPushButton(gridLayoutWidget);
        pushButton_b6->setObjectName(QString::fromUtf8("pushButton_b6"));
        sizePolicy.setHeightForWidth(pushButton_b6->sizePolicy().hasHeightForWidth());
        pushButton_b6->setSizePolicy(sizePolicy);
        pushButton_b6->setMinimumSize(QSize(60, 60));
        pushButton_b6->setMaximumSize(QSize(150, 150));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::Button, brush);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush);
        palette14.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_b6->setPalette(palette14);
        pushButton_b6->setFont(font2);
        pushButton_b6->setLayoutDirection(Qt::LeftToRight);
        pushButton_b6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_b6, 1, 5, 1, 1);

        pushButton_d8 = new QPushButton(gridLayoutWidget);
        pushButton_d8->setObjectName(QString::fromUtf8("pushButton_d8"));
        sizePolicy.setHeightForWidth(pushButton_d8->sizePolicy().hasHeightForWidth());
        pushButton_d8->setSizePolicy(sizePolicy);
        pushButton_d8->setMinimumSize(QSize(60, 60));
        pushButton_d8->setMaximumSize(QSize(150, 150));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::Button, brush);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush);
        palette15.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_d8->setPalette(palette15);
        pushButton_d8->setFont(font2);
        pushButton_d8->setLayoutDirection(Qt::LeftToRight);
        pushButton_d8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_d8, 3, 7, 1, 1);

        pushButton_c6 = new QPushButton(gridLayoutWidget);
        pushButton_c6->setObjectName(QString::fromUtf8("pushButton_c6"));
        sizePolicy.setHeightForWidth(pushButton_c6->sizePolicy().hasHeightForWidth());
        pushButton_c6->setSizePolicy(sizePolicy);
        pushButton_c6->setMinimumSize(QSize(60, 60));
        pushButton_c6->setMaximumSize(QSize(150, 150));
        pushButton_c6->setFont(font2);
        pushButton_c6->setLayoutDirection(Qt::LeftToRight);
        pushButton_c6->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_c6, 2, 5, 1, 1);

        pushButton_d2 = new QPushButton(gridLayoutWidget);
        pushButton_d2->setObjectName(QString::fromUtf8("pushButton_d2"));
        sizePolicy.setHeightForWidth(pushButton_d2->sizePolicy().hasHeightForWidth());
        pushButton_d2->setSizePolicy(sizePolicy);
        pushButton_d2->setMinimumSize(QSize(60, 60));
        pushButton_d2->setMaximumSize(QSize(150, 150));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::Button, brush);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush);
        palette16.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_d2->setPalette(palette16);
        pushButton_d2->setFont(font2);
        pushButton_d2->setLayoutDirection(Qt::LeftToRight);
        pushButton_d2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_d2, 3, 1, 1, 1);

        pushButton_b1 = new QPushButton(gridLayoutWidget);
        pushButton_b1->setObjectName(QString::fromUtf8("pushButton_b1"));
        sizePolicy.setHeightForWidth(pushButton_b1->sizePolicy().hasHeightForWidth());
        pushButton_b1->setSizePolicy(sizePolicy);
        pushButton_b1->setMinimumSize(QSize(60, 60));
        pushButton_b1->setMaximumSize(QSize(150, 150));
        pushButton_b1->setFont(font2);
        pushButton_b1->setLayoutDirection(Qt::LeftToRight);
        pushButton_b1->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_b1, 1, 0, 1, 1);

        pushButton_h7 = new QPushButton(gridLayoutWidget);
        pushButton_h7->setObjectName(QString::fromUtf8("pushButton_h7"));
        pushButton_h7->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton_h7->sizePolicy().hasHeightForWidth());
        pushButton_h7->setSizePolicy(sizePolicy);
        pushButton_h7->setMinimumSize(QSize(60, 60));
        pushButton_h7->setMaximumSize(QSize(150, 150));
        pushButton_h7->setFont(font2);
        pushButton_h7->setLayoutDirection(Qt::LeftToRight);
        pushButton_h7->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_h7, 7, 6, 1, 1);

        pushButton_d1 = new QPushButton(gridLayoutWidget);
        pushButton_d1->setObjectName(QString::fromUtf8("pushButton_d1"));
        sizePolicy.setHeightForWidth(pushButton_d1->sizePolicy().hasHeightForWidth());
        pushButton_d1->setSizePolicy(sizePolicy);
        pushButton_d1->setMinimumSize(QSize(60, 60));
        pushButton_d1->setMaximumSize(QSize(150, 150));
        pushButton_d1->setFont(font2);
        pushButton_d1->setLayoutDirection(Qt::LeftToRight);
        pushButton_d1->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_d1, 3, 0, 1, 1);

        pushButton_a8 = new QPushButton(gridLayoutWidget);
        pushButton_a8->setObjectName(QString::fromUtf8("pushButton_a8"));
        sizePolicy.setHeightForWidth(pushButton_a8->sizePolicy().hasHeightForWidth());
        pushButton_a8->setSizePolicy(sizePolicy);
        pushButton_a8->setMinimumSize(QSize(60, 60));
        pushButton_a8->setMaximumSize(QSize(150, 150));
        pushButton_a8->setFont(font2);
        pushButton_a8->setLayoutDirection(Qt::LeftToRight);
        pushButton_a8->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_a8, 0, 7, 1, 1);

        pushButton_e6 = new QPushButton(gridLayoutWidget);
        pushButton_e6->setObjectName(QString::fromUtf8("pushButton_e6"));
        sizePolicy.setHeightForWidth(pushButton_e6->sizePolicy().hasHeightForWidth());
        pushButton_e6->setSizePolicy(sizePolicy);
        pushButton_e6->setMinimumSize(QSize(60, 60));
        pushButton_e6->setMaximumSize(QSize(150, 150));
        pushButton_e6->setFont(font2);
        pushButton_e6->setLayoutDirection(Qt::LeftToRight);
        pushButton_e6->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_e6, 4, 5, 1, 1);

        pushButton_e3 = new QPushButton(gridLayoutWidget);
        pushButton_e3->setObjectName(QString::fromUtf8("pushButton_e3"));
        sizePolicy.setHeightForWidth(pushButton_e3->sizePolicy().hasHeightForWidth());
        pushButton_e3->setSizePolicy(sizePolicy);
        pushButton_e3->setMinimumSize(QSize(60, 60));
        pushButton_e3->setMaximumSize(QSize(150, 150));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::Button, brush);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush);
        palette17.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_e3->setPalette(palette17);
        pushButton_e3->setFont(font2);
        pushButton_e3->setLayoutDirection(Qt::LeftToRight);
        pushButton_e3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_e3, 4, 2, 1, 1);

        pushButton_c3 = new QPushButton(gridLayoutWidget);
        pushButton_c3->setObjectName(QString::fromUtf8("pushButton_c3"));
        sizePolicy.setHeightForWidth(pushButton_c3->sizePolicy().hasHeightForWidth());
        pushButton_c3->setSizePolicy(sizePolicy);
        pushButton_c3->setMinimumSize(QSize(60, 60));
        pushButton_c3->setMaximumSize(QSize(150, 150));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::Button, brush);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush);
        palette18.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_c3->setPalette(palette18);
        pushButton_c3->setFont(font2);
        pushButton_c3->setLayoutDirection(Qt::LeftToRight);
        pushButton_c3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_c3, 2, 2, 1, 1);

        pushButton_e7 = new QPushButton(gridLayoutWidget);
        pushButton_e7->setObjectName(QString::fromUtf8("pushButton_e7"));
        sizePolicy.setHeightForWidth(pushButton_e7->sizePolicy().hasHeightForWidth());
        pushButton_e7->setSizePolicy(sizePolicy);
        pushButton_e7->setMinimumSize(QSize(60, 60));
        pushButton_e7->setMaximumSize(QSize(150, 150));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::Button, brush);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush);
        palette19.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_e7->setPalette(palette19);
        pushButton_e7->setFont(font2);
        pushButton_e7->setLayoutDirection(Qt::LeftToRight);
        pushButton_e7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_e7, 4, 6, 1, 1);

        pushButton_h6 = new QPushButton(gridLayoutWidget);
        pushButton_h6->setObjectName(QString::fromUtf8("pushButton_h6"));
        sizePolicy.setHeightForWidth(pushButton_h6->sizePolicy().hasHeightForWidth());
        pushButton_h6->setSizePolicy(sizePolicy);
        pushButton_h6->setMinimumSize(QSize(60, 60));
        pushButton_h6->setMaximumSize(QSize(150, 150));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::Button, brush);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush);
        palette20.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_h6->setPalette(palette20);
        pushButton_h6->setFont(font2);
        pushButton_h6->setLayoutDirection(Qt::LeftToRight);
        pushButton_h6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_h6, 7, 5, 1, 1);

        pushButton_a7 = new QPushButton(gridLayoutWidget);
        pushButton_a7->setObjectName(QString::fromUtf8("pushButton_a7"));
        sizePolicy.setHeightForWidth(pushButton_a7->sizePolicy().hasHeightForWidth());
        pushButton_a7->setSizePolicy(sizePolicy);
        pushButton_a7->setMinimumSize(QSize(60, 60));
        pushButton_a7->setMaximumSize(QSize(150, 150));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::Button, brush);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush);
        palette21.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_a7->setPalette(palette21);
        pushButton_a7->setFont(font2);
        pushButton_a7->setLayoutDirection(Qt::LeftToRight);
        pushButton_a7->setStyleSheet(QString::fromUtf8("	background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);		"));

        gridLayout->addWidget(pushButton_a7, 0, 6, 1, 1);

        pushButton_h1 = new QPushButton(gridLayoutWidget);
        pushButton_h1->setObjectName(QString::fromUtf8("pushButton_h1"));
        sizePolicy.setHeightForWidth(pushButton_h1->sizePolicy().hasHeightForWidth());
        pushButton_h1->setSizePolicy(sizePolicy);
        pushButton_h1->setMinimumSize(QSize(60, 60));
        pushButton_h1->setMaximumSize(QSize(150, 150));
        pushButton_h1->setFont(font2);
        pushButton_h1->setLayoutDirection(Qt::LeftToRight);
        pushButton_h1->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_h1, 7, 0, 1, 1);

        pushButton_e8 = new QPushButton(gridLayoutWidget);
        pushButton_e8->setObjectName(QString::fromUtf8("pushButton_e8"));
        sizePolicy.setHeightForWidth(pushButton_e8->sizePolicy().hasHeightForWidth());
        pushButton_e8->setSizePolicy(sizePolicy);
        pushButton_e8->setMinimumSize(QSize(60, 60));
        pushButton_e8->setMaximumSize(QSize(150, 150));
        pushButton_e8->setFont(font2);
        pushButton_e8->setLayoutDirection(Qt::LeftToRight);
        pushButton_e8->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_e8, 4, 7, 1, 1);

        pushButton_a5 = new QPushButton(gridLayoutWidget);
        pushButton_a5->setObjectName(QString::fromUtf8("pushButton_a5"));
        sizePolicy.setHeightForWidth(pushButton_a5->sizePolicy().hasHeightForWidth());
        pushButton_a5->setSizePolicy(sizePolicy);
        pushButton_a5->setMinimumSize(QSize(60, 60));
        pushButton_a5->setMaximumSize(QSize(150, 150));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::Button, brush);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush);
        palette22.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_a5->setPalette(palette22);
        pushButton_a5->setFont(font2);
        pushButton_a5->setLayoutDirection(Qt::LeftToRight);
        pushButton_a5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_a5, 0, 4, 1, 1);

        pushButton_f5 = new QPushButton(gridLayoutWidget);
        pushButton_f5->setObjectName(QString::fromUtf8("pushButton_f5"));
        sizePolicy.setHeightForWidth(pushButton_f5->sizePolicy().hasHeightForWidth());
        pushButton_f5->setSizePolicy(sizePolicy);
        pushButton_f5->setMinimumSize(QSize(60, 60));
        pushButton_f5->setMaximumSize(QSize(150, 150));
        pushButton_f5->setFont(font2);
        pushButton_f5->setLayoutDirection(Qt::LeftToRight);
        pushButton_f5->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_f5, 5, 4, 1, 1);

        pushButton_e5 = new QPushButton(gridLayoutWidget);
        pushButton_e5->setObjectName(QString::fromUtf8("pushButton_e5"));
        sizePolicy.setHeightForWidth(pushButton_e5->sizePolicy().hasHeightForWidth());
        pushButton_e5->setSizePolicy(sizePolicy);
        pushButton_e5->setMinimumSize(QSize(60, 60));
        pushButton_e5->setMaximumSize(QSize(150, 150));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::Button, brush);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush);
        palette23.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_e5->setPalette(palette23);
        pushButton_e5->setFont(font2);
        pushButton_e5->setLayoutDirection(Qt::LeftToRight);
        pushButton_e5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_e5, 4, 4, 1, 1);

        pushButton_g7 = new QPushButton(gridLayoutWidget);
        pushButton_g7->setObjectName(QString::fromUtf8("pushButton_g7"));
        sizePolicy.setHeightForWidth(pushButton_g7->sizePolicy().hasHeightForWidth());
        pushButton_g7->setSizePolicy(sizePolicy);
        pushButton_g7->setMinimumSize(QSize(60, 60));
        pushButton_g7->setMaximumSize(QSize(150, 150));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::Button, brush);
        palette24.setBrush(QPalette::Active, QPalette::Base, brush);
        palette24.setBrush(QPalette::Active, QPalette::Window, brush);
        palette24.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette24.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_g7->setPalette(palette24);
        pushButton_g7->setFont(font2);
        pushButton_g7->setLayoutDirection(Qt::LeftToRight);
        pushButton_g7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_g7, 6, 6, 1, 1);

        pushButton_g5 = new QPushButton(gridLayoutWidget);
        pushButton_g5->setObjectName(QString::fromUtf8("pushButton_g5"));
        sizePolicy.setHeightForWidth(pushButton_g5->sizePolicy().hasHeightForWidth());
        pushButton_g5->setSizePolicy(sizePolicy);
        pushButton_g5->setMinimumSize(QSize(60, 60));
        pushButton_g5->setMaximumSize(QSize(150, 150));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::Button, brush);
        palette25.setBrush(QPalette::Active, QPalette::Base, brush);
        palette25.setBrush(QPalette::Active, QPalette::Window, brush);
        palette25.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette25.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_g5->setPalette(palette25);
        pushButton_g5->setFont(font2);
        pushButton_g5->setLayoutDirection(Qt::LeftToRight);
        pushButton_g5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_g5, 6, 4, 1, 1);

        pushButton_a4 = new QPushButton(gridLayoutWidget);
        pushButton_a4->setObjectName(QString::fromUtf8("pushButton_a4"));
        sizePolicy.setHeightForWidth(pushButton_a4->sizePolicy().hasHeightForWidth());
        pushButton_a4->setSizePolicy(sizePolicy);
        pushButton_a4->setMinimumSize(QSize(60, 60));
        pushButton_a4->setMaximumSize(QSize(150, 150));
        pushButton_a4->setFont(font2);
        pushButton_a4->setLayoutDirection(Qt::LeftToRight);
        pushButton_a4->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_a4, 0, 3, 1, 1);

        pushButton_c8 = new QPushButton(gridLayoutWidget);
        pushButton_c8->setObjectName(QString::fromUtf8("pushButton_c8"));
        sizePolicy.setHeightForWidth(pushButton_c8->sizePolicy().hasHeightForWidth());
        pushButton_c8->setSizePolicy(sizePolicy);
        pushButton_c8->setMinimumSize(QSize(60, 60));
        pushButton_c8->setMaximumSize(QSize(150, 150));
        pushButton_c8->setFont(font2);
        pushButton_c8->setLayoutDirection(Qt::LeftToRight);
        pushButton_c8->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_c8, 2, 7, 1, 1);

        pushButton_b2 = new QPushButton(gridLayoutWidget);
        pushButton_b2->setObjectName(QString::fromUtf8("pushButton_b2"));
        sizePolicy.setHeightForWidth(pushButton_b2->sizePolicy().hasHeightForWidth());
        pushButton_b2->setSizePolicy(sizePolicy);
        pushButton_b2->setMinimumSize(QSize(60, 60));
        pushButton_b2->setMaximumSize(QSize(150, 150));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::Button, brush);
        palette26.setBrush(QPalette::Active, QPalette::Base, brush);
        palette26.setBrush(QPalette::Active, QPalette::Window, brush);
        palette26.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette26.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette26.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_b2->setPalette(palette26);
        pushButton_b2->setFont(font2);
        pushButton_b2->setLayoutDirection(Qt::LeftToRight);
        pushButton_b2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_b2, 1, 1, 1, 1);

        pushButton_h2 = new QPushButton(gridLayoutWidget);
        pushButton_h2->setObjectName(QString::fromUtf8("pushButton_h2"));
        sizePolicy.setHeightForWidth(pushButton_h2->sizePolicy().hasHeightForWidth());
        pushButton_h2->setSizePolicy(sizePolicy);
        pushButton_h2->setMinimumSize(QSize(60, 60));
        pushButton_h2->setMaximumSize(QSize(150, 150));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::Button, brush);
        palette27.setBrush(QPalette::Active, QPalette::Base, brush);
        palette27.setBrush(QPalette::Active, QPalette::Window, brush);
        palette27.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette27.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette27.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_h2->setPalette(palette27);
        pushButton_h2->setFont(font2);
        pushButton_h2->setLayoutDirection(Qt::LeftToRight);
        pushButton_h2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_h2, 7, 1, 1, 1);

        pushButton_d6 = new QPushButton(gridLayoutWidget);
        pushButton_d6->setObjectName(QString::fromUtf8("pushButton_d6"));
        sizePolicy.setHeightForWidth(pushButton_d6->sizePolicy().hasHeightForWidth());
        pushButton_d6->setSizePolicy(sizePolicy);
        pushButton_d6->setMinimumSize(QSize(60, 60));
        pushButton_d6->setMaximumSize(QSize(150, 150));
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::Button, brush);
        palette28.setBrush(QPalette::Active, QPalette::Base, brush);
        palette28.setBrush(QPalette::Active, QPalette::Window, brush);
        palette28.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette28.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette28.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_d6->setPalette(palette28);
        pushButton_d6->setFont(font2);
        pushButton_d6->setLayoutDirection(Qt::LeftToRight);
        pushButton_d6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_d6, 3, 5, 1, 1);

        pushButton_a1 = new QPushButton(gridLayoutWidget);
        pushButton_a1->setObjectName(QString::fromUtf8("pushButton_a1"));
        sizePolicy.setHeightForWidth(pushButton_a1->sizePolicy().hasHeightForWidth());
        pushButton_a1->setSizePolicy(sizePolicy);
        pushButton_a1->setMinimumSize(QSize(60, 60));
        pushButton_a1->setMaximumSize(QSize(150, 150));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::Button, brush);
        palette29.setBrush(QPalette::Active, QPalette::Base, brush);
        palette29.setBrush(QPalette::Active, QPalette::Window, brush);
        palette29.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette29.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette29.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_a1->setPalette(palette29);
        pushButton_a1->setFont(font2);
        pushButton_a1->setLayoutDirection(Qt::LeftToRight);
        pushButton_a1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_a1, 0, 0, 1, 1);

        pushButton_b4 = new QPushButton(gridLayoutWidget);
        pushButton_b4->setObjectName(QString::fromUtf8("pushButton_b4"));
        sizePolicy.setHeightForWidth(pushButton_b4->sizePolicy().hasHeightForWidth());
        pushButton_b4->setSizePolicy(sizePolicy);
        pushButton_b4->setMinimumSize(QSize(60, 60));
        pushButton_b4->setMaximumSize(QSize(150, 150));
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::Button, brush);
        palette30.setBrush(QPalette::Active, QPalette::Base, brush);
        palette30.setBrush(QPalette::Active, QPalette::Window, brush);
        palette30.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette30.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette30.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_b4->setPalette(palette30);
        pushButton_b4->setFont(font2);
        pushButton_b4->setLayoutDirection(Qt::LeftToRight);
        pushButton_b4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_b4, 1, 3, 1, 1);

        pushButton_f1 = new QPushButton(gridLayoutWidget);
        pushButton_f1->setObjectName(QString::fromUtf8("pushButton_f1"));
        sizePolicy.setHeightForWidth(pushButton_f1->sizePolicy().hasHeightForWidth());
        pushButton_f1->setSizePolicy(sizePolicy);
        pushButton_f1->setMinimumSize(QSize(60, 60));
        pushButton_f1->setMaximumSize(QSize(150, 150));
        pushButton_f1->setFont(font2);
        pushButton_f1->setLayoutDirection(Qt::LeftToRight);
        pushButton_f1->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_f1, 5, 0, 1, 1);

        pushButton_d7 = new QPushButton(gridLayoutWidget);
        pushButton_d7->setObjectName(QString::fromUtf8("pushButton_d7"));
        sizePolicy.setHeightForWidth(pushButton_d7->sizePolicy().hasHeightForWidth());
        pushButton_d7->setSizePolicy(sizePolicy);
        pushButton_d7->setMinimumSize(QSize(60, 60));
        pushButton_d7->setMaximumSize(QSize(150, 150));
        pushButton_d7->setFont(font2);
        pushButton_d7->setLayoutDirection(Qt::LeftToRight);
        pushButton_d7->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_d7, 3, 6, 1, 1);

        pushButton_h4 = new QPushButton(gridLayoutWidget);
        pushButton_h4->setObjectName(QString::fromUtf8("pushButton_h4"));
        sizePolicy.setHeightForWidth(pushButton_h4->sizePolicy().hasHeightForWidth());
        pushButton_h4->setSizePolicy(sizePolicy);
        pushButton_h4->setMinimumSize(QSize(60, 60));
        pushButton_h4->setMaximumSize(QSize(150, 150));
        QPalette palette31;
        palette31.setBrush(QPalette::Active, QPalette::Button, brush);
        palette31.setBrush(QPalette::Active, QPalette::Base, brush);
        palette31.setBrush(QPalette::Active, QPalette::Window, brush);
        palette31.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette31.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette31.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        pushButton_h4->setPalette(palette31);
        pushButton_h4->setFont(font2);
        pushButton_h4->setLayoutDirection(Qt::LeftToRight);
        pushButton_h4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 207, 159);\n"
"alternate-background-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_h4, 7, 3, 1, 1);

        pushButton_e2 = new QPushButton(gridLayoutWidget);
        pushButton_e2->setObjectName(QString::fromUtf8("pushButton_e2"));
        sizePolicy.setHeightForWidth(pushButton_e2->sizePolicy().hasHeightForWidth());
        pushButton_e2->setSizePolicy(sizePolicy);
        pushButton_e2->setMinimumSize(QSize(60, 60));
        pushButton_e2->setMaximumSize(QSize(150, 150));
        pushButton_e2->setFont(font2);
        pushButton_e2->setLayoutDirection(Qt::LeftToRight);
        pushButton_e2->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_e2, 4, 1, 1, 1);

        pushButton_f7 = new QPushButton(gridLayoutWidget);
        pushButton_f7->setObjectName(QString::fromUtf8("pushButton_f7"));
        sizePolicy.setHeightForWidth(pushButton_f7->sizePolicy().hasHeightForWidth());
        pushButton_f7->setSizePolicy(sizePolicy);
        pushButton_f7->setMinimumSize(QSize(60, 60));
        pushButton_f7->setMaximumSize(QSize(150, 150));
        pushButton_f7->setFont(font2);
        pushButton_f7->setLayoutDirection(Qt::LeftToRight);
        pushButton_f7->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_f7, 5, 6, 1, 1);

        pushButton_g8 = new QPushButton(gridLayoutWidget);
        pushButton_g8->setObjectName(QString::fromUtf8("pushButton_g8"));
        sizePolicy.setHeightForWidth(pushButton_g8->sizePolicy().hasHeightForWidth());
        pushButton_g8->setSizePolicy(sizePolicy);
        pushButton_g8->setMinimumSize(QSize(60, 60));
        pushButton_g8->setMaximumSize(QSize(150, 150));
        pushButton_g8->setFont(font2);
        pushButton_g8->setLayoutDirection(Qt::LeftToRight);
        pushButton_g8->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 140, 69);\n"
"selection-color: rgb(255, 170, 0);"));

        gridLayout->addWidget(pushButton_g8, 6, 7, 1, 1);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(70, 70, 21, 541));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font3);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font3);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setFont(font3);
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(verticalLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setFont(font3);
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_9);

        label_10 = new QLabel(verticalLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setFont(font3);
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_10);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(110, 30, 561, 25));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(horizontalLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        label_12->setFont(font3);
        label_12->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_12);

        label_17 = new QLabel(horizontalLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font3);
        label_17->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_17);

        label_15 = new QLabel(horizontalLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);
        label_15->setFont(font3);
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_15);

        label_11 = new QLabel(horizontalLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setFont(font3);
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_11);

        label_13 = new QLabel(horizontalLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font3);
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_13);

        label_16 = new QLabel(horizontalLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy1.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy1);
        label_16->setFont(font3);
        label_16->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_16);

        label_14 = new QLabel(horizontalLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font3);
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_14);

        label_18 = new QLabel(horizontalLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy1.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy1);
        label_18->setFont(font3);
        label_18->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_18);

        ChessProjectClass->setCentralWidget(centralWidget);

        retranslateUi(ChessProjectClass);

        QMetaObject::connectSlotsByName(ChessProjectClass);
    } // setupUi

    void retranslateUi(QMainWindow *ChessProjectClass)
    {
        ChessProjectClass->setWindowTitle(QCoreApplication::translate("ChessProjectClass", "ChessProject", nullptr));
        label_1->setText(QCoreApplication::translate("ChessProjectClass", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("ChessProjectClass", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("ChessProjectClass", "TextLabel", nullptr));
        StartGameButton->setText(QCoreApplication::translate("ChessProjectClass", "Start Game", nullptr));
        selectionLabel->setText(QCoreApplication::translate("ChessProjectClass", "TextLabel", nullptr));
        pushButton_c4->setText(QCoreApplication::translate("ChessProjectClass", "c4", nullptr));
        pushButton_f6->setText(QCoreApplication::translate("ChessProjectClass", "f6", nullptr));
        pushButton_f2->setText(QCoreApplication::translate("ChessProjectClass", "f2", nullptr));
        pushButton_e1->setText(QCoreApplication::translate("ChessProjectClass", "e1", nullptr));
        pushButton_h8->setText(QCoreApplication::translate("ChessProjectClass", "h8", nullptr));
        pushButton_g3->setText(QCoreApplication::translate("ChessProjectClass", "g3", nullptr));
        pushButton_f4->setText(QCoreApplication::translate("ChessProjectClass", "f4", nullptr));
        pushButton_f3->setText(QCoreApplication::translate("ChessProjectClass", "f3", nullptr));
        pushButton_e4->setText(QCoreApplication::translate("ChessProjectClass", "e4", nullptr));
        pushButton_g6->setText(QCoreApplication::translate("ChessProjectClass", "g6", nullptr));
        pushButton_b7->setText(QCoreApplication::translate("ChessProjectClass", "b7", nullptr));
        pushButton_f8->setText(QCoreApplication::translate("ChessProjectClass", "f8", nullptr));
        pushButton_d3->setText(QCoreApplication::translate("ChessProjectClass", "d3", nullptr));
        pushButton_a6->setText(QCoreApplication::translate("ChessProjectClass", "a6", nullptr));
        pushButton_g4->setText(QCoreApplication::translate("ChessProjectClass", "g4", nullptr));
        pushButton_c2->setText(QCoreApplication::translate("ChessProjectClass", "c2", nullptr));
        pushButton_b3->setText(QCoreApplication::translate("ChessProjectClass", "b3", nullptr));
        pushButton_c5->setText(QCoreApplication::translate("ChessProjectClass", "c5", nullptr));
        pushButton_b5->setText(QCoreApplication::translate("ChessProjectClass", "b5", nullptr));
        pushButton_b8->setText(QCoreApplication::translate("ChessProjectClass", "b8", nullptr));
        pushButton_g1->setText(QCoreApplication::translate("ChessProjectClass", "g1", nullptr));
        pushButton_h5->setText(QCoreApplication::translate("ChessProjectClass", "h5", nullptr));
        pushButton_d5->setText(QCoreApplication::translate("ChessProjectClass", "d5", nullptr));
        pushButton_c1->setText(QCoreApplication::translate("ChessProjectClass", "c1", nullptr));
        pushButton_a3->setText(QCoreApplication::translate("ChessProjectClass", "a3", nullptr));
        pushButton_d4->setText(QCoreApplication::translate("ChessProjectClass", "d4", nullptr));
        pushButton_h3->setText(QCoreApplication::translate("ChessProjectClass", "h3", nullptr));
        pushButton_g2->setText(QCoreApplication::translate("ChessProjectClass", "g2", nullptr));
        pushButton_a2->setText(QCoreApplication::translate("ChessProjectClass", "a2", nullptr));
        pushButton_c7->setText(QCoreApplication::translate("ChessProjectClass", "c7", nullptr));
        pushButton_b6->setText(QCoreApplication::translate("ChessProjectClass", "b6", nullptr));
        pushButton_d8->setText(QCoreApplication::translate("ChessProjectClass", "d8", nullptr));
        pushButton_c6->setText(QCoreApplication::translate("ChessProjectClass", "c6", nullptr));
        pushButton_d2->setText(QCoreApplication::translate("ChessProjectClass", "d2", nullptr));
        pushButton_b1->setText(QCoreApplication::translate("ChessProjectClass", "b1", nullptr));
        pushButton_h7->setText(QCoreApplication::translate("ChessProjectClass", "h7", nullptr));
        pushButton_d1->setText(QCoreApplication::translate("ChessProjectClass", "d1", nullptr));
        pushButton_a8->setText(QCoreApplication::translate("ChessProjectClass", "a8", nullptr));
        pushButton_e6->setText(QCoreApplication::translate("ChessProjectClass", "e6", nullptr));
        pushButton_e3->setText(QCoreApplication::translate("ChessProjectClass", "e3", nullptr));
        pushButton_c3->setText(QCoreApplication::translate("ChessProjectClass", "c3", nullptr));
        pushButton_e7->setText(QCoreApplication::translate("ChessProjectClass", "e7", nullptr));
        pushButton_h6->setText(QCoreApplication::translate("ChessProjectClass", "h6", nullptr));
        pushButton_a7->setText(QCoreApplication::translate("ChessProjectClass", "a7", nullptr));
        pushButton_h1->setText(QCoreApplication::translate("ChessProjectClass", "h1", nullptr));
        pushButton_e8->setText(QCoreApplication::translate("ChessProjectClass", "e8", nullptr));
        pushButton_a5->setText(QCoreApplication::translate("ChessProjectClass", "a5", nullptr));
        pushButton_f5->setText(QCoreApplication::translate("ChessProjectClass", "f5", nullptr));
        pushButton_e5->setText(QCoreApplication::translate("ChessProjectClass", "e5", nullptr));
        pushButton_g7->setText(QCoreApplication::translate("ChessProjectClass", "g7", nullptr));
        pushButton_g5->setText(QCoreApplication::translate("ChessProjectClass", "g5", nullptr));
        pushButton_a4->setText(QCoreApplication::translate("ChessProjectClass", "a4", nullptr));
        pushButton_c8->setText(QCoreApplication::translate("ChessProjectClass", "c8", nullptr));
        pushButton_b2->setText(QCoreApplication::translate("ChessProjectClass", "b2", nullptr));
        pushButton_h2->setText(QCoreApplication::translate("ChessProjectClass", "h2", nullptr));
        pushButton_d6->setText(QCoreApplication::translate("ChessProjectClass", "d6", nullptr));
        pushButton_a1->setText(QCoreApplication::translate("ChessProjectClass", "a1", nullptr));
        pushButton_b4->setText(QCoreApplication::translate("ChessProjectClass", "b4", nullptr));
        pushButton_f1->setText(QCoreApplication::translate("ChessProjectClass", "f1", nullptr));
        pushButton_d7->setText(QCoreApplication::translate("ChessProjectClass", "d7", nullptr));
        pushButton_h4->setText(QCoreApplication::translate("ChessProjectClass", "h4", nullptr));
        pushButton_e2->setText(QCoreApplication::translate("ChessProjectClass", "e2", nullptr));
        pushButton_f7->setText(QCoreApplication::translate("ChessProjectClass", "f7", nullptr));
        pushButton_g8->setText(QCoreApplication::translate("ChessProjectClass", "g8", nullptr));
        label->setText(QCoreApplication::translate("ChessProjectClass", "1", nullptr));
        label_4->setText(QCoreApplication::translate("ChessProjectClass", "2", nullptr));
        label_5->setText(QCoreApplication::translate("ChessProjectClass", "3", nullptr));
        label_6->setText(QCoreApplication::translate("ChessProjectClass", "4", nullptr));
        label_7->setText(QCoreApplication::translate("ChessProjectClass", "5", nullptr));
        label_8->setText(QCoreApplication::translate("ChessProjectClass", "6", nullptr));
        label_9->setText(QCoreApplication::translate("ChessProjectClass", "7", nullptr));
        label_10->setText(QCoreApplication::translate("ChessProjectClass", "8", nullptr));
        label_12->setText(QCoreApplication::translate("ChessProjectClass", "A", nullptr));
        label_17->setText(QCoreApplication::translate("ChessProjectClass", "B", nullptr));
        label_15->setText(QCoreApplication::translate("ChessProjectClass", "C", nullptr));
        label_11->setText(QCoreApplication::translate("ChessProjectClass", "D", nullptr));
        label_13->setText(QCoreApplication::translate("ChessProjectClass", "E", nullptr));
        label_16->setText(QCoreApplication::translate("ChessProjectClass", "F", nullptr));
        label_14->setText(QCoreApplication::translate("ChessProjectClass", "G", nullptr));
        label_18->setText(QCoreApplication::translate("ChessProjectClass", "H", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChessProjectClass: public Ui_ChessProjectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHESSPROJECT_H
