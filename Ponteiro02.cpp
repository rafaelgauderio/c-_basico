#include <iostream>

int main2() {

	setlocale(LC_ALL, "portuguese");

	int numero{ 1712 };
	//int* ponteiro;
	//inicializando como null
	int* ponteiro{ nullptr };
	ponteiro = &numero;
	// int *ponteiro=&numero; declarando em apenas uma linha

	std::cout << "\nValor da Variavel núumero: " << numero << "\n";
	std::cout << "\nValor da Variavel ponteiro: " << ponteiro << "\n";
	std::cout << "\nValor do Endereço de número: " << &numero << "\n";
	std::cout << "\nValor do Endereço que ponteiro está carregado na memória RAM: " << &ponteiro << "\n";
	std::cout << "\nValor contido na variavel apontada por ptr: " << *ponteiro << "\n";
	//da pra mudar o valor da variável número pelo ponteiro ou atribundo direto para ela;
	//é possível
	//desreferenciamento de ponteiro = atribur um para onde o ponteiro aponta.
	*ponteiro = 01012022;
	std::cout << "\nValor contido na variavel apontada ponteiro: " << *ponteiro << "\n";

	system("PAUSE");
	return 0;

}
