#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
     srand(time(0));
    int num, cn5y2,suma5y2,conta;
    double promedio;
    conta=0; cn5y2=0; suma5y2=0;

    while ((conta<10)and (num<300))
    {
         num = 1 + rand ()%((501-1));
         conta++;
    }
     if ((num%5==0) and (num%2==0))
    {
        cn5y2++;
        suma5y2+=num;

    cout<<"numero" "\n";
    promedio = (suma5y2/cn5y2);
    }

    else
        {
            promedio =0;
        }
    cout<<"promedio" <<promedio<< "\n";
    cout<<"contador de divisibles entre 5 y2" <<cn5y2<< "\n";
    cout<<"suma de  numeros divisibles entre 5 y2" <<suma5y2<< "\n";

}
