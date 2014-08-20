#include <iostream>
using namespace std;

int main()
{
    int numero, cifra, suma,par,impar, ciclo=0;
    double promedio;
    numero=0;suma=0;par=0;impar=0;
    cout<<"ingresar un numero ...";
    cin>> numero;
    while (numero>0)
    {
        cifra=numero%10;
        cout<<cifra;

        if(cifra%2==0){
            par+=cifra;
        }else{
        impar++;
        }

        numero = numero / 10;
        suma+=cifra;
        ciclo++;
    }
    promedio=suma/ciclo;

        cout<<"\nPromedio...: "<<promedio;
        cout<< "\nsuma...: " <<suma<< "\n";
        cout<<"contador de Pares...: " <<par<< "\n";
        cout<<"contador de Impares...: " <<impar<< "\n";

}
