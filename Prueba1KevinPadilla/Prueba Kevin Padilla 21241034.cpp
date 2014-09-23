#include <iostream>
#include <stdlib.h>
#include <stdio.h>
/*
Se tiene un arreglo de registro con la siguiente estructura
nombre
zona
ventas
comision
Elaborar un procedimiento para ingresar el registro nombre ventas y validar
zona.
debera calcular la comision ganada usando una funcion.
zona      comis
1          5%
2          6%
3         8%

Elaborar un procedimiento para calcular todas las funciones.
Elaborar una funcion para devolver el mejor empleado usando la comisionganada.
usar un procedimiento para presentar un empleado y otro para presentar todos los empleados.
presentar el mejor empleado.
*/
using namespace std;
struct empleado
{
    char nombre[30];
    int ventas,zona;//validar que el turno sea 1,2,3
    double comis,tp;
};
int const n=5;
empleado emple[n];
empleado maxemple;

void ingreso(empleado emple[], int n)
{  int i;
   for(i=0;i<n;i++)
   {
       cout<<"Ingresar Nombre del empleado..:";
       cin.getline(emple[i].nombre,30);
       cout<<"Ventas Totales...:";
       cin>>emple[i].ventas;
       do
       {
           cout<<"Zona de trabajo...:";
           cin>>emple[i].zona;

       }while(!((emple[i].zona>=1) and (emple[i].zona<=3)));
       _flushall();
   }
}

double comisionganada(int zona)
{
     switch (zona)
        {
            case 1:
                return 0.05;
                break;
            case 2:
                return 0.06;
                break;
            default:
                return 0.08;
                break;
        }
}
void calcular (empleado emple[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        emple[i].comis= comisionganada(emple[i].zona);
        emple[i].tp=emple[i].ventas*comisionganada(emple[i].zona);
        }
}
void presentar_reg (empleado emple)
{
   cout<<"Empleado..:"<<emple.nombre<<"\n";
        cout<<"Comision..:"<<emple.comis<<"\n";
        cout<<"Total a pagar..:"<<emple.tp<<"\n\n";
}
void presentar (empleado emple[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        presentar_reg(emple[i]);
    }
}
    empleado MayorEmple (empleado emple[], int n)
    {

    int i;
    empleado xmax;
    xmax=emple [0];
    for (i=0;i<n;i++)
    {
        if (xmax.tp<emple[i].tp)
            xmax=emple[i];
    }
    return xmax;
}


int main()
{
    ingreso(emple,n);
    calcular(emple,n);
    presentar(emple,n);
    maxemple=MayorEmple(emple,n);
    cout<< "********El Mejor empleado es*******""\n";
    presentar_reg(maxemple);
    return 0;
}
