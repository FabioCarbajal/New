#include <iostream>

using namespace std;

int sum(const int array[],const int length)
{
    int sum=0;
    for(int i=0;i<length;sum+=array[i++]);
    return sum;
}

int prom(const int array[],const int length)
{
    float pro=sum(array,length);
    return pro/length;
}

void intercambio(int &a,int &b)
{
    int tam;
    tam=a;
    a=b;
    b=tam;
}

void invertir(int array[],int length)
{
    for(int i=0;i<length/2;i++)
        intercambio(array[i],array[length-(i+1)]);

}

int main()
{
    int n;
    cout << "Ingrese la cantidad de elementos de arreglo: " << endl;
    cin >> n;
    int array[n];
    cout << "Ingrese los elementos: " << endl;
    for(int i=0; i<n; i++)
        cin >> array[i];
    cout << "sum: " << sum(array,n) << endl;
    cout << "prom: " << prom(array,n) << endl;
    cout << "Arreglo Invertido: " << endl;
    invertir(array,n);
    for(int i=0; i<n; i++)
        cout << array[i];
}


