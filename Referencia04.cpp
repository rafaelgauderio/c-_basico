#include <iostream>
#include <windows.h>

void changeNumber(int &outro1, int &outro2);

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

	//usando refer�ncias vai funcionar a fun��o changeNu,ber
    changeNumber(number1,number2);
    std::cout << "\nValores depois da troca";
	std::cout << "\nnumber1 = " << number1;
	std::cout << "\nnumber2 = " << number2 <<"\n";
	std::cout << "Usando passagem por refer�ncia funciona a troca" << "\n\n";

    system("pause");
	return 0;
}


    void changeNumber(int &outro1, int &outro2)
{
	//number1 e number2 s�o copias do valor de number1 e number2 da fun��o main
	std::cout << "\n\nValores dentro da fun��o changeNumber";
	std::cout << "\nEndere�o outro1 Fun��o changeNumber (mesmo da main)= " << &outro1;
	std::cout << "\nEndere�o outro2 Fun��o changeNumber (mesmo da main)= " << &outro2;
	int temp= outro1;
	outro1=outro2;
	outro2=temp;
	std::cout << "\noutro1 Fun��o = " << outro1;
	std::cout << "\noutro2 Fun��o = " << outro2;
	std::cout << "\nAqui dentro da fun��o changeNumber vai funcionar a troca";
	std::cout << "\nApensar de eu colocar nomes diferentes aqui nas vari�veis, a fun��o pede como argumentos refer�ncias a vari�veis.";
	std::cout << "\nLogo v�o ter o mesmo n�mero de endere�o de mem�ria e apontam para o mesmo valor.\n";

	}

