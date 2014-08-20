#include <iostream>

using namespace std;

int main()
{
    cout << "ingrese un numero: " ;
    int num;
    cin>>num;

    while(num>0)
        {

        cout<<num%10;
        num=num/10;
    }


}
