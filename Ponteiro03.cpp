#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	//então para declarar uma variável que seja considerada um ponteiro
	//basta colocar <tipo a ser apontado> *<nome da variável>
	int* ptr;
	int numero = 1712;
	//inicializando o ponteiro com o endereço da variável número
	ptr = &numero;
	//Aqui vamos colocar na tela o endereço de memória
	//da variável Número. Ou seja onde ela está carregada na memória RAM.
	//Aparece na tela o primeiro endereço da variável número
	//&ptr = endereço de memória de ptr
	//prt = valor dentro da variavel prt, que é um ponteiro
	//*ptr = 0 valor da variável em que o endereço está armazenado em ptr;
	// *ptr = O valor da variável apontada por ptr
	// o tipo da variável ponteiro indica para que tipo de variável ele vai apontar
	std::cout << "\nEndereço de Número: " << &numero;
	std::cout << "\nEndereço de ptr: " << &ptr;
	std::cout << "\nValor do número: " << numero;
	std::cout << "\nValor da variável ponteiro: " << ptr;
	std::cout << "\nValor da variável para onde aponta o ponteiro: " << *ptr;
	numero = 3112;
	std::cout << "\nValor da variável para onde aponta o ponteiro: " << *ptr;
	*ptr = 2525;
	std::cout << "\nValor do número: " << numero;
	std::cout << "\nValor da variável para onde aponta o ponteiro: " << *ptr;
	//mas ambas as variáveis continuam tendo o mesmo endereço de memória.
	std::cout << "\nEndereço de Número: " << &numero;
	std::cout << "\nEndereço de ptr: " << &ptr << "\n";

	system("PAUSE");
	return 0;
}