#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/* Ingresar el nombre del empleado, las ventas de los 7 dias de
la semana , luego pedir el turno de trabajo (1,2,3 validar el turno).

Calcular el % de comisión usando el turno

Turno                    %comis

1                                             5%
2                                             7%
3                                             8%

El seguro social y el total a pagar , luego preguntar si desea continuar , al final
presentar el mejor sueldo, el sueldo promedio y la suma de todos los sueldos.
*/

int main()
{
    char nombre[30];
    int ventas,suma, comis,pb,ihss,tp,i;
    char resp,zona;
    suma=0;

    do
    {


        cout<<"Ingresar el nombre del empleado..:";
        cin.getline(nombre,30);

        for (i=0;i<7;i++)
        {
           cout<<"Las Horas....:";
            cin>>horas;
            suma+=horas;

        }
        _flushall();
         do
            {
               cout<<"Ventas .>";
               cin>>resp;
               cin.get(zona);
                _flushall();
            } while ((resp !='1') and  (resp !='2')and  (resp !='3'));

        switch (zona)
        {
            case '1':
                comis=0.05;
                break;
             case '2':
                comis=0.07;
                break;
             default:
                comis=0.08;
                break;
        }

        pb= suma * comis;

        if (pb>7000)
            ihss =245;
        else
            ihss =0.035;

        tp = pb-ihss;
        _flushall();
        cout<< "suma de Horas"<<suma<<"\n";
        cout<< "Total a pagar"<<tp<<"\n";
        cout<< "Seguro"<<ihss<<"\n";


        do
            {
               cout<<"Desea Continuar...>";
               cin.get(resp);
                _flushall();
            } while ((resp !='S') and  (resp !='N'));


   }while (resp!='N');

}
