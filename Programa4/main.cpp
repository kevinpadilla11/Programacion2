#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n1, n2, mayor;
    cout << "Ingrese 1er Numero...:";
    cin >>n1;

    cout << "Ingrese 2do Numero...:";
    cin >>n2;

    if (n1>n2)
    {mayor = n1;}
     else
            {mayor = n2;}
            cout<<"Mayor es " <<mayor<<"\n";
            system("PAUSE");

}
