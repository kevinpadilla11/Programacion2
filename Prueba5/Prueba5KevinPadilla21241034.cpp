#include <iostream>
/*
Elaborar un programa donde ingresemos datos en un arreglo bidimensional
de 4 lineas y 5 columnas y dejemos la ultima linea reservada para
sumar los numeros pares.
si no hay pares debera de aparecer 0.
*/
using namespace std;
int const lin=4;
int const col=6;
int bidi[lin][col];
int linsuma,sumal;


void ingreso(int bidi[][col],int lin,int col)
{
    int l,c;
    for (l=0;l<lin;l++)
    {
        for(c=0;c<col;c++)
        {
            cout<<"Ingresar Numero["<<l<<","<<c<<"]..:";
            cin>>bidi[l][c];
        }
    }
}
void presentar(int bidi[][col],int lin,int col)
{   int l,c;
    for (l=0;l<lin;l++)
    {
        for(c=0;c<col;c++)
        {
            cout<<bidi[l][c]<<" ";
        }
        cout<<"\n";
    }

}
int sumarfila(int bidi[][col],int col,int linsuma)
{    int c,xsuma=0;
     for(c=0;c<col;c++)
        {
         for(int l=0; l<6; l++)
            {
            if(l!=5){
            if(bidi[c][l]%2==0)
                xsuma+=bidi[c][l];

            }else{
                bidi[c][l]=xsuma;
            }
        }
        }
     return xsuma;

}
int main()
{
    ingreso(bidi,lin,col);

    sumal=sumarfila(bidi,col,linsuma-1);
cout<<"Sumatoria de #pares de filas..:"<<sumal<<"\n";
presentar(bidi,lin,col);
}
