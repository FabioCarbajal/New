#include <iostream>
#include "vector.h"

using namespace std;


int main()
{
    Vector a;
    a.origen_start();
    a.wend.x=2;
    a.wend.y=3;
    a.imprimir();
    a.distancia();
    return 0;
}
