/********************************************************************************
** Form generated from reading UI file 'wiz_advpage.ui'
**
** Created: Tue 16. Nov 12:52:14 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZ_ADVPAGE_H
#define UI_WIZ_ADVPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_AdvPage
{
public:
    QLineEdit *txtRouteDelay;
    QLineEdit *txtVerbose;
    QLineEdit *txtMute;
    QLabel *label_18;
    QLabel *label_17;
    QLabel *label_22;
    QGroupBox *groupBox;
    QLabel *label_6;
    QCheckBox *cbMsfix;
    QComboBox *cmbRouteMethod;
    QLabel *label_21;
    QCheckBox *cbFloat;
    QLabel *label_16;
    QCheckBox *cbUserPass;
    QLabel *label_8;
    QCheckBox *cbNobind;
    QLabel *label_20;
    QLabel *label_11;
    QCheckBox *cbCompLzo;

    void setupUi(QWizardPage *AdvPage)
    {
        if (AdvPage->objectName().isEmpty())
            AdvPage->setObjectName(QString::fromUtf8("AdvPage"));
        AdvPage->resize(400, 300);
        txtRouteDelay = new QLineEdit(AdvPage);
        txtRouteDelay->setObjectName(QString::fromUtf8("txtRouteDelay"));
        txtRouteDelay->setEnabled(true);
        txtRouteDelay->setGeometry(QRect(105, 92, 51, 21));
        txtRouteDelay->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        txtVerbose = new QLineEdit(AdvPage);
        txtVerbose->setObjectName(QString::fromUtf8("txtVerbose"));
        txtVerbose->setEnabled(true);
        txtVerbose->setGeometry(QRect(105, 66, 51, 21));
        txtVerbose->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        txtMute = new QLineEdit(AdvPage);
        txtMute->setObjectName(QString::fromUtf8("txtMute"));
        txtMute->setEnabled(true);
        txtMute->setGeometry(QRect(105, 117, 51, 20));
        txtMute->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        label_18 = new QLabel(AdvPage);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(12, 117, 61, 20));
        label_17 = new QLabel(AdvPage);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(12, 68, 61, 16));
        label_22 = new QLabel(AdvPage);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(12, 91, 81, 20));
        groupBox = new QGroupBox(AdvPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 381, 51));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 20, 41, 20));
        cbMsfix = new QCheckBox(groupBox);
        cbMsfix->setObjectName(QString::fromUtf8("cbMsfix"));
        cbMsfix->setEnabled(true);
        cbMsfix->setGeometry(QRect(56, 21, 20, 20));
        cbMsfix->setStyleSheet(QString::fromUtf8("QCheckBox { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled {\n"
"image: url(:/images/styles/checkbox_unchecked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"image: url(:/images/styles/checkbox_checked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled {\n"
"image: url(:/images/styles/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled {\n"
"image: url(:/images/styles/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_checked_hover.png);\n"
"}\n"
""));
        cmbRouteMethod = new QComboBox(groupBox);
        cmbRouteMethod->setObjectName(QString::fromUtf8("cmbRouteMethod"));
        cmbRouteMethod->setEnabled(true);
        cmbRouteMethod->setGeometry(QRect(185, 19, 111, 22));
        cmbRouteMethod->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(91, 22, 81, 16));
        cbFloat = new QCheckBox(AdvPage);
        cbFloat->setObjectName(QString::fromUtf8("cbFloat"));
        cbFloat->setEnabled(true);
        cbFloat->setGeometry(QRect(290, 103, 21, 19));
        cbFloat->setStyleSheet(QString::fromUtf8("QCheckBox { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled {\n"
"image: url(:/images/styles/checkbox_unchecked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"image: url(:/images/styles/checkbox_checked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled {\n"
"image: url(:/images/styles/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled {\n"
"image: url(:/images/styles/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_checked_hover.png);\n"
"}\n"
""));
        label_16 = new QLabel(AdvPage);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(199, 121, 61, 16));
        cbUserPass = new QCheckBox(AdvPage);
        cbUserPass->setObjectName(QString::fromUtf8("cbUserPass"));
        cbUserPass->setEnabled(true);
        cbUserPass->setGeometry(QRect(290, 68, 20, 20));
        cbUserPass->setStyleSheet(QString::fromUtf8("QCheckBox { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled {\n"
"image: url(:/images/styles/checkbox_unchecked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"image: url(:/images/styles/checkbox_checked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled {\n"
"image: url(:/images/styles/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled {\n"
"image: url(:/images/styles/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_checked_hover.png);\n"
"}\n"
""));
        label_8 = new QLabel(AdvPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(199, 104, 61, 16));
        cbNobind = new QCheckBox(AdvPage);
        cbNobind->setObjectName(QString::fromUtf8("cbNobind"));
        cbNobind->setEnabled(true);
        cbNobind->setGeometry(QRect(290, 86, 20, 20));
        cbNobind->setStyleSheet(QString::fromUtf8("QCheckBox { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled {\n"
"image: url(:/images/styles/checkbox_unchecked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"image: url(:/images/styles/checkbox_checked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled {\n"
"image: url(:/images/styles/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled {\n"
"image: url(:/images/styles/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_checked_hover.png);\n"
"}\n"
""));
        label_20 = new QLabel(AdvPage);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(199, 68, 81, 20));
        label_11 = new QLabel(AdvPage);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(199, 88, 61, 16));
        cbCompLzo = new QCheckBox(AdvPage);
        cbCompLzo->setObjectName(QString::fromUtf8("cbCompLzo"));
        cbCompLzo->setEnabled(true);
        cbCompLzo->setGeometry(QRect(290, 120, 20, 20));
        cbCompLzo->setStyleSheet(QString::fromUtf8("QCheckBox { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled {\n"
"image: url(:/images/styles/checkbox_unchecked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"image: url(:/images/styles/checkbox_checked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled {\n"
"image: url(:/images/styles/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled {\n"
"image: url(:/images/styles/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_checked_hover.png);\n"
"}\n"
""));

        retranslateUi(AdvPage);

        QMetaObject::connectSlotsByName(AdvPage);
    } // setupUi

    void retranslateUi(QWizardPage *AdvPage)
    {
        AdvPage->setWindowTitle(QApplication::translate("AdvPage", "WizardPage", 0, QApplication::UnicodeUTF8));
        AdvPage->setTitle(QApplication::translate("AdvPage", "Advanced Settings", 0, QApplication::UnicodeUTF8));
        AdvPage->setSubTitle(QApplication::translate("AdvPage", "Please specify the advanced settings.", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("AdvPage", "Mute:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("AdvPage", "Verbosity:", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("AdvPage", "Route delay:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("AdvPage", "Settings for Windows", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("AdvPage", "MSSFIX:", 0, QApplication::UnicodeUTF8));
        cbMsfix->setText(QString());
        label_21->setText(QApplication::translate("AdvPage", "Route method:", 0, QApplication::UnicodeUTF8));
        cbFloat->setText(QString());
        label_16->setText(QApplication::translate("AdvPage", "Comp-LZO:", 0, QApplication::UnicodeUTF8));
        cbUserPass->setText(QString());
        label_8->setText(QApplication::translate("AdvPage", "Float:", 0, QApplication::UnicodeUTF8));
        cbNobind->setText(QString());
        label_20->setText(QApplication::translate("AdvPage", "Auth user/pass:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("AdvPage", "No bind:", 0, QApplication::UnicodeUTF8));
        cbCompLzo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdvPage: public Ui_AdvPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZ_ADVPAGE_H
