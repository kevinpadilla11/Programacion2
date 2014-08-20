#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
generar un numero entre 1-100 usando una funcion,luego elaborar una funcion
que nos devuelva la respuesta validada de S o N.
Pedir los numeros y presentar la suma.
*/
using namespace std;
int num,suma,mayor;
char resp;

int aleatorio1_100 ()

{ int numx;
    srand (time(0));
    numx= 1+ rand () % (101-1);
    return numx;
}
char pedirrespuesta()

{ char respx;
    do
    {
        cout<<"Desea Continua...>";
        cin.get(respx);
        _flushall();
    }
    while ((respx !='S')and (respx !='N'));
    return respx;
}
void sumanum (int num , int &suma )
{
    suma+=num;
}

int maximo(int num, int mayor)

{
    if (num > mayor)
        return num;

else

    return mayor;
}
int main()
{ suma =0;
    do
    {

        num= aleatorio1_100();
        cout<<"Numero Generado es :" <<num<<"\n";
        resp= pedirrespuesta();
       sumanum(num,suma);
   mayor = maximo(num,mayor);
    }
    while (resp!='N');
cout << "Suma de los numeros es...:"<<suma<<"\n";
cout << "El numero mayor es...:"<<mayor<<"\n";
}
