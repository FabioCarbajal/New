#include "Point.h"
#include <iostream>

using namespace std;

void Point::origen()
{
    x=0;
    y=0;
}

void Point::imprimir()
{
    cout << x << "," << y;
}
