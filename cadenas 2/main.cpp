#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
/*
Elaborar un programa donde se  ingrese una cadena de texto y luego
usando un procedimiento se sustituyan las vocales por X
*/
char cadena[30];
void cambiarvocales(char cadena[])
{
    int i;
    for (i=0;i<strlen(cadena);i++)
    {
        switch (cadena[i])
        {
        case 'a':
        case 'A':
            case 'e':
                case 'E':
                    case 'i':
                        case 'I':
                            case 'o':
                                case 'O':
                                    case 'u':
                                        case 'U':
                                            cadena[i]='X';
                                            break;
                                        default:
                                            break;
        }
    }


}
int main()
{
    cout << "Ingresar cadena de Texto...:";
    cin.getline(cadena,30);
    cambiarvocales(cadena);
    cout<<"\n"<<cadena<<"\n";
    return 0;
}
