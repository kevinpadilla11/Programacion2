#include <iostream>

using namespace std;
int const l=4;
int const c=4;
char arreglo[l][c];
int lin,col;
void pedirmarca(int &lin, int &col)
{
    do
    {
        cout<<"Ingresar la linea..:";
        cin>>lin;
    }
    while (!((lin>=1)and (lin<=3)));
    do
    {
        cout<<"Ingrese la columna..:";
        cin>>col;
    }while (!((col>=1)and (col<=3)));
    lin=lin-1;
    col=col-1;
}
int validar (char arreglo[][c],int lin,int col)
{
    if ((arreglo[lin][col]=='X') or (arreglo[lin][col]=='0'))
        return 1;
    else return 0;
}
void presentar(char arreglo[][c], int l, int c)
{
    int lin,col;
    for (lin=0;lin<l;lin++)
    {
        cout<<arreglo[lin][col]<<" ";
    }
    cout<<"\n";
}
void ingresarmarca (char arreglo[][c],int lin,int col)
{do
{
    cout<<"Pedir Marca X...";
    pedirmarca(lin,col);
}
    while (validar (arreglo,lin,col)==1);
    if (validar (arreglo,lin,col)==0)
        arreglo[lin][col]='X';
        do
            {
    cout<<"Pedir Marca 0...";
    pedirmarca(lin,col);
}
    while (validar (arreglo,lin,col)==1);
    if (validar (arreglo,lin,col)==0)
        arreglo[lin][col]='X';
}
void iniciar (char arreglo[][c], int l,int c)
{
    int lin,col;
    for(lin=0;lin<l;lin++)
    {
        arreglo[lin][col]='*';
    }
}
int ganador (char arreglo[][c], int l,int c);

int main()
{

    iniciar (arreglo,l,c);
    int conta=0;
    do
    {


    ingresarmarca(arreglo,lin,col);
    presentar(arreglo,l,c);
    conta++;
    }
while (conta<4);
}
