#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
Crear un resgistro con los siguientes datos
nombre, na,ne,nf.
elaborar un procedimiento para ingresar los datos del registro, otro para presentar los datos del registro,
una función para devolver la nota final, una función para devolver una respuesta S o N.
Hacerlo varias veces hasta que el usuario diga que no , deberá de ir presentado los datos .
al final presentar el alumno con la mejor nota.
*/
using namespace std;
struct alumno
{


     int na,ne ,nf,mayor;
     char resp,nombrex;
};
alumno alum;
char pedirnombre()
{


char nombre [30];
{
    cout << "Ingresar el nombre del alumno...:";
    cin.getline(nombre,30);
return alum.nombrex;
}
}

char pedirrespuesta()

{ char respx;
    do
    {
        cout<<"Desea Continuar...>";
        cin.get(respx);
        _flushall();
    }
    while ((respx !='S')and (respx !='N'));
    return respx;
}
void ingresar(int &na,int &ne)
{
    cout<<"Ingresar La Nota Acumulada :" ;
    cin >> na;
    cout<< "ingresar La Nota Examen :";
    cin>> ne;
}
void calcular (int &na,int &ne, int &nf)
{
    nf = na+ne;
}
int maximo(int nf, int mayor)

{
    if (nf > mayor)
        return nf;

else

    return mayor;
}
int main()
{



    alum.na=0; alum.ne=0;


    do
    {
        alum.nombrex=pedirnombre();
ingresar (alum.na,alum.ne);
calcular (alum.na,alum.ne,alum.nf);
    cout<< "La nota Final es :" <<alum.nf<<"\n";
    alum.resp= pedirrespuesta();
    alum.mayor = maximo(alum.nf,alum.mayor);



    }
while (alum.resp!='N');
cout << "La Nota mayor es...:"<<alum.mayor<<"\n";

}
