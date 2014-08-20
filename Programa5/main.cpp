#include <iostream>
#include <stdlib.h>
using namespace std;
/*
Ingresar el nombre del empleado, turno y las ventas, luego determinar el
porcentaje de comision usando el turno de trabajo, el seguro
social usando la comision y el total a pagar.
turno por comision
1           6%
2           8%
si el salario(comision) es mayor a 7000 la deduccion de
245 y sino es de 0.035% del salario.
el total a pagar es el ingreso (comision) - el ihss.
*/
int main()
{
    int  turno;
    char nombre[30];
    double ventas,comis, ihss, tp;
    cout << "Nombre del empleado:" ;
    cin.getline(nombre,30);

    cout << "Ventas...:" ;
    cin >>ventas;
    cout << "Turno...:" ;
    cin >>turno;

    if (turno==1) // cuando se compara se pone doble igual
    {
        comis = 0.06 * ventas;
    }
    else
    {
        comis= 0.08 * ventas;
    }
        if (comis>7000)
    {   ihss=245;}
    else
    {   ihss=0.035* comis;}
    tp=comis-ihss;
    cout << "comision"<<comis<<"\n" ;
    cout << "ihss"<<ihss<<"\n" ;
    cout << "Total a pagar"<<tp<<"\n" ;

}
