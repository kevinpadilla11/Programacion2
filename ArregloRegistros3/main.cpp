#include <iostream>

/*Ingresar 5 alumnos a un registro con los siguientes datos
nombre, p1, p2. promedio.
usando un procedimiento ingresar el nombre y las notas.
usar una funcion para clacular el promedio de un alumno.
Usar un procedimiento para calcular los promedios de todos los
alumnos..
Usar una funcion para devolver el mejor alumno de todo el arreglo.
Elaborar un procedimiento para presentar un alumno.
Elaborar un procedimiento para presentar todos los empleados.
*/

using namespace std;
struct alumno
{
    char nombre[30];
    int p1,p2;
    double promedio;
};
int const n=5;
alumno alum[n];
void ingreso(alumno alum[], int n)
{  int i;
   for(i=0;i<n;i++)
   {
       cout<<"Ingresar Nombre del alumno:";
       cin.getline(alum[i].nombre,30);
       cout<<"Notas Parcial 1...:";
       cin>>alum[i].p1;
       cout<<"Notas Parcial 2...:";
       cin>>alum[i].p2;

   }
}
void calcular (alumno alum[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        alum[i].promedio= ((alum[i].p1)+(alum[1].p2));
    }
}
void presentar_reg (alumno alum)
{
   cout<<"Alumno..:"<<alum.nombre<<"\n";
        cout<<""<<alum.promedio <<"\n";
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
