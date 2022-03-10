#include <iostream>
#include <string>


using std::cout; using std::cin;
using std::endl; using std::string;


int main()
{
	setlocale(LC_ALL, "portuguese");

	int numero{ 1712 };
	char letra{ 'R' };
	bool flag=true;
	double phi = 3.1415;
	string name = "Rafael";
	//ponteiro do tipo void é útil quando você quer retornar algo de alguma função e atribuir a um ponteiro.
	// sem saber qual tipo de dado essa função vai retornar 
	void* genericPointer;
	genericPointer = &letra;	
	//depois faz um casting para imprimir o tipo de dado
	//*(cast para tipo desejado)NomePonteiroGenerico
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