#include <iostream>
#include <locale.h>
#include <windows.h>

void PrintVector(int Array[], int Size);

int main()
{

    //não precisa informar o tamanho do vetor se informar os elementos
	int Vector[] = { 1, 9, 12, 17, 22, 29, 33 ,41, 57, 99 };

	PrintVector(Vector, 10);
	system("PAUSE");
	return 0;
}


void PrintVector(int Vector[], int Size)
{
	for (int i = 0; i < Size; i++)
	{
		std::cout << "- " << Vector[i] << " - ";
	}
	std::cout << "\n\n";
}

