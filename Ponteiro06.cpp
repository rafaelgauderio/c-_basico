#include <iostream>

int main() {

	setlocale(LC_ALL,"portuguese");

	int number{ 4567 };
	int* pointer = &number;
	//desreferenciando o ponteiro 
	*pointer = 789;
	//novo ponteiro contem o mesmo endereço que pointer armazena
	int* pointer2 = pointer;

	std::cout << "\nValor da variável number: " << *pointer << "\n";
	std::cout << "\nValor do endereço de memória da variável number: " << &number << "\n";

	std::cout << "\nValor do primeiro ponteiro (onde ele aponta): " << *pointer << "\n";
	std::cout << "\nValor do primeiro ponteiro (endereço que ele armazena): " << pointer << "\n";
	std::cout << "\nValor do endereço de memória do primeiro ponteiro: " << &pointer << "\n";

	std::cout << "\nValor do segundo ponteiro (para onde ele aponta), que deve ser IGUAL ao do primeiro: " << *pointer2 << "\n";
	std::cout << "\nValor do segundo ponteiro (endereço que ele armazena), que dever IGUAL ao do primeiro: " << pointer << "\n";
	std::cout << "\nValor do endereço de memória do segundo ponteiro, que deve ser DIFERENTE do primeiro: " << &pointer2 << "\n\n";






	return 0;

}