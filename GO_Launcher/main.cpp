#include <QApplication>
#include <QMessageBox>
#include <QtGlobal>

#include "SLauncher.h"

int main(int argc, char *argv[]) try
{
    QApplication app(argc, argv);

    SLauncher* launcher = &SLauncher::getInstance();
    launcher->initManagers();
    launcher->init();

    return app.exec();
}
catch (std::exception exception)
{
    QApplication app(argc, argv);
    QMessageBox::critical(NULL, "GO - Runtime error", exception.what());

    return 1;
}
