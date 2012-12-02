#ifndef SINGLEINSTANCE_H
#define SINGLEINSTANCE_H

#include <QtCore/QObject>
#include <QtDBus/QDBusConnection>
#include <QtDBus/QtDBus>
#define SERVICE_NAME "com.tecnocientifica.SingleInstance"
class singleInstance : public QObject
{
	Q_OBJECT
	public:
		singleInstance();
		virtual ~singleInstance();
		bool checkFirstInstance();
	public slots:
		Q_SCRIPTABLE QString showwindow(QString arg);
	protected:
	private:

	signals:
		void newInstanceOpened(); //signal used to unhide first instance window
		void firstInstance();
		void notFirstInstance();
};

#endif // SINGLEINSTANCE_H
