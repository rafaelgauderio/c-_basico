#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	//ent�o para declarar uma vari�vel que seja considerada um ponteiro
	//basta colocar <tipo a ser apontado> *<nome da vari�vel>
	int* ptr;
	int numero = 1712;
	//inicializando o ponteiro com o endere�o da vari�vel n�mero
	ptr = &numero;
	//Aqui vamos colocar na tela o endere�o de mem�ria
	//da vari�vel N�mero. Ou seja onde ela est� carregada na mem�ria RAM.
	//Aparece na tela o primeiro endere�o da vari�vel n�mero
	//&ptr = endere�o de mem�ria de ptr
	//prt = valor dentro da variavel prt, que � um ponteiro
	//*ptr = 0 valor da vari�vel em que o endere�o est� armazenado em ptr;
	// *ptr = O valor da vari�vel apontada por ptr
	// o tipo da vari�vel ponteiro indica para que tipo de vari�vel ele vai apontar
	std::cout << "\nEndere�o de N�mero: " << &numero;
	std::cout << "\nEndere�o de ptr: " << &ptr;
	std::cout << "\nValor do n�mero: " << numero;
	std::cout << "\nValor da vari�vel ponteiro: " << ptr;
	std::cout << "\nValor da vari�vel para onde aponta o ponteiro: " << *ptr;
	numero = 3112;
	std::cout << "\nValor da vari�vel para onde aponta o ponteiro: " << *ptr;
	*ptr = 2525;
	std::cout << "\nValor do n�mero: " << numero;
	std::cout << "\nValor da vari�vel para onde aponta o ponteiro: " << *ptr;
	//mas ambas as vari�veis continuam tendo o mesmo endere�o de mem�ria.
	std::cout << "\nEndere�o de N�mero: " << &numero;
	std::cout << "\nEndere�o de ptr: " << &ptr << "\n";

	system("PAUSE");
	return 0;
}