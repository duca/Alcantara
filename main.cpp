#include <QApplication>
#include "include/Alcantara.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    Alcantara launcher;
    launcher.show();
    return app.exec();
}
