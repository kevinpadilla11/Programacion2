#include <iostream>

using namespace std;
/* Ingresar dos numeros usando un procedimiento, luego calcular
la suma del numero mayor de ambos numeros usando un procedimiento,
presentar los datos.
*/

int num1,num2,suma,mayor, menor;
int menornumero(int num1,int num2)
{
    int menor;
    if (num1<num2)

        menor=num1;

    else


        menor= num2;
        return menor;

}

void ingresar(int &num1,int &num2)
{
    cout<<"Ingresar numero 1 :" ;
    cin >> num1;
    cout<< "ingresar numero 2 :";
    cin>> num2;
}
void calcular (int num1,int num2, int &mayor, int &suma)
{
    suma = num1+num2;
    if (num1>num2)
    {
        mayor=num1;
    }
    else
    {
        mayor=num2;
    }
}
int main()
{
    num1=0; num2=0;
    ingresar (num1,num2);
    calcular (num1,num2,mayor,suma);
    menor = menornumero(num1,num2);
    cout<< "Valor numero 1 :" <<num1<<"\n";
    cout<< "Valor numero 2 :" <<num2<<"\n";
    cout<< "Suma de los numeros :" <<suma<<"\n";
    cout<< "El numero mayor es :" <<mayor<<"\n";
        cout<< "El numero menor es :" <<menor<<"\n";
}
