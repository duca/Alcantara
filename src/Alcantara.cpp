#include "../include/Alcantara.h"

Alcantara::Alcantara(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
    //QMainWindow *window = new QMainWindow;
    ui.setupUi(this);
    //ctor
    fillList();
    QObject::connect(ui.appSearchEntry, SIGNAL(textChanged(QString)), this, SLOT(searchName(QString)));
    QObject::connect(ui.appsList, SIGNAL(itemActivated(QListWidgetItem*)), this, SLOT(openAppItem(QListWidgetItem*)));
    QObject::connect(ui.appSearchEntry, SIGNAL(returnPressed()), this, SLOT(openApp()));
}

Alcantara::~Alcantara()
{
    //dtor
}

void Alcantara::fillList()
{

    //read desktop applications name
//    QDirIterator deskAppsIter("/usr/share/applications");
//    while(deskAppsIter.hasNext())
//    {
//        QString deskEntry = deskAppsIter.fileName();
//        deskEntry.chop(8); //remove the trailing .desktop text
//        deskApps.append(deskEntry);
//        deskAppsIter.next();
//    }
//    QListIterator<QString> deskIter(deskApps);
//
//    bool contain = false;
    //read all usr/bin applications name
    QDirIterator usrAppsIter("/usr/bin");
    while(usrAppsIter.hasNext())
    {
        QString usrEntry = usrAppsIter.fileName();
        if(!usrEntry.isEmpty())
        {
            if( usrEntry != "." && usrEntry != "..")
            {
                this->ui.appsList->addItem(usrEntry);
                this->usrApps.append(usrEntry);
                this->usrAppsFullPath.append(usrAppsIter.path());
            }
        }
        usrAppsIter.next();
    }
}

void Alcantara::searchName(QString name)
{
    QListIterator<QString> usrIter(usrApps);
    QStringList results;
    ui.appsList->clear();


    while(usrIter.hasNext())
    {
        QString usrEntry = usrIter.next();

        //assume the User usually types the begining of the word
        if(usrEntry.startsWith(name, Qt::CaseInsensitive))
        {
            results.prepend(usrEntry);
        }
        //add any other which contains the 'name' segment
        else if(usrEntry.contains(name))
        {
           results.append(usrEntry);
        }
    }

    QListIterator<QString> resultsIter(results);

    //finally populate the listwidget
    while(resultsIter.hasNext())
    {
        QString entry = resultsIter.next();
        this->ui.appsList->addItem(entry);
    }

}
void Alcantara::openApp() //SLOT
{
    QListWidgetItem* currentSelection = this->ui.appsList->item(0);
    QString currentString = currentSelection->text();
    qDebug()<< currentString;
    this->launch(currentString);


}
void Alcantara::openAppItem(QListWidgetItem* item) //SLOT
{
    QString currentString = item->text();
    qDebug()<< currentString;
    this->launch(currentString);

}
void Alcantara::launch(QString programName) //SLOT
{
    //first step is to clean the list
    this->cleanProcesslist();

    //Creates a new process to launch the desired program
    QProcess *newProcess = new QProcess(parent);
    newProcess->start(programName);

    //Apend the new QProcess to the list of opened process
    this->processList.append(newProcess);
}

void Alcantara::cleanProcesslist()
{
    QMutableListIterator<QProcess*> procIt(this->processList);

    while(procIt.hasNext())
    {
        //check Status and remove if not running
        if(procIt.next()->state() == QProcess::NotRunning)
        {
            procIt.remove();
        }
    }

}
