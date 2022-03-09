#include <iostream>

int main() {

	setlocale(LC_ALL, "portuguese");
	//Atribuindo um ponteiro para outro ponteiro	
	int numero{ 2500 };
	int* ponteiro1;
	int* ponteiro2;
	ponteiro1 = &numero;
	//o segundo ponteiro a aponta para o primeiro 
	ponteiro2 = ponteiro1;
	std::cout << "\nEndere�o contido dentro de ponteiro1: " << ponteiro1 << "\n";
	std::cout << "\nEndere�o contido dentro de ponteiro2: " << ponteiro2 << "\n";
	std::cout << "\nEndere�o de ponteiro1 na mem�ria RAM: " << &ponteiro1 << "\n";
	std::cout << "\nEndere�o de ponteiro2 na mem�ria RAM: " << &ponteiro2 << "\n";
	std::cout << "\nValor de Numero : " << numero << "\n";
	*ponteiro1 = *ponteiro2 + 501;
	std::cout << "\nValor de Numero depois de adicinar 501: " << numero << "\n";

	



	system("PAUSE");
	return 0;

}
