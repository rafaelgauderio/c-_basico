#include <iostream>
#include <locale.h>
#include <windows.h>
#include <iomanip>

using namespace std;

void printVector(double Array[] , int Size);
void changeVector(double Array[] , int Size);

int mainAritmetica02()
{
    setlocale(LC_ALL,"Portuguese");

    double Vector[] = {1.2,3.6,4.5,8.7,17.4,22.3,24.5,30.5,40.6,48.8};

    int Size = sizeof(Vector)/sizeof(double);

    cout << "\nTamanho do Vetor: " << Size <<endl;
     cout << "\nVetor ORIGINAL\n";
    printVector(&Vector[0],Size);
    //vai alterar o vetor original mesmo não tendo passado os parametros por referência ou ponteiros
    //Vector = &Vector[0]
    //O NOME DE UM VETOR EM C E C++ É O MESMO QUE &Vector[0]
	//Nomo do vetor é o mesmo que o endereço de memória do primeiro elemento do vetor!
    changeVector(&Vector[0],Size);
    cout << "\nVetor ALTERADO\n";
    printVector(&Vector[0],Size);


    cout << "\n\n" << endl;

    system("PAUSE");
    return 0;
}

//Se lá em cima definir como referência de memória, aqui em baixo tem que usar ponteiros
//double Array[] = ponteiro
//logo, double Array[] == double *Array
void printVector(double *Array, int Size) {

        cout << "Elementos do vetor: ";
        for (int i=0; i< Size ; i++) {
        // Outra mandeira de escrever Array[i] = *(Array + 1)
            cout << "[" << std::fixed << setprecision(2)<< Array[i] << "] ";

        }

}

void changeVector(double *Array, int Size) {

        for (int i=0; i< Size ; i++) {
           //Array[i] = *(Array + 1)
           //alterando original por fator 2.5
          *(Array+i) = (*(Array+i))*2.5 ;

        }

}


