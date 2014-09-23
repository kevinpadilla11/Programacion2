#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;
int li,ls,mayor,menor,c,ciclo=0;
int mayor=0;
void pedir (int &li,int &ls)
 {

 cout<< "ingresar limite inferior";
 cin>>li;

 cout<< "ingresar limite superior" "\n";
 cin>>ls;
 while (ls<li)
 {
  num=li;
 }
 }

 int maximo (int num)
    int mayor,numx;
 mayor =0;
 while (num>li)
 {

 }
int generarNumero()
{  int numx;
    srand(time(0));// generar una nueva semilla
    numx = 1 + rand()%(100000-1);
    return numx;
}

void presentar(int num)
{
   int c,numx;

    while (num>0)
    {
        numx= num % 10;
        cout<<numx<<" ";
    }
int sumadivicinco(int num)
{
    int c,numx;
    c=0;
    while (num>0)
    {
        numx= num % 10;
        if (num%5==0)
        {
            c+=numx;
        }

        num= num/10;

    }
    return c;
}

int main()

{

 num=generarNumero();
 suma=void sumanum();
 cout<<"el numero generado es:" <<num<< "\n";
 cout<<"suma de los digitos es multiplos de 5 es..:"<<c<< "\n";

}
