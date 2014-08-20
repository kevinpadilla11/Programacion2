#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Ingresar el nombre del empleado, las ventas de los 7 dias de
la semana , luego pedir el turno de trabajo (1,2,3 validar el turno).

Calcular el % de comisión usando el turno

Turno                    %comis
1                          5%
2                          7%
3                          8%
El seguro social y el total a pagar , luego preguntar si desea continuar , al final
presentar el mejor sueldo, el sueldo promedio y la suma de todos los sueldos.
*/
int main()
{
    char nombre[30],resp;
    int turno,i,suma,tp,ihss,mayor=0,sumsuel=0,ciclo=0;
    double comis,pc,ventas,prom;
    suma=0;
    do
    {
        cout<<"Ingresar el nombre del empleado..:";
        cin.getline(nombre,30);
         for (i=0;i<7;i++)
         {
           cout<<"Las Ventas de los 7 dias....:";
            cin>>ventas;
            suma+=ventas;

        }

        do
        {
            cout<<"Turno de trabajo...:";
            cin>>turno;
        }while (!((turno>=1) and (turno<=3)));

        switch (turno)
        {
            case 1:
                pc=0.05;
                break;
            case 2 :
                pc=0.07;
                break;
            default :
                pc=0.08;
                break;
        }
        comis= suma * pc;
        if (suma>7000)
            ihss =245;
        else
            ihss =0.035;

        tp = comis-ihss;
        _flushall();
        cout<<"suma de Ventas :" <<suma<< "\n";
        cout<<"% De Comisión :"<<pc<<"\n";
        cout<<"Comisión Ganada : "<<comis<<"\n";
        cout<<"Seguro Social :" <<ihss<<"\n";
        cout<<"sueldo Total :" <<tp<<"\n";
         _flushall();
       if (mayor<tp)
       {
           mayor=tp;
           sumsuel+=tp;
           ciclo++;
       }
prom=sumsuel/ciclo;
       do
        {
           cout<<"Desea Continuar...>";
           cin.get(resp);
            _flushall();
        } while ((resp !='S') and  (resp !='N'));

}
while (resp!='N');
cout<<"El Sueldo Mayor es ..."<<mayor<<"\n";
cout<<"La Suma de  Sueldos es ..."<<sumsuel<<"\n";
cout<<"El Promedio  de  Sueldos es ..."<<prom<<"\n";
}
