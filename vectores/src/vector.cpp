#include "vector.h"
#include <iostream>
#include <math.h>

using namespace std;

void Vector::imprimir()
{
    start.imprimir();
    cout << " -> ";
    wend.imprimir();
    cout << endl;
}

void Vector::origen_start()
{
    start.origen();
    wend.origen();
}

void Vector::distancia()
{
    double temp_x=wend.x-start.x;
    double temp_y=wend.y-start.y;
    double tam=(temp_x*temp_x)+(temp_y*temp_y);
    double raiz=1/2.0;
    double res=pow(tam,raiz);
    cout << res;
}
