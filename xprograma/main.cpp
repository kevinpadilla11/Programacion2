#include <iostream>
#include <string>
using namespace std;

int main() {
    int c2;
    string str = "Hola mundo como estas";
    cout<<"Ingrese.:";
    cin>> c2 ;
    char c = c2;
    string reemplazo = "x";

    for (int i = 0; i < (int)str.length(); ++i)
        {
        if(str[i]==c)
        {
            str.replace(i,1,reemplazo);
        }
    }

    cout << str << endl;
    return 0;
}
