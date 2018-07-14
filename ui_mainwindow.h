/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *title;
    QComboBox *comboBox_2;
    QLineEdit *Input;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *outputcurrncy;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1034, 547);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(80, 240, 841, 51));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(12);
        title->setFont(font);
        title->setLayoutDirection(Qt::LeftToRight);
        title->setTextFormat(Qt::RichText);
        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(540, 150, 111, 31));
        Input = new QLineEdit(centralWidget);
        Input->setObjectName(QStringLiteral("Input"));
        Input->setGeometry(QRect(80, 150, 171, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(430, 320, 72, 15));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 30, 241, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(16);
        label_4->setFont(font1);
        outputcurrncy = new QLineEdit(centralWidget);
        outputcurrncy->setObjectName(QStringLiteral("outputcurrncy"));
        outputcurrncy->setGeometry(QRect(690, 150, 171, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(910, 150, 101, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(280, 151, 121, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 360, 72, 41));
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(430, 150, 121, 31));
        label_3->setFont(font2);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(170, 360, 231, 31));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        title->setText(QApplication::translate("MainWindow", "The above information is for reference only. Please refer to the transaction price at the bank counter.\n"
"", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("MainWindow", "\347\276\216\345\205\203", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("MainWindow", "\344\272\272\346\260\221\345\270\201", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("MainWindow", "\345\267\264\350\245\277\351\207\214\344\272\232\345\260\224", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("MainWindow", "\344\270\271\351\272\246\345\205\213\346\234\227", nullptr));
        comboBox_2->setItemText(4, QApplication::translate("MainWindow", "\346\276\263\345\244\247\345\210\251\344\272\232\345\205\203", nullptr));
        comboBox_2->setItemText(5, QApplication::translate("MainWindow", "\346\254\247\345\205\203", nullptr));
        comboBox_2->setItemText(6, QApplication::translate("MainWindow", "\350\213\261\351\225\221", nullptr));
        comboBox_2->setItemText(7, QApplication::translate("MainWindow", "\346\270\257\345\270\201", nullptr));
        comboBox_2->setItemText(8, QApplication::translate("MainWindow", "\345\215\260\345\260\274\345\215\242\346\257\224", nullptr));
        comboBox_2->setItemText(9, QApplication::translate("MainWindow", "\345\215\260\345\272\246\345\215\242\346\257\224", nullptr));
        comboBox_2->setItemText(10, QApplication::translate("MainWindow", "\346\227\245\345\205\203", nullptr));
        comboBox_2->setItemText(11, QApplication::translate("MainWindow", "\351\237\251\345\233\275\345\205\203", nullptr));
        comboBox_2->setItemText(12, QApplication::translate("MainWindow", "\346\276\263\351\227\250\345\205\203", nullptr));
        comboBox_2->setItemText(13, QApplication::translate("MainWindow", "\346\236\227\345\220\211\347\211\271", nullptr));
        comboBox_2->setItemText(14, QApplication::translate("MainWindow", "\346\214\252\345\250\201\345\205\213\346\234\227", nullptr));
        comboBox_2->setItemText(15, QApplication::translate("MainWindow", "\346\226\260\350\245\277\345\205\260\345\205\203", nullptr));
        comboBox_2->setItemText(16, QApplication::translate("MainWindow", "\350\217\262\345\276\213\345\256\276\346\257\224\347\264\242", nullptr));
        comboBox_2->setItemText(17, QApplication::translate("MainWindow", "\345\215\242\345\270\203", nullptr));
        comboBox_2->setItemText(18, QApplication::translate("MainWindow", "\346\262\231\347\211\271\351\207\214\344\272\232\345\260\224", nullptr));
        comboBox_2->setItemText(19, QApplication::translate("MainWindow", "\347\221\236\345\205\270\345\205\213\346\234\227", nullptr));
        comboBox_2->setItemText(20, QApplication::translate("MainWindow", "\346\226\260\345\212\240\345\235\241\345\205\203", nullptr));
        comboBox_2->setItemText(21, QApplication::translate("MainWindow", "\346\263\260\345\233\275\351\223\242", nullptr));
        comboBox_2->setItemText(22, QApplication::translate("MainWindow", "\345\234\237\350\200\263\345\205\266\351\207\214\346\213\211", nullptr));
        comboBox_2->setItemText(23, QApplication::translate("MainWindow", "\346\226\260\345\217\260\345\270\201", nullptr));
        comboBox_2->setItemText(24, QApplication::translate("MainWindow", "\345\215\227\351\235\236\345\205\260\347\211\271", nullptr));
        comboBox_2->setItemText(25, QApplication::translate("MainWindow", "\351\230\277\350\201\224\351\205\213\350\277\252\346\213\211\345\247\206", nullptr));
        comboBox_2->setItemText(26, QApplication::translate("MainWindow", "\345\212\240\346\213\277\345\244\247\345\205\203", nullptr));
        comboBox_2->setItemText(27, QApplication::translate("MainWindow", "\347\221\236\345\243\253\346\263\225\351\203\216", nullptr));

        Input->setText(QString());
        label->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Currency conversion", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Transform", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "\347\276\216\345\205\203", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "\344\272\272\346\260\221\345\270\201", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "\345\267\264\350\245\277\351\207\214\344\272\232\345\260\224", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "\344\270\271\351\272\246\345\205\213\346\234\227", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "\346\276\263\345\244\247\345\210\251\344\272\232\345\205\203", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "\346\254\247\345\205\203", nullptr));
        comboBox->setItemText(6, QApplication::translate("MainWindow", "\350\213\261\351\225\221", nullptr));
        comboBox->setItemText(7, QApplication::translate("MainWindow", "\346\270\257\345\270\201", nullptr));
        comboBox->setItemText(8, QApplication::translate("MainWindow", "\345\215\260\345\260\274\345\215\242\346\257\224", nullptr));
        comboBox->setItemText(9, QApplication::translate("MainWindow", "\345\215\260\345\272\246\345\215\242\346\257\224", nullptr));
        comboBox->setItemText(10, QApplication::translate("MainWindow", "\346\227\245\345\205\203", nullptr));
        comboBox->setItemText(11, QApplication::translate("MainWindow", "\351\237\251\345\233\275\345\205\203", nullptr));
        comboBox->setItemText(12, QApplication::translate("MainWindow", "\346\276\263\351\227\250\345\205\203", nullptr));
        comboBox->setItemText(13, QApplication::translate("MainWindow", "\346\236\227\345\220\211\347\211\271", nullptr));
        comboBox->setItemText(14, QApplication::translate("MainWindow", "\346\214\252\345\250\201\345\205\213\346\234\227", nullptr));
        comboBox->setItemText(15, QApplication::translate("MainWindow", "\346\226\260\350\245\277\345\205\260\345\205\203", nullptr));
        comboBox->setItemText(16, QApplication::translate("MainWindow", "\350\217\262\345\276\213\345\256\276\346\257\224\347\264\242", nullptr));
        comboBox->setItemText(17, QApplication::translate("MainWindow", "\345\215\242\345\270\203", nullptr));
        comboBox->setItemText(18, QApplication::translate("MainWindow", "\346\262\231\347\211\271\351\207\214\344\272\232\345\260\224", nullptr));
        comboBox->setItemText(19, QApplication::translate("MainWindow", "\347\221\236\345\205\270\345\205\213\346\234\227", nullptr));
        comboBox->setItemText(20, QApplication::translate("MainWindow", "\346\226\260\345\212\240\345\235\241\345\205\203", nullptr));
        comboBox->setItemText(21, QApplication::translate("MainWindow", "\346\263\260\345\233\275\351\223\242", nullptr));
        comboBox->setItemText(22, QApplication::translate("MainWindow", "\345\234\237\350\200\263\345\205\266\351\207\214\346\213\211", nullptr));
        comboBox->setItemText(23, QApplication::translate("MainWindow", "\346\226\260\345\217\260\345\270\201", nullptr));
        comboBox->setItemText(24, QApplication::translate("MainWindow", "\345\215\227\351\235\236\345\205\260\347\211\271", nullptr));
        comboBox->setItemText(25, QApplication::translate("MainWindow", "\351\230\277\350\201\224\351\205\213\350\277\252\346\213\211\345\247\206", nullptr));
        comboBox->setItemText(26, QApplication::translate("MainWindow", "\345\212\240\346\213\277\345\244\247\345\205\203", nullptr));
        comboBox->setItemText(27, QApplication::translate("MainWindow", "\347\221\236\345\243\253\346\263\225\351\203\216", nullptr));

        label_2->setText(QApplication::translate("MainWindow", "Update", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "convert to", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
