#include "../include/singleInstance.h"
#include <QDebug>
#include <QString>
singleInstance::singleInstance()
{
	//ctor
}

singleInstance::~singleInstance()
{
	//dtor
}

QString singleInstance::showwindow(QString arg)
{
	//qDebug()<< "new instance signaled this one";
	emit newInstanceOpened();
	return arg;
}

bool singleInstance::checkFirstInstance()
{
	/*
		This function checkes wether this is the first instance or not emitting an adequate signal
	*/
	 //qDebug()<< "Checking for new instances" ;
	 QDBusInterface iface(SERVICE_NAME, "/", "", QDBusConnection::sessionBus());

	 //if this is the first instance and a second calls, the method showWindow instructs
	 //the first one to unhide.
     if (iface.isValid()) {
         QDBusReply<QString> reply = iface.call("showwindow", "");
         //qDebug() << reply;
         if (reply.isValid()) {
         	 //qDebug() << "not the first one";
             emit notFirstInstance();
             return false;
         }
         else
         {
         	//qDebug()<< reply.error().message();
         	//qDebug()<< QDBusConnection::sessionBus().lastError().message();
         	//qDebug() << "first one";
         	return true;
         }
         //emit notFirstInstance();

     }
     else
     {
		//qDebug()<< "erro no iface";
		//qDebug()<< QDBusConnection::sessionBus().lastError().message();
     	//qDebug()<< iface.lastError().message();
     	emit firstInstance();
     	return true;
     }
}
