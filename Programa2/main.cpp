#include <iostream>
#include <stdlib.h>
using namespace std;
/*
Ingresar las horas trabajadas y el pago por hora del empleado luego de terminar su pago ded horas,
la deduccion del rap que es de 1.5% de ingreso, presentar el total a pagar.
*/
int main()
{ int horas, pxh, phoras, rap,totalp;
    cout<<"Ingresar las horas trabajadas...:";
    cin>>horas;

    cout<<"ingresar el pago por hora...:";
    cin>>pxh;
    phoras = pxh * horas;
    rap = phoras * 0.015;
    totalp = phoras - rap;

    cout<<"pago total de horas es "<<phoras<<"\n";
    cout<<"Deduccion del Rap "<<rap<<"\n";
    cout<<"Total a pagar es "<<totalp<<"\n";
    system("PAUSE");

}
