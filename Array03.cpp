#include <iostream>
#include <locale.h>
#include <windows.h>


int main()
{
    setlocale(LC_ALL, "portuguese");
	setlocale(LC_ALL, "portuguese");
	int elementos;
	int minimo, maximo;
	int vetor[20];

	std::cout << "Digite O número de elementos desejado: ";
	std::cin >> elementos;



	for (int i = 0; i < elementos; i++)
	{
		//primeiro vamos receber o vetor, a entrada de dados
		std::cout << "Digite o Elemento" << (i + 1) << ": ";
		std::cin >> vetor[i];
		system("CLS");
	}
    //inicializa com o valor do vetor no índice zero
	minimo = vetor[0];
	maximo = vetor[0];

	for (int i = 0; i < elementos; i++)
	{
		if (vetor[i] > maximo)
			maximo = vetor[i];
		else if (vetor[i] < minimo)
			minimo = vetor[i];
	}

    std::cout << "\nOs valores informados foram";
	for(int i=0 ; i < elementos ; i++) {
        std::cout << "\n" << vetor[i];
	}
	std::cout << "\nO Menor Valor informado foi: " << minimo << "\n";
	std::cout << "\nO Maior Valor informado foi: " << maximo << "\n";

	system("PAUSE");
	return 0;
}

