
#include <iostream>
#include <locale.h>
#include <windows.h>

using namespace std;

int mainArtitmetica03()
{

    setlocale(LC_ALL,"Portuguese");

	int Vector[] = { 8, 17, -40, 250, 13695, 7 ,33 };
	int *pointer;
	//Endere�o de uma vari�vel � o primeiro endere�o da mesma
	pointer = &Vector[0];
	//pointer = Vetor;

	for (int i = 0; i < sizeof(Vector)/sizeof(int); i++)
	{
		std::cout << "Vetor[" << i << "] Endere�o na Mem�ria: " << &Vector[i] << " Valor: " << Vector[i] << "\n";
	}
	std::cout << "\n*** Enderecos Com Aritmetica de Ponteiros***\n";
	std::cout << "Valor Contido em ptr: " << pointer << " e o valor que ele aponta: " << *pointer << "\n";
	std::cout << "(pointer + 0) ENDERE�O DE MEM�RIA: " << (pointer + 0) << " Valor: " << *(pointer + 0) << "\n";
	std::cout << "(pointer + 1) ENDERE�O DE MEM�RIA: " << (pointer + 1) << " Valor: " << *(pointer + 1) << "\n";
	std::cout << "(pointer + 2) ENDERE�O DE MEM�RIA: " << (pointer + 2) << " Valor: " << *(pointer + 2) << "\n";
	std::cout << "(pointer + 3) ENDERE�O DE MEM�RIA: " << (pointer + 3) << " Valor: " << *(pointer + 3) << "\n";
	std::cout << "(pointer + 4) ENDERE�O DE MEM�RIA: " << (pointer + 4) << " Valor: " << *(pointer + 4) << "\n";
	std::cout << "(pointer + 5) ENDERE�O DE MEM�RIA: " << (pointer + 5) << " Valor: " << *(pointer + 5) << "\n";
	std::cout << "(pointer + 6) ENDERE�O DE MEM�RIA: " << (pointer + 6) << " Valor: " << *(pointer + 6) << "\n";



	std::cout << "\nN�o mudou o valor que o ponteiro aponta ap�s essas opera��es. Valor armazenado em pointer: " << pointer << "\n";
	pointer++; // pointer = pointer + 1;
	std::cout << "Valor armazenado no ponteiro depois de pointer++: " << pointer << "\n";
	std::cout << "o Valor do ponteiro � pegar o valor do ponteiro(endere�o) somar o tamanho do tipo de dados que ele aponta\n";
	std::cout << "No caso de um inteiro � de 4 bytes. Ent�o descolo 4 endere�os de mem�ria. Se for double 8. Assim por diante\n";

    pointer = &Vector[4];// passa a apontar para o quinto elemento do vector
    std::cout << "\nFazendo um desferenciamento para o quinto elemento do vetor\n";
	std::cout << "Valor armazenado em pointer: " << pointer << "\n";
	std::cout << "Valor que pointer aponta: " << *pointer << "\n";
	pointer--;
	std::cout << "\nValor armazenado em pointer ap�s o decremento: " << pointer << "\n";
	std::cout << "Valor que pointer aponta ap�s o decremento: " << *pointer << "\n";



	system("PAUSE");
	return 0;
}
