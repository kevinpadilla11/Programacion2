#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
srand((unsigned)time(NULL));
int num, n;
cout<<"Escoge numero"<<endl;
cin>> num;
n=rand()%6+1;
cout<<"El numero es "<<n<<endl;
system("PAUSE");
return EXIT_SUCCESS;
}
