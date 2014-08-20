#include <iostream>
#include <stdlib.h>
#include <time.h>
/*generar numeros aleatorios entre 1-500, contar cuantos son numeros divisibles entre 5 y son pares a la vez
obtener su promedio y presentarlo al final, el programa finaliza si encuentra un numero mayor a 300 o genera 10 numeros
.
*/
using namespace std;

int main()
{
    srand(time(0));
    int i,cd5,cn,sn, prom, cd2;
    int num=0;
    bool fin=false;
    sn=0;cn=0; cd5=0;cd2=0;

    for( i=0; i<10; i++)
    {
        num = 1 + rand ()%((500-1));
        cout<<num<<" ""\n";
 if(num>=300)
        {

            fin=true;
            i=10;
            cout<<"Se ha generado un numero mayor a 300""\n";
        }
    }

    if(fin==false)
        cout<<"se han generado los 10 numeros";
    {
                if (num%5==0)
        {
            cd5++;
            cout<<cd5<<"===>" <<num<< "\n";

        }


         if (num%2==0)
        {
            cd2++;
   cout<<cd2<<"===>" <<num<< "\n";

        }

 if (num%1==0)
     {
         cn++;
         sn+=num;

     }
          prom= sn/cn;


           }

     cout<<"Promedio es : " <<prom<<"\n";
     cout<<"Numero divisibles entre 5: " << cd5<< "\n";
     cout<<"Numeros Pares: " << cd2<< "\n";
}
