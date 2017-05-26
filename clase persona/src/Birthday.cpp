#include "Birthday.h"

Birthday::Birthday()
{
    mes=03;
    dia=25;
    ano=1998;
}

void Birthday::imprimirc()
{
      cout << "Su cumpleaños es: " << mes << "/ " << dia << "/ " << ano << endl;
}
