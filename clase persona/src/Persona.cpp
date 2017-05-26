#include "Persona.h"
#include <string.h>
#include <iostream>

using namespace std;

Persona::Persona()
{
    nombre= " ";
    dni= 0;
    peso= 0;
    altura= 0;
    edad= 0;
    sexo= " ";
}

void Persona::imprimir()
{
    cout << "Nombre: " << nombre << endl;
    cout << "DNI: " << dni << endl;
    cout << "Pesa: " << peso << " kg" << endl;
    cout << "Mide: " << altura << "m" << endl;
    cout << "Tiene: " << edad << " años" << endl;
    cout << "Sexo: " << sexo << endl;
}
