#include "pasajeros.hpp"

Pasajeros::Pasajeros(int num,int min,int max)
{
    numeroPasajero = num;
    horaMax = max;
    horaMin = min;
}
void Pasajeros::actualizar(int hora){
    cout<<"Pasajero "<< numeroPasajero<< " dice:"<<endl;
    if(hora <= horaMax && hora >= horaMin ){
        cout<<"si me sirve el nuevo horario"<<endl;
    }else{
        cout<<"No puedo tomar este vuelo, debo reprogramar"<<endl;
    }
    Observador::actualizar(hora);
}
