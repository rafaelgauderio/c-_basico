#include <iostream>
#include <locale>
#include <windows.h>
#include <iomanip>

/*Exercício Soma De 5 Números */

int main()
{
	setlocale(LC_ALL, "portuguese");

	double vector[10];
	double sum = 0.0 ;
	vector[0]=3.0f;
	vector[1]=3.8f;
	vector[2]=9.2f;
	vector[3]=4.0f;
	vector[4]=7.6f;
	vector[5]=4.9f;
	vector[6]=8.6;
	vector[7]=6.7;
	vector[8]=5.4f;
	vector[9]=9.6f;

	for (int i = 0; i < 10; i++)

	{
        std::cout << "notas" << (i+1) << ": " << std::fixed << std::setprecision(2) << vector[i] << "\n";
		sum = sum + vector[i];
	}
	system("PAUSE");
	system("Clear || CLS");
	std::cout << "\n A Soma dos Números é: " << std::fixed << std::setprecision(2) << sum << "\n\n";
	system("PAUSE");
	system("Clear || CLS");
	return 0;
}
