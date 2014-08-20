#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*
ingresar tabla de multiplicacion a presemtar, usar el ciclo
for asi
     1x5=5
    2x5=10
*/
int main()
{
int tabla, resp, i;
cout<<"Tabbla de multiplicar a presentar...:";
cin>> tabla;
for (i=1; i<=10;i++) // for inicializar variable;condicion;incremento
{
    resp= i * tabla;
    cout <<i<< " X" << tabla<<" = "<<resp<< "\n";
}


}
