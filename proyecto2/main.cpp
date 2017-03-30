#include <iostream>

using namespace std;

//int main()
//{
//    int c=4;
//    cout << c++ << endl;
//    cout << ++c << endl;
//    return 0;
//}

//int main()
//{
//    int a;
//    int b;
//    int z;
//    cout << "Valor de a: ";
//    cin >> a;
//    cout << "Valor de b: ";
//    cin >> b;
//    z=(a>b)?a:b;
//    cout << "El mayor es: " << z << endl;
//    return 0;
//}

//int main()
//{
//    int i=5;
//    int a;
//    int score[i];
//    cout << "Ingrese los valores a asignar: " << endl;
//    cin >> score[0];
//    cin >> score[1];
//    cin >> score[2];
//    cin >> score[3];
//    cin >> score[4];
//    for(a=0;a<i;a++)
//        cout << score[a] << endl;
//    return 0;
//}

int main()
{
    int score[3];
    cout << "Ingrese los valores a asignar: " << endl;
    cin >> score[0];
    cin >> score[1];
    cin >> score[2];
    int b;
    b=score[0];
    score[2]=score[1];
    cout << score[0] << endl;
    cout << score[1] << endl;
    cout << score[2] << endl;
    return 0;
}
    return 0;
}
