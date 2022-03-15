#include <iostream>
#include <string>
#include<windows.h>
#include <iomanip>


int mainArray01()
{
	setlocale(LC_ALL, "portuguese");
	
	// Em um vetor todos os compartimentos o mesmo tipo de dados
	// Vetor é considerado uma variável composta (vários locais de armazenamento) e homogênea por aceitas apenas um tipo de dado dentro de cada comportimento.
	std::cout << "Vetores são variáveis COMPOSTAS E HOMOGENEAS\n";
	float grades[5]{ 3.0f, 7.5f, 8.0f, 9.0f, 6.3f };
	
	float average, sum { 0.0 };
	std::string name;

	std::cout << "\nInforme o nome do Aluno: ";
	std::cin >> name;

	
	for (int i = 0; i <= 4; i++)
	{
		std::cout << "\nDigite a nota " << (i + 1) << ": ";
		std::cin >>grades[i];
		
		sum = sum + grades[i];
		system("CLS");
	}
	
	average = sum/5;
	std::cout << "\nAs notas informadas foram, respectivamente:";
	for (int i = 0; i<= 4; i++) {
		std::cout <<  std::fixed << std::setprecision(1) << "\nNota" << (i + 1) << ": " << grades[i];
	}
	std::cout << std::fixed << std::setprecision(1) << "\nA Média das notas de " << name << " foi: "  << average << "\n\n";

	system("PAUSE");
	return 0;
}