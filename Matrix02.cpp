#include <iostream>
#include <string>

int mainMatrix02()
{
	int Numeros[]{ 10,20,30,40,50 };

	//for (tipo_variavael nickname : vetor_imprimir)
	for (auto apelido : Numeros)
	{
		std::cout << apelido << std::endl;
	}
	
	std::cout << "\n";

	std::string Names[]{ "Rafael", "Juliana", "Mario", "Luciana" , "Mario" };

	for (std::string nickname : Names) {
		std::cout << "[" << nickname << "], ";
	}
	std::cout << "\n\n";
	system("PAUSE");
	std::cout << "\n\n";
	return 0;

}