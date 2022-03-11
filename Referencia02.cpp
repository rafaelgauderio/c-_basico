#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "portuguese");

	cout << "\nPonteiro: armazena um endereço de memória dentro dele. Ponteiro é um tipo de variável." << "\n";
	cout << "\nPondeiro pode ser reatribuido um novo valor, colocar um novo endereço de memória, fazer ele apontar para outra variável." << "\n";
	cout << "\nReferência: apenas um alias, apelido, rótulo que se refere a outra variáel. Referência não é uma variável." << "\n";
	cout << "\nReferêcia pode ser atribuida uma única vez. Não pode ficar sem ser inicializada. \n" << endl;

	int number { 4530 };
	int number02{ 2048 };
	int &reference {number02};
	int* pointer = &number;

	cout << "Valor de number: " << number << endl;
	cout << "Valor de number02: " << number02 << endl;
	cout << "Valor do ponteiro: " << *pointer << endl;
	cout << "Valor da referência (alias de number02): " << reference << endl;

	//alterando variavel ponteiro e atribundo um novo valor a number02 pela referência
	*pointer = 2030;
	cout << "Valor do ponteiro alterado: " << *pointer << endl;
	pointer = &number02;
	cout << "Valor do ponteiro alterado: " << *pointer << endl;
	*pointer = number + 70;
	cout << "Valor do ponteiro alterado: " << *pointer << endl;
	reference = 4321;
	cout << "Valor da number02 alterado via referência: " << number02 << endl;

	system("PAUSE");
	return 0;
}







