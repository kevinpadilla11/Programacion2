#include <iostream>

using namespace std;
struct empleado
{
     char nombre [30];
     int horas,turno;//1,2,3
     double pxh,pb;
};
empleado emple;// mepleado es el tipo de datos y emple la variable.
int main()
{
    cout << "Ingresar el nombre...:";
    cin.getline(emple.nombre,30);

    cout<< "ingresar las horas...:";
    cin>>emple.horas;

    do
    {
        cout << "ingresar el turno 1,2,3...:";
        cin>> emple.turno;

    }
    while (!((emple.turno>=1)and (emple.turno<=3)));
    switch (emple.turno)
    {
    case 1:
        emple.pxh=90;
        break;
    case 2 :
        emple.pxh=100;
        break;
    default:
        emple.pxh=130;
        break;

    }
    emple.pb=emple.pxh*emple.horas;
    cout<< "pago por hora:"<<emple.pxh<<"\n";

    cout<< "Total a pagar:"<<emple.pb<<"\n";
}
