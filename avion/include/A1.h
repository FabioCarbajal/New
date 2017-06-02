#ifndef A1_H
#define A1_H
#include "Avion.h"


class A1:public Avion
{
    public:
        virtual void pasajeros()
        {
            cout << "Acepto 20 pasajeros" << endl;
        }
};

#endif // A1_H
