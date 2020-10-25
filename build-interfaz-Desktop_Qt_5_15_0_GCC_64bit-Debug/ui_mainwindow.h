/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLogin;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_4;
    QLCDNumber *lcdNumber;
    QGroupBox *groupBox;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QComboBox *comboBoxPort;
    QPushButton *pushButton_2;
    QPushButton *pushButtonCONECTAR;
    QLabel *Imagen2;
    QLabel *label_5;
    QLabel *label_3;
    QProgressBar *progressBar;
    QDialogButtonBox *buttonBox;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *labelEstado;
    QWidget *tab_2;
    QLineEdit *lineEdit_NOMBRE;
    QLineEdit *lineEdit_PASSWORD;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButtonINGRESAR;
    QPushButton *pushButton_SALIR;
    QFrame *line_4;
    QLabel *label_8;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton_GUARDAR;
    QLabel *labelMsJ;
    QTableWidget *tableWidget;
    QPushButton *pushButton_AGREGAR;
    QPushButton *pushButton_BORRAR;
    QPushButton *pushButton_CREAR;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(737, 469);
        actionLogin = new QAction(MainWindow);
        actionLogin->setObjectName(QString::fromUtf8("actionLogin"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 0, 721, 441));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(460, 70, 81, 21));
        lcdNumber = new QLCDNumber(tab);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(570, 50, 101, 61));
        lcdNumber->setDigitCount(4);
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 130, 231, 151));
        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(10, 30, 96, 23));
        radioButton_5 = new QRadioButton(groupBox);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(10, 50, 96, 21));
        radioButton_6 = new QRadioButton(groupBox);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(10, 70, 96, 23));
        radioButton_7 = new QRadioButton(groupBox);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setGeometry(QRect(120, 30, 96, 23));
        radioButton_8 = new QRadioButton(groupBox);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        radioButton_8->setGeometry(QRect(120, 50, 96, 23));
        radioButton_9 = new QRadioButton(groupBox);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));
        radioButton_9->setGeometry(QRect(120, 70, 96, 23));
        radioButton_10 = new QRadioButton(groupBox);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));
        radioButton_10->setGeometry(QRect(10, 90, 96, 23));
        radioButton_11 = new QRadioButton(groupBox);
        radioButton_11->setObjectName(QString::fromUtf8("radioButton_11"));
        radioButton_11->setGeometry(QRect(10, 110, 96, 23));
        radioButton_12 = new QRadioButton(groupBox);
        radioButton_12->setObjectName(QString::fromUtf8("radioButton_12"));
        radioButton_12->setGeometry(QRect(120, 90, 96, 23));
        comboBoxPort = new QComboBox(tab);
        comboBoxPort->setObjectName(QString::fromUtf8("comboBoxPort"));
        comboBoxPort->setGeometry(QRect(130, 10, 181, 25));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 40, 91, 25));
        pushButtonCONECTAR = new QPushButton(tab);
        pushButtonCONECTAR->setObjectName(QString::fromUtf8("pushButtonCONECTAR"));
        pushButtonCONECTAR->setGeometry(QRect(320, 10, 91, 25));
        Imagen2 = new QLabel(tab);
        Imagen2->setObjectName(QString::fromUtf8("Imagen2"));
        Imagen2->setGeometry(QRect(260, 150, 161, 111));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 10, 101, 31));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 310, 141, 17));
        progressBar = new QProgressBar(tab);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(20, 340, 481, 23));
        progressBar->setValue(24);
        buttonBox = new QDialogButtonBox(tab);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(520, 330, 171, 41));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        line = new QFrame(tab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(430, 0, 20, 291));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(tab);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 290, 681, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(tab);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(20, 90, 421, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(460, 10, 81, 17));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(570, 10, 113, 25));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(15, 50, 211, 20));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        labelEstado = new QLabel(layoutWidget);
        labelEstado->setObjectName(QString::fromUtf8("labelEstado"));

        horizontalLayout->addWidget(labelEstado);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        lineEdit_NOMBRE = new QLineEdit(tab_2);
        lineEdit_NOMBRE->setObjectName(QString::fromUtf8("lineEdit_NOMBRE"));
        lineEdit_NOMBRE->setGeometry(QRect(110, 10, 113, 25));
        lineEdit_PASSWORD = new QLineEdit(tab_2);
        lineEdit_PASSWORD->setObjectName(QString::fromUtf8("lineEdit_PASSWORD"));
        lineEdit_PASSWORD->setGeometry(QRect(110, 40, 113, 25));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 10, 71, 21));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 40, 61, 21));
        pushButtonINGRESAR = new QPushButton(tab_2);
        pushButtonINGRESAR->setObjectName(QString::fromUtf8("pushButtonINGRESAR"));
        pushButtonINGRESAR->setGeometry(QRect(260, 10, 91, 25));
        pushButton_SALIR = new QPushButton(tab_2);
        pushButton_SALIR->setObjectName(QString::fromUtf8("pushButton_SALIR"));
        pushButton_SALIR->setGeometry(QRect(260, 40, 91, 25));
        line_4 = new QFrame(tab_2);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(7, 70, 691, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 110, 91, 26));
        dateTimeEdit = new QDateTimeEdit(tab_2);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(110, 110, 101, 26));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 140, 54, 17));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 90, 201, 17));
        pushButton_GUARDAR = new QPushButton(tab_2);
        pushButton_GUARDAR->setObjectName(QString::fromUtf8("pushButton_GUARDAR"));
        pushButton_GUARDAR->setGeometry(QRect(610, 300, 80, 25));
        labelMsJ = new QLabel(tab_2);
        labelMsJ->setObjectName(QString::fromUtf8("labelMsJ"));
        labelMsJ->setGeometry(QRect(400, 10, 271, 51));
        tableWidget = new QTableWidget(tab_2);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem8);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 160, 591, 231));
        pushButton_AGREGAR = new QPushButton(tab_2);
        pushButton_AGREGAR->setObjectName(QString::fromUtf8("pushButton_AGREGAR"));
        pushButton_AGREGAR->setGeometry(QRect(610, 220, 80, 25));
        pushButton_BORRAR = new QPushButton(tab_2);
        pushButton_BORRAR->setObjectName(QString::fromUtf8("pushButton_BORRAR"));
        pushButton_BORRAR->setGeometry(QRect(610, 260, 80, 25));
        pushButton_CREAR = new QPushButton(tab_2);
        pushButton_CREAR->setObjectName(QString::fromUtf8("pushButton_CREAR"));
        pushButton_CREAR->setGeometry(QRect(610, 180, 80, 25));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 737, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Dispensador", nullptr));
        actionLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Temperatura:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Tipos de Bebidas:", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "Coca Cola", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainWindow", "Pepsi", nullptr));
        radioButton_6->setText(QCoreApplication::translate("MainWindow", "Fanta", nullptr));
        radioButton_7->setText(QCoreApplication::translate("MainWindow", "Manaos", nullptr));
        radioButton_8->setText(QCoreApplication::translate("MainWindow", "Quilmes", nullptr));
        radioButton_9->setText(QCoreApplication::translate("MainWindow", "Speed", nullptr));
        radioButton_10->setText(QCoreApplication::translate("MainWindow", "Fernet", nullptr));
        radioButton_11->setText(QCoreApplication::translate("MainWindow", "DRLemon", nullptr));
        radioButton_12->setText(QCoreApplication::translate("MainWindow", "7UP", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "DESCONECTAR", nullptr));
        pushButtonCONECTAR->setText(QCoreApplication::translate("MainWindow", "CONECTAR", nullptr));
        Imagen2->setText(QCoreApplication::translate("MainWindow", "Imagen2", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Seleccione Puero:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Barra de Proceso", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Fecha y hora:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Estado:    ", nullptr));
        labelEstado->setText(QCoreApplication::translate("MainWindow", "DESCONECTADO", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Usuario", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Nombre:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        pushButtonINGRESAR->setText(QCoreApplication::translate("MainWindow", "INGRESAR", nullptr));
        pushButton_SALIR->setText(QCoreApplication::translate("MainWindow", "SALIR", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", " Fecha y Hora:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Stock:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Configuraciones Avanzadas", nullptr));
        pushButton_GUARDAR->setText(QCoreApplication::translate("MainWindow", "GUARDAR", nullptr));
        labelMsJ->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "A1", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "A2", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "B1", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "B2", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "C1", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "C2", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_AGREGAR->setText(QCoreApplication::translate("MainWindow", "AGREGAR", nullptr));
        pushButton_BORRAR->setText(QCoreApplication::translate("MainWindow", "BORRAR", nullptr));
        pushButton_CREAR->setText(QCoreApplication::translate("MainWindow", "CREAR", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Administrador", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
