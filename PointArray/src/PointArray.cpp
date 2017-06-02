#include "PointArray.h"

PointArray::PointArray()
{
    this->lenght=0;
    puntero=new Point[lenght];
}

PointArray::PointArray(Point points[], const int lenght)
{
    puntero=points;
    this->lenght=lenght;
}

PointArray::PointArray(const PointArray &pv)
{
    this->lenght=pv.lenght;
    this->puntero=pv.puntero;
}

PointArray::~PointArray()
{
    for(int i=0;i<lenght;i++)
    {
        (puntero++)->setX(0);
        (puntero++)->setY(0);
    }
    delete[] puntero;
}

void PointArray::relenght(int n)
{
    delete[] puntero;
    Point arreglo2[n];
    if(n<lenght)
        for(int i=0; i<n; i++){
            arreglo2[i]=(puntero++)->getX();
            arreglo2[i]=(puntero++)->getY();
        }
    puntero=arreglo2;
    this->lenght=n;
}












