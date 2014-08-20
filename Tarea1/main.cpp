#include <iostream>

using namespace std;

int main()
{ int a,m,d;

    cout << "ingrese el Año...:" ;
    cin >> a;
    cout << "ingrese el Mes...:"  ;
    cin >> m;
    cout << "ingrese el Dia ...:" ;
    cin >> d;

    if ((a>0) and ((m<=1) or (m<=12)))

    cout << "Fecha Valida";
    else
        cout << "Fecha inValida";

         if ((m==1)and ((d>1) or (d<=31)))
        cout << "Fecha Valida" ;
         else
        cout << "Fecha Invalida" ;

        if ((m==2)and ((d>1) or (d<=28)))
        cout << "Fecha Valida" ;
    else
        cout << "Fecha Invalida" ;
        if ((m==3)and ((d>1) or (d<=31)))
        cout << "Fecha Valida" ;
    else
        cout << "Fecha Invalida" ;
        if ((m==4)and ((d>1) or (d<=30)))
        cout << "Fecha Valida" ;
    else
        cout << "Fecha Invalida" ;
        if ((m==5)and ((d>1) or (d<=31)))
        cout << "Fecha Valida" ;
    else
        cout << "Fecha Invalida" ;
        if ((m==6)and ((d>1) or (d<=30)))
        cout << "Fecha Valida" ;
    else
        cout << "Fecha Invalida" ;
        if ((m==7)and ((d>1) or (d<=31)))
        cout << "Fecha Valida" ;
    else
        cout << "Fecha Invalida" ;
        if ((m==8)and ((d>1) or (d<=31)))
        cout << "Fecha Valida" ;
    else
        cout << "Fecha Invalida" ;
        if ((m==9)and ((d>1) or (d<=30)))
        cout << "Fecha Valida" ;
    else
        cout << "Fecha Invalida" ;
        if ((m==10)and ((d>1) or (d<=31)))
        cout << "Fecha Valida" ;
    else
        cout << "Fecha Invalida" ;
        if ((m==11)and ((d>1) or (d<=30)))
        cout << "Fecha Valida" ;
    else
        cout << "Fecha Invalida" ;
        if ((m==12)and ((d>1) or (d<=31)))
        cout << "Fecha Valida" ;
    else
        cout << "Fecha Invalida" ;
}
