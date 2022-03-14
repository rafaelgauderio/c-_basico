#include <iostream>
#include <locale.h>
#include <windows.h>
#include <array>

using namespace std;

void PrintVector2(int Vector[], int Size);

int main()
{

    //não precisa informar o tamanho do vetor se informar os elementos
	int Vector[] = { 1, 9, 12, 17, 22, 29, 33 ,41, 57, 99 };
    //4bytes por int neste vetor e são 10 elementos =o vetor terá 40bytes
    int SizeOfVector = sizeof(Vector)/sizeof(int);
    int SizeVector = std::size(Vector);

    std::cout << "\nTamanho de um float " << sizeof(float);
	std::cout << "\nTamanho de um double " << sizeof(double);
	std::cout << "\nTamanho de um int " << sizeof(int);
	std::cout << "\nTamanho de um char " << sizeof(char);
	std::cout << "\nTamanho de um boolean " << sizeof(bool);
	std::cout << "\nTamanho do vetor em bytes " << sizeof(Vector);
	std::cout << "\nTamanho do vetor em elementos " << sizeof(Vector)/sizeof(int);
	//A partir da Versão C++ 17 pode usar std::size
	std::cout << "\nTamanho do vetor em elementos usando std::size " << SizeVector << endl;

    std::cout << "\n\nImprimindo o vetor de tamanho 10";
	PrintVector2(Vector,SizeOfVector);
	system("PAUSE");
	return 0;
}


void PrintVector2(int Vector[], int Size)
{
	for (int i = 0; i < Size; i++)
	{
		std::cout << " - " << Vector[i] << " - ";
	}
	std::cout << "\n\n";
}


