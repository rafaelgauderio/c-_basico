#include <iostream>
#include <string>


using std::cout; using std::cin;
using std::endl; using std::string;


int main5()
{
	setlocale(LC_ALL, "portuguese");

	int numero{ 1712 };
	char letra{ 'R' };
	bool flag=true;
	double phi = 3.1415;
	string name = "Rafael";
	//Ponteiro do tipo void é um tipo especial de ponteiro que pode apontar para qualquer tipo de dados
	//ponteiro do tipo void é útil quando você quer retornar algo de alguma função e atribuir a um ponteiro.
	// sem saber qual tipo de dado essa função vai retornar 
	// Ponteiro voiz não pode ser desreferenciado diretamene
	// Ponteiro deve ser convertido explicitamente através de um casting antes de ser desreferenciado
	void* genericPointer;
	genericPointer = &letra;		
	//*(cast para tipo desejado*)NomePonteiroGenerico
	//* antes do parentes é o desreferenciamento, (*tipoDeVariável)
	//(int*) = ponteiro do tipo int. Ponteiro capaz de apontar para um int
	//capacidade de apontar = habilidade de saber quantos bytes possui a variável que o ponteiro aponta, lendo assim a região de memória da variável apontada

	std::cout << "Valor de letra via ponteiro = " << *(char*)genericPointer << "\n";
	genericPointer = &numero;
	std::cout << "\nValor de número via ponteiro: " << *(int*)genericPointer << "\n";
	genericPointer = &flag;
	//no caso de boolean é 1 para true e 0 para false;
	std::cout << "\nValor do boolean via ponteiro: " << *(bool*)genericPointer << "\n";
	flag = false;
	std::cout << "\nValor do boolean via ponteiro: " << *(bool*)genericPointer << "\n";
	genericPointer = &phi;
	std::cout << "\nValor do double via ponteiro: " << *(double*)genericPointer << "\n";
	genericPointer = &name;
	std::cout << "\nValor da string via ponteiro: " << *(string*)genericPointer << "\n\n";
	system("PAUSE");
	return 0;
}