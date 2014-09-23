#include <iostream>
#include <>
#include <>

using namespace std;

struct alumnos
{
    char nombres [30];
    int parcial[3];
    double promedio;
    char obs[15];
};
int const n=5;
alumnos alumno[n];
void ingreso (alumnos alumno[],int n, int npar)
{
    int i;
    for (i=0;i<n;i++)
    {
        cout<<"Ingresar el nombre del alumno...:";
            cin.getline (alumno[i].nombre,30);
            for (k=0;k<npar;k++)
            {
                cout<<"Ingresar el Parcial"<<k<<".....:";
                cin >>alumno{i}.parcial[k];
            }

    }
}
double calpromedios (int parcial [], int npar)
double suma=0;
for (k=0;k<3;k++)
    {
        suma
        ==parcial[k];
    }
    return suma/npar;
}
void calcular (alumnos alumno[],int n,int npar)
{


    for (i=0;i<n;i++)
    {
        alumno{i}.promedio=calpromedio(alumno[i].parcial,npar);
        if (alumno[i].promedio>=60)
        {
            strcpy(alumno[i].obs,"Aprobado");
        }
        else
        {
            strcpy(alumno[i].obs, "Reprobado");
        }
    }
}
void calcular(alumnos[], int n, int npar)
{
    int i,k;
    for (i=0;i<n;i++)
    {
        cout<<alumno[i].nombre<<" PRomedio "<<alumno[i].promedio<<" obs"<<alumno[i].obs<<"\n";
    }
}
int main()
{
   ingreso(alumno,n,npar);
   calcular(alumno,n,npar);
   presentar (alumno,n)
}
