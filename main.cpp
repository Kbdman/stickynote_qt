#include <QApplication>

#include <stickynote.hpp>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("simple browser");
    a.setApplicationVersion("1.0");

    StickyNote w(nullptr);
    w.setMinimumSize(500, 500);
    w.show();

    return a.exec();
}
