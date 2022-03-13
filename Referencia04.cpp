#include <iostream>
#include <windows.h>

void changeNumber(int &outro1, int &outro2);

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

	//usando referências vai funcionar a função changeNu,ber
    changeNumber(number1,number2);
    std::cout << "\nValores depois da troca";
	std::cout << "\nnumber1 = " << number1;
	std::cout << "\nnumber2 = " << number2 <<"\n";
	std::cout << "Usando passagem por referência funciona a troca" << "\n\n";

    system("pause");
	return 0;
}


    void changeNumber(int &outro1, int &outro2)
{
	//number1 e number2 são copias do valor de number1 e number2 da função main
	std::cout << "\n\nValores dentro da função changeNumber";
	std::cout << "\nEndereço outro1 Função changeNumber (mesmo da main)= " << &outro1;
	std::cout << "\nEndereço outro2 Função changeNumber (mesmo da main)= " << &outro2;
	int temp= outro1;
	outro1=outro2;
	outro2=temp;
	std::cout << "\noutro1 Função = " << outro1;
	std::cout << "\noutro2 Função = " << outro2;
	std::cout << "\nAqui dentro da função changeNumber vai funcionar a troca";
	std::cout << "\nApensar de eu colocar nomes diferentes aqui nas variáveis, a função pede como argumentos referências a variáveis.";
	std::cout << "\nLogo vão ter o mesmo número de endereço de memória e apontam para o mesmo valor.\n";

	}

