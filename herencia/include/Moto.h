#ifndef MOTO_H
#define MOTO_H
#include <iostream>
#include "Vehiculo.h"

using namespace std;


class Moto:public Vehiculo
{
    int kilometraje;
public:
    Moto(const string &mylicense,const int myyear,const int mykilometraje):Vehiculo(mylicense,myyear),kilometraje(mykilometraje);
};

#endif // MOTO_H
