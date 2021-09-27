#include "demo.h"

#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // OPTIONAL: Set your own icon pack. By default, Qt will search in :icons/
    QIcon::setThemeSearchPaths(QStringList() << ":pack/");

    // If we request an icon that is not found in the icon pack, search in the :custom-icons folder.
    QIcon::setFallbackSearchPaths(QIcon::fallbackSearchPaths() << ":custom-icons");

    Demo w;
    w.show();
    return a.exec();
}
