#ifndef PERSONA_H
#define PERSONA_H
#include <string.h>
#include <iostream>
#include "Birthday.h"

using namespace std;

class Persona
{
    public:
        Birthday cumpleanos;
        string nombre;
        int dni;
        int peso;
        double altura;
        int edad;
        string sexo;
        Persona();
        Persona(string nombre, int dni, int peso, int altura, int edad, int sexo);
        void imprimir();
        void imprimirc();
};

#endif // PERSONA_H
