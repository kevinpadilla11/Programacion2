#include <iostream>

using namespace std;
/* Ingresar un numero y determinar cuantas cigras tiene,
evaluar hasta cuatro cifras y luego decir tiene mas de 4 cifras.
no tiene que importar el signo se evaluara el valor absoluto.


*/
int main()
{
    int n;
    cout << "Ingresar numero" ;
    cin >> n;

  if (n<=0)
    n=n*(-1);
  cout << ""<<n<< "\n";
   if ((n>=1) && (n<=9))
    cout << "Una Cifra" "\n" ;
   else if ((n>=10) && (n<=99))
   cout << "Dos Cifras" "\n" ;
   else if ((n>=100) && (n<=999))
   cout << "Tres Cifras" "\n" ;
   else if ((n>=1000) && (n<9999))
   cout << "Cuatro Cifras" "\n";
   else
    cout << "Cuatro Cifras""\n" ;


}
