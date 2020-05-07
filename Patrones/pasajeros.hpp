#ifndef PASAJEROS_HPP
#define PASAJEROS_HPP
#include <iostream>
#include "observador.hpp"

using namespace std;

class Pasajeros : public Observador{
public:
    Pasajeros(int,int,int);
    void actualizar(int);
    int numeroPasajero;
    int horaMin;
    int horaMax;
};

#endif // PASAJEROS_HPP
