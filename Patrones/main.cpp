#include <QCoreApplication>
#include "vuelo.hpp"
#include "pasajeros.hpp"
#include "Lista.hpp"

int main(int argc, char *argv[])
{
    Vuelo vuelo1 = Vuelo("Alaska",2,1000);
    Pasajeros* pasajero1 = new Pasajeros(1,0,5);
    Pasajeros* pasajero2 = new Pasajeros(2,1,19);
    Pasajeros* pasajero3 = new Pasajeros(3,0,10);
    Pasajeros* pasajero4 = new Pasajeros(4,1,22);
    Pasajeros* pasajero5 = new Pasajeros(5,13,20);
    vuelo1.agregarObservador(pasajero1);
    vuelo1.agregarObservador(pasajero2);
    vuelo1.agregarObservador(pasajero3);
    vuelo1.agregarObservador(pasajero4);
    vuelo1.agregarObservador(pasajero5);
    vuelo1.setHora(8);
    vuelo1.setHora(19);
    QCoreApplication a(argc, argv);

    return a.exec();
}
