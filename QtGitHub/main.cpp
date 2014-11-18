#include <QCoreApplication>
#include <QDebug>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Estamos sincronizando un repositorio local con uno en github";

    int n1;
    qDebug() << "Introduzca un entero:";
    std::cin >> n1;

    int n2;
    qDebug() << "Introduzca oro entero:";
    std::cin >> n2;

    qDebug() << "La suma de los números introducidos es: " << (n1+n2);



    return a.exec();
}
