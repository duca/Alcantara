#include <QApplication>
#include "include/Alcantara.h"
#include <QObject>
#include "include/singleInstance.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    Alcantara launcher;

    singleInstance instanceChecker;
    QObject::connect(&instanceChecker, SIGNAL(newInstanceOpened()), &launcher, SLOT(show()));
    QObject::connect(&instanceChecker, SIGNAL(newInstanceOpened()), &launcher, SLOT(clearAppSearchEntry()));
    QObject::connect(&instanceChecker, SIGNAL(notFirstInstance()), &launcher, SLOT(close())); //it does not end the second instance

	//register a dbus service in case of being the first instance. Otherwise signal the first and exists
    if(instanceChecker.checkFirstInstance())
    {
		if (!QDBusConnection::sessionBus().registerService(SERVICE_NAME)) {
			 //qDebug()<<qPrintable(QDBusConnection::sessionBus().lastError().message());
			 exit(1);
		 }
		 //register the instanceChecker which will receive the signal emited by the second instance
		 QDBusConnection::sessionBus().registerObject("/", &instanceChecker , QDBusConnection::ExportAllSlots);

		 launcher.show();
		 return app.exec();
    }
    else
    {
    	return 0;
    }


}
