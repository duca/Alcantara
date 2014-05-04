/********************************************************************************
** Form generated from reading UI file 'alcantara.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALCANTARA_H
#define UI_ALCANTARA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Alcantara
{
public:
    QAction *actionQuit;
    QWidget *centralwidget;
    QLineEdit *appSearchEntry;
    QListWidget *appsList;
    QMenuBar *menubar;
    QMenu *menuQuit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Alcantara)
    {
        if (Alcantara->objectName().isEmpty())
            Alcantara->setObjectName(QString::fromUtf8("Alcantara"));
        Alcantara->setWindowModality(Qt::ApplicationModal);
        Alcantara->resize(214, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Alcantara->sizePolicy().hasHeightForWidth());
        Alcantara->setSizePolicy(sizePolicy);
        Alcantara->setFocusPolicy(Qt::StrongFocus);
        Alcantara->setContextMenuPolicy(Qt::DefaultContextMenu);
        Alcantara->setWindowOpacity(1);
        Alcantara->setAutoFillBackground(true);
        actionQuit = new QAction(Alcantara);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralwidget = new QWidget(Alcantara);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        appSearchEntry = new QLineEdit(centralwidget);
        appSearchEntry->setObjectName(QString::fromUtf8("appSearchEntry"));
        appSearchEntry->setGeometry(QRect(10, 10, 191, 24));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(appSearchEntry->sizePolicy().hasHeightForWidth());
        appSearchEntry->setSizePolicy(sizePolicy1);
        appSearchEntry->setLayoutDirection(Qt::LeftToRight);
        appSearchEntry->setAutoFillBackground(true);
        appsList = new QListWidget(centralwidget);
        appsList->setObjectName(QString::fromUtf8("appsList"));
        appsList->setEnabled(true);
        appsList->setGeometry(QRect(10, 40, 191, 311));
        appsList->setMouseTracking(true);
        appsList->setFocusPolicy(Qt::TabFocus);
        appsList->setAcceptDrops(false);
        appsList->setAutoFillBackground(true);
        appsList->setFrameShadow(QFrame::Raised);
        appsList->setMidLineWidth(1);
        appsList->setAutoScrollMargin(9);
        appsList->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        appsList->setTabKeyNavigation(true);
        appsList->setSelectionBehavior(QAbstractItemView::SelectItems);
        appsList->setSortingEnabled(false);
        Alcantara->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Alcantara);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 214, 19));
        menuQuit = new QMenu(menubar);
        menuQuit->setObjectName(QString::fromUtf8("menuQuit"));
        Alcantara->setMenuBar(menubar);
        statusbar = new QStatusBar(Alcantara);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Alcantara->setStatusBar(statusbar);

        menubar->addAction(menuQuit->menuAction());
        menuQuit->addAction(actionQuit);

        retranslateUi(Alcantara);
        QObject::connect(actionQuit, SIGNAL(activated()), Alcantara, SLOT(close()));

        appsList->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(Alcantara);
    } // setupUi

    void retranslateUi(QMainWindow *Alcantara)
    {
        Alcantara->setWindowTitle(QApplication::translate("Alcantara", "Alcantara", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("Alcantara", "Quit", 0, QApplication::UnicodeUTF8));
        menuQuit->setTitle(QApplication::translate("Alcantara", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Alcantara: public Ui_Alcantara {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALCANTARA_H
