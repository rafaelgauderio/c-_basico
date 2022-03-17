#include <iostream>
#include <locale.h>
#include <windows.h>





void DuplicateVector(int* Array, int Size);
void ThirdVector(int* Array, int Size);
int* ReverseVector(int* Array, int Size); //além de receber um ponteiro, retorna um ponteiro
void DisplayVector(int* Array, int Size);

int mainArray06()
{
	setlocale(LC_ALL, "PORTUGUESE");

	int VectorNumbers[] = { 2,4,7,11,16,19,21,25,29,35 };
	int VectorNumbers3[] = {3,9,15,18,24,30,36,45,57,66 };
	int Size = sizeof(VectorNumbers) / sizeof(int);
	
	std::cout << "\nImprimindo vetor\n";
	DisplayVector(VectorNumbers, Size);
	DuplicateVector(VectorNumbers, Size);
	std::cout << "\nImprimindo vetor após DUPLICAR\n";
	DisplayVector(VectorNumbers, Size); //agora vai imprimir o vetor duplicato
	std::cout << "\nImprimindo vetor após INVERTER\n";
	DisplayVector(ReverseVector(VectorNumbers, Size), Size); //Agora já joga a função como argumento
	std::cout << "\nImprimindo vetor após DIVIDIR POR TRÊS\n";
	ThirdVector(VectorNumbers3, Size);
	DisplayVector(VectorNumbers3, Size);
	std::cout << "\nImprimindo vetor após INVERTIDO usando primeiro endereço de memória\n";
	DisplayVector(ReverseVector(&VectorNumbers3[0], Size), Size);
	
	system("PAUSE");
	return 0;
}

void DuplicateVector(int* VectorNumbers, int Size)
{
	
	for (int i = 0; i < Size; i++)
	{
		//VectorNumbers[i] = 2 * VectorNumbers[i];
		//Pode operar usando ponteiros
		// VectorNumbers[i] = *(VetorNumbers +i)
		*(VectorNumbers + i) = 2 * *(VectorNumbers + i);
	}
}

void ThirdVector(int* VectorNumbers, int Size)
{
	
	for (int i = 0; i < Size; i++)
	{
		VectorNumbers[i] = VectorNumbers[i] / 3;
		
	}
	
}



int* ReverseVector(int* VectorNumbers, int Size)
{
	
	int j = 0;
	static int ReverseArray[10];	
	for (int i = Size - 1; i >= 0; i--)
	{
		ReverseArray[j] = VectorNumbers[i];		
		j++;
	}
	
	return ReverseArray;
}


void DisplayVector(int* VectorNumbers, int Size)

{
	
	std::cout << "[ ";
	
	for (int i = 0; i < Size; i++)
	{
		std::cout << VectorNumbers[i] << "  ";
	}
	
	std::cout << "] \n\n";
}