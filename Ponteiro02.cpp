#include <iostream>

int main2() {

	setlocale(LC_ALL, "portuguese");

	int numero{ 1712 };
	//int* ponteiro;
	//inicializando como null
	int* ponteiro{ nullptr };
	ponteiro = &numero;
	// int *ponteiro=&numero; declarando em apenas uma linha

	std::cout << "\nValor da Variavel n�umero: " << numero << "\n";
	std::cout << "\nValor da Variavel ponteiro: " << ponteiro << "\n";
	std::cout << "\nValor do Endere�o de n�mero: " << &numero << "\n";
	std::cout << "\nValor do Endere�o que ponteiro est� carregado na mem�ria RAM: " << &ponteiro << "\n";
	std::cout << "\nValor contido na variavel apontada por ptr: " << *ponteiro << "\n";
	//da pra mudar o valor da vari�vel n�mero pelo ponteiro ou atribundo direto para ela;
	//� poss�vel
	//desreferenciamento de ponteiro = atribur um para onde o ponteiro aponta.
	*ponteiro = 01012022;
	std::cout << "\nValor contido na variavel apontada ponteiro: " << *ponteiro << "\n";

	system("PAUSE");
	return 0;

}
