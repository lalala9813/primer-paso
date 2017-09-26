#include <iostream>
#include <stdlib.h>

using namespace std;

int **matrizA,**matrizB,**matrizC,nFilasA,nColA,nFilasB,nColB,**pm=matrizC,p=0;

void pedir()
{
    cout << "Datos de tu primera matriz\n\n";
    //************************************************************************************
    cout << "Dame el numero de FilasA -> ";
    cin >> nFilasA;
    cout << "Dame el numero de ColumnasA -> ";
    cin >> nColA;
    //************************************************************************************
    cout << "\nDatos de tu segunda matriz\n\n";
    //************************************************************************************
    cout << "Dame el numero de FilasB -> ";
    cin >> nFilasB;
    cout << "Dame el numero de columnasB -> ";
    cin >> nColB;
    //************************************************************************************
    matrizA = new int*[nFilasA];
    for(int i=0;i<nFilasA;i++)
    {
        matrizA[i]=new int[nColA];
    }
    //************************************************************************************
    matrizB = new int*[nFilasB];
    for(int i=0;i<nFilasB;i++)
    {
        matrizB[i]=new int[nColB];
    }
    //************************************************************************************
    matrizC = new int*[nColA];
    for(int i=0;i<nColA;i++)
    {
        matrizC[i] = new int[nFilasB];
    }
    //************************************************************************************
    cout << "\n";
    //************************************************************************************
    for(int i=0;i<nFilasA;i++)
    {
        for(int j=0;j<nColA;j++)
        {
            cout << "Dame mis numeros["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matrizA+i)+j);

        }
    }
    cout << "\n";
    //************************************************************************************

    for(int i=0;i<nFilasB;i++)
    {
        for(int j=0;j<nColB;j++)
        {
            cout << "Dame mis numeros["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matrizB+i)+j);

        }
    }
}

void imprimir(int **matrizA,int nFilasA,int nColA,int **matrizB,int nFilasB,int nColB)
{
    //************************************************************************************
    cout << "\nTu primera Matriz\n";
    for(int i=0;i<nFilasA;i++)
    {
        for(int j=0;j<nColA;j++)
        {
            cout << *(*(matrizA+i)+j)<<" ";
        }
        cout << "\n";
    }
    cout << "\n";
    //************************************************************************************
    cout << "\nTu segunda Matriz\n";
    for(int i=0;i<nFilasB;i++)
    {
        for(int j=0;j<nColB;j++)
        {
            cout << *(*(matrizB+i)+j)<<" ";
        }
        cout << "\n";
    }
    //************************************************************************************
}
/*-----------------------------------------------------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------------------------------------------------------*/

int main()
{

    pedir();
    imprimir(matrizA,nFilasA,nColA,matrizB,nFilasB,nColB);

    for(int i=0;i<nFilasA;i++)
    {
        delete[] matrizA[i];
    }
    delete[] matrizA;

    for(int i=0;i<nFilasB;i++)
    {
        delete[] matrizB[i];
    }
    delete[] matrizB;

    return 0;
}
