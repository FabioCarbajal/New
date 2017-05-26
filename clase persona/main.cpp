#include <iostream>
#include "Gerente.h"
#include "Persona.h"
#include "Conserje.h"

using namespace std;

int main()
{
    cout << "Gerente" << endl;
    Gerente m("toyota");
    m.nombre="Manuel Alarcon";
    m.dni=12345678;
    m.altura=1.56;
    m.peso=60;
    m.edad=18;
    m.sexo="M";
    m.cumpleanos.imprimirc();
    m.imprimir();
    cout << endl;
    cout << "Conserje" << endl;
    Conserje a("Patio");
    a.nombre="Pedro Calle";
    a.dni=32165487;
    a.altura=1.75;
    a.peso=72;
    a.edad=17;
    a.sexo="M";
    a.cumpleanos.imprimirc();
    a.imprimir();

    return 0;
}
