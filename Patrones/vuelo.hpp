#ifndef VUELO_HPP
#define VUELO_HPP
#include <iostream>
#include "observador.hpp"
#include "Lista.hpp"
#include "pasajeros.hpp"

using namespace std;


class Vuelo
{
public:
    Vuelo(string,int,int);
    void agregarObservador(Observador*);
    void eliminarObservador(Observador*);
    void notificar();
    int getHora();
    void setHora(int);
private:
    Lista<Observador*> observadores;
    string destino;
    int* horaPartida = nullptr;
    int precio;
};

#endif // VUELO_H
