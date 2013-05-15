#ifndef ALCANTARA_H
#define ALCANTARA_H

#include <QMainWindow>
#include <QMenu>
#include <QProcess>
#include <QWidget>
#include <QKeyEvent>
#include <QtCore/QFileSystemWatcher>
#include <QtCore/QDirIterator>
#include <QtCore/QDebug>
#include <QtCore/QString>
#include <QtCore/QList>
#include <QtCore/QListIterator>
#include <QSystemTrayIcon>
#include "../ui_alcantara.h"
class Alcantara : public QMainWindow
{
	Q_OBJECT
    public:
        Alcantara(QWidget *parent = 0, Qt::WFlags flags = 0);
        virtual ~Alcantara();

	public slots:
		void clearAppSearchEntry();
    protected:

    private slots:
        void searchName(QString name);
        void openApp();
        void openAppItem(QListWidgetItem* item);
        void launch(QString programName); //SLOT
        void cleanProcesslist();
        void keyPressEvent(QKeyEvent *e);

    signals:
        void selectedApp();
        void cancelSelection();
    private:
        Ui::Alcantara ui;
        QStringList usrApps, usrAppsFullPath;
        QList<QProcess*> processList;
        QWidget *parent;
        void fillList();
};

#endif // ALCANTARA_H
