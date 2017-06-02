#ifndef TORRE_H
#define TORRE_H
#include "Avion.h"
#include <vector>
#include "A1.h"
#include "A2.h"

class Torre
{
    public:
        vector<Avion *> aviones;
        void agregar(Avion *w);
        void imprimir();

};

#endif // TORRE_H
