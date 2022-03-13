#include <iostream>
#include <windows.h>

void changeNumber(int number1, int number2);

int main()
{
	setlocale(LC_ALL, "portuguese");
	int number1, number2;
	std::cout << "\nInforme o primeiro número: ";
	std::cin >> number1;
	std::cout << "\nInforme o Segundo número: ";
	std::cin >> number2;
	std::cout << "\nValores antes da troca";
	std::cout << "\nnumber1 = " << number1;
	std::cout << "\nnumber2 = " << number2;
	std::cout << "\nEndereço number1 na função main = " << &number1;
	std::cout << "\nEndereço number2 na função main = " << &number2;

	// não vai funcionar a troca do números
	//Mesmo sendo mesmo nome, são variáveis diferente e com endereços de memória diferentes
    changeNumber(number1, number2);
    std::cout << "\nValores depois da troca";
	std::cout << "\nnumber1 = " << number1;
	std::cout << "\nnumber2 = " << number2 <<"\n\n";

    system("pause");
	return 0;
}


    void changeNumber(int number1, int number2)
{
	//number1 e number 2 são variaveis locais
	// tem endereços de memória diferentes das variaveis number1 e number2 da função main
	std::cout << "\n\nValores dentro da função changeNumber";
	std::cout << "\nEndereço number1 Função = " << &number1;
	std::cout << "\nEndereço number2 Função = " << &number2;
	int temp= number1;
	number1=number2;
	number2=temp;
	std::cout << "\nNumber1 Função = " << number1;
	std::cout << "\nNumber2 Função = " << number2;
	std::cout << "\nAqui dentro da função changeNumber vai funcionar a troca\n";

	}
