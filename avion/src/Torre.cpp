#include "Torre.h"

void Torre::agregar(Avion *w)
{
    aviones.push_back(w);
}

void Torre::imprimir()
{
    for(int i=0;i<aviones.size();i++)
    {
        aviones[i]->pasajeros();
    }
}
