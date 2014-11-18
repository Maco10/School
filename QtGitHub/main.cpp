#include <QCoreApplication>
#include <QDebug>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Estamos sincronizando un repositorio local con uno en github";

    return a.exec();
}
