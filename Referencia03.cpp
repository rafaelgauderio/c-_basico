#include <iostream>
#include <windows.h>

void changeNumber(int number1, int number2);

int main()
{
	setlocale(LC_ALL, "portuguese");
	int number1, number2;
	std::cout << "\nInforme o primeiro n�mero: ";
	std::cin >> number1;
	std::cout << "\nInforme o Segundo n�mero: ";
	std::cin >> number2;
	std::cout << "\nValores antes da troca";
	std::cout << "\nnumber1 = " << number1;
	std::cout << "\nnumber2 = " << number2;
	std::cout << "\nEndere�o number1 na fun��o main = " << &number1;
	std::cout << "\nEndere�o number2 na fun��o main = " << &number2;

	// n�o vai funcionar a troca do n�meros
	//Mesmo sendo mesmo nome, s�o vari�veis diferente e com endere�os de mem�ria diferentes
    changeNumber(number1, number2);
    std::cout << "\nValores depois da troca";
	std::cout << "\nnumber1 = " << number1;
	std::cout << "\nnumber2 = " << number2 <<"\n\n";

    system("pause");
	return 0;
}


    void changeNumber(int number1, int number2)
{
	//number1 e number 2 s�o variaveis locais
	// tem endere�os de mem�ria diferentes das variaveis number1 e number2 da fun��o main
	std::cout << "\n\nValores dentro da fun��o changeNumber";
	std::cout << "\nEndere�o number1 Fun��o = " << &number1;
	std::cout << "\nEndere�o number2 Fun��o = " << &number2;
	int temp= number1;
	number1=number2;
	number2=temp;
	std::cout << "\nNumber1 Fun��o = " << number1;
	std::cout << "\nNumber2 Fun��o = " << number2;
	std::cout << "\nAqui dentro da fun��o changeNumber vai funcionar a troca\n";

	}
