#ifndef CONSERJE_H
#define CONSERJE_H
#include "Persona.h"
#include <iostream>

using namespace std;

class Conserje: public Persona
{
protected:
    string lugar;
public:
    Conserje(string lugar);
    void imprimircon();
};

#endif // CONSERJE_H
