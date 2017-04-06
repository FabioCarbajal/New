#include <iostream>

using namespace std;

//int main()
//{
//    int n;
//    cout << "Ingrese el limite: ";
//    cin >> n;
//    for (int i=2;i<n;i++)
//    {
//        int cont=0;
//        for(int j=1;j<=i;j++)
//        {
//             if((i%j)==0)
//                cont++;
//        }
//        if(cont==2)
//            cout << i << endl;
//
//    }
//    return 0;
//}

int main()
{
    int n;
    cout << "Ingrese el numero a operar: " << endl;
    cin >> n;
    fibo(n);
}
int fibo(int n)
{
    if(n==0 || n==1)
        return n;
    else
        return fibo(n-2) + fibo(n-1);
    cout << fibo(n) << endl;
    return 0;
}
