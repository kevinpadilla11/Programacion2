#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*
presentar 10 numeros usando el ciclo for
*/
int main()
{

srand(time(0));//generar una semilla
int  i ;
for (i=10; i>=1;i--) // for inicializar variable;condicion;incremento

  cout<< i<< "\n";


}
