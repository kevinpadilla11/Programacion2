#include <iostream>
#include <stdlib.h>
/*
Ingresar la nota acumulada y ecamen, luego determinar la nota final
y la observacion (aprobado o reprobado).
*/
using namespace std;

int main()
{    int na,ne,nf;
char nombre [30];
 cout << "Nombre del Alumno...:";
cin.getline(nombre,30);

    cout << "Nota Acumulada...:";
    cin >>na;

    cout << "Nota Examen...:";
    cin >>ne;

    nf = na + ne;

    cout << "Nota Final es : "<<nf<<"\n";
    if (nf<60)
        {cout << "Reprobado""\n";}
    else
            {cout << "Aprobado""\n";}
system("PAUSE");
}
