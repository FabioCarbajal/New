#ifndef GERENTE_H
#define GERENTE_H
#include "Persona.h"
#include <iostream>

using namespace std;


class Gerente:public Persona
{
protected:
    string carro;
public:
    Gerente(string car);
    void imprimirg();
};

#endif // GERENTE_H
