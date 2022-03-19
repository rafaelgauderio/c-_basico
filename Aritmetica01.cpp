#include <iostream>
#include <locale.h>
#include <windows.h>
#include <array>

using namespace std;

void printVector(int Array[] , int Size);
void changeVector(int Array[] , int Size);

int mainAritmetica01()
{
    setlocale(LC_ALL,"Portuguese");

    int Vector[] = {1,3,7,9,15,18,25,27,30};

    int Size = sizeof(Vector)/sizeof(int);

    cout << "\nTamanho do Vetor: " << Size <<endl;
     cout << "\nVetor ORIGINAL\n";
    printVector(Vector,Size);
    //vai alterar o vetor original mesmo não tendo passado os parametros por referência ou ponteiros
    //Vector = &Vector[0]
    changeVector(Vector,Size);
    cout << "\nVetor ALTERADO\n";
    printVector(Vector,Size);


    cout << "\n\n" << endl;

    system("PAUSE");
    return 0;
}

void printVector(int Array[], int Size) {

        cout << "Elementos do vetor: ";
        for (int i=0; i< Size ; i++) {

            cout << "[" << Array[i] << "] ";

        }

}

void changeVector(int Array[], int Size) {

        for (int i=0; i< Size ; i++) {

          Array[i] = Array[i] * 3;

        }

}

