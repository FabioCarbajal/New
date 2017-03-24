#include <iostream>

using namespace std;

//#int main()
//#{
//#    float x;
//#    float y;
//#    float z;
//#    float a = x + y - z;
//#    cout << "Ingrese el valor de x: ";
//#    cin >> x;
//#    cout << "Ingrese el valor de y: ";
//#    cin >> y;
//#    cout << "Ingrese el valor de z: ";
//#    cin >> z;
//#    a = x*y-z;
//#    cout << a << endl;
//#    return 0;
//#}
//int main()
//{
//    float r;
//    float b;
//    float h;
//    float l;
//    float pi=3.14;
//    cout << "Ingrese el valor del radio: ";
//    cin >> r;
//    cout << "El area del circulo es: " << pi*(r*r) << endl;
//    cout << "Ingrese el valor de la base: ";
//    cin >> b;
//    cout << "Ingrese el valor de la altura: ";
//    cin >> h;
//    cout << "El area del rectangulo es: " << b*h << endl;
//    cout << "Ingrese el valor del lado: ";
//    cin >> l;
//    cout << "El area del cuadrado es: " << l*l << endl;
//    return 0;
//}
//
//int main()
//{
//    int x;
//    int y;
//    int a;
//    cout << "Ingrese el valor de x: ";
//    cin >> x;
//    cout << "Ingrese el valor de y: ";
//    cin >> y;
//    a=x;
//    x=y;
//    y=a;
//    cout << "x: " << x << endl;
//    cout << "y: " << y << endl;
//    return 0;
//}
//int main()
//{
//    int x;
//    int y;
//    cout << "Ingrese el valor de x: ";
//    cin >> x;
//    cout << "Ingrese el valor de y: ";
//    cin >> y;
//    x=x+y;
//    y=x-y;
//    x=x-y;
//    cout << "x: " << x << endl;
//    cout << "y: " << y << endl;
//    return 0;
//}

//int main()
//{
//    int x;
//    int y;
//    cout << "Ingrese el valor de x: ";
//    cin >> x;
//    cout << "Ingrese el valor de y: ";
//    cin >> y;
//    if(x>y)
//        cout << "el mayor es " << x << endl;
//    else
//        cout << "el mayor es " << y << endl;
//    return 0;
//}
int main()
{
    int x;
    int y;
    int z;
    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de y: ";
    cin >> y;
    cout << "Ingrese el valor de z: ";
    cin >> z;
    if(x>y&&x>z)
        cout << "el mayor es " << x << endl;
        else if(y>x&&y>z)
            cout << "el mayor es " << y << endl;
    else
        cout << "el mayor es " << z << endl;
    return 0;
}
