#ifndef ALCANTARA_H
#define ALCANTARA_H

#include <QMainWindow>
#include <QWidget>
#include <QtCore/QFileSystemWatcher>
#include <QtCore/QDirIterator>
#include <QtCore/QDebug>
#include <Qt/qglobal.h>
#include <QtCore/QString>
#include <QtCore/QList>
#include <QtCore/QListIterator>
#include "../ui_alcantara.h"
class Alcantara : public QMainWindow
{
	Q_OBJECT
    public:
        Alcantara(QWidget *parent = 0, Qt::WFlags flags = 0);
        virtual ~Alcantara();
    protected:

    private slots:
        void searchName(QString name);
        void openApp();
        void openAppItem(QListWidgetItem* item);
    private:
    Ui::Alcantara ui;
    QList<QString> usrApps, usrAppsFullPath;

    void fillList();

};

#endif // ALCANTARA_H
