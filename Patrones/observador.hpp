#ifndef OBSERVADOR_HPP
#define OBSERVADOR_HPP
#include <iostream>

using namespace std;

class Observador
{
public:
    Observador();
    virtual void actualizar(int hora);
};

#endif // OBSERVADOR_HPP
