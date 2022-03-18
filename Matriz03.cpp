#include <iostream>
#include <iomanip>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int Years[] {1981,1987,1993,1985,1987,1996};
	double SumYears {0};
	int SizeVector{ 0 };
	

	std::cout << "\n\n";
	for (auto Nickname : Years)
	{
		std::cout << Nickname << "\n";
		SumYears = SumYears + Nickname;
		SizeVector++;

	}

	double AverageYears = SumYears / SizeVector;

	std::cout << "\n\n";

	std::cout << "A m�dia dos anos de nascimento (2 casas decimais) � " << std::fixed << std::setprecision(2) << AverageYears << " anos \n";
	std::cout << "A m�dia dos anos de nascimento (nota��o cientifica, 6 casas) � " << std::scientific << std::setprecision(6) << AverageYears << " anos \n";
	std::cout << "A m�dia dos anos de nascimento (5 digitos significativos) � " << std::defaultfloat << std::setprecision(5) << AverageYears << " anos \n\n";



	system("PAUSE");
	return 0;
}