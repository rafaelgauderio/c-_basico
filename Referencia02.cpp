#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "portuguese");

	cout << "\nPonteiro: armazena um endere�o de mem�ria dentro dele. Ponteiro � um tipo de vari�vel." << "\n";
	cout << "\nPondeiro pode ser reatribuido um novo valor, colocar um novo endere�o de mem�ria, fazer ele apontar para outra vari�vel." << "\n";
	cout << "\nRefer�ncia: apenas um alias, apelido, r�tulo que se refere a outra vari�el. Refer�ncia n�o � uma vari�vel." << "\n";
	cout << "\nRefer�cia pode ser atribuida uma �nica vez. N�o pode ficar sem ser inicializada. \n" << endl;

	int number { 4530 };
	int number02{ 2048 };
	int &reference {number02};
	int* pointer = &number;

	cout << "Valor de number: " << number << endl;
	cout << "Valor de number02: " << number02 << endl;
	cout << "Valor do ponteiro: " << *pointer << endl;
	cout << "Valor da refer�ncia (alias de number02): " << reference << endl;

	//alterando variavel ponteiro e atribundo um novo valor a number02 pela refer�ncia
	*pointer = 2030;
	cout << "Valor do ponteiro alterado: " << *pointer << endl;
	pointer = &number02;
	cout << "Valor do ponteiro alterado: " << *pointer << endl;
	*pointer = number + 70;
	cout << "Valor do ponteiro alterado: " << *pointer << endl;
	reference = 4321;
	cout << "Valor da number02 alterado via refer�ncia: " << number02 << endl;

	system("PAUSE");
	return 0;
}







