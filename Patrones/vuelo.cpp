#include "vuelo.hpp"

Vuelo::Vuelo(string destin,int time,int preci)
{
    observadores = Lista<Observador*>();
    horaPartida = &time;
    destino = destin;
    precio = preci;
}
void Vuelo::agregarObservador(Observador* ob){
    observadores.add(ob);
}
void Vuelo::eliminarObservador(Observador*  ob){
    observadores.eliminarDato(ob);
}
int Vuelo::getHora(){
    return *horaPartida;
}
void Vuelo::setHora(int hour){
    cout<<"El vuelo con destino a "<<destino<< " cambió su hora de partida a las : "<<hour<<endl;
    cout<<"_____________________________________________________________"<<endl;
    horaPartida = &hour;
    notificar();
}
void Vuelo::notificar(){
    int i =0;
    while(i<observadores.largo){
        observadores.buscar(i).dato->actualizar(*horaPartida);
         i++;
    }
}
