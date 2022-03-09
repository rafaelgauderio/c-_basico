#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero = 17;
	double Salario = 8000.50;
	char letra = 'r';
	bool flag = false;
	std::cout << "\n Tamanho Variavel Numero: " << sizeof(Numero) << " Bytes\n";
	std::cout << "\n Tamanho Variavel Salario: " << sizeof(Salario) << " Bytes\n";
	std::cout << "\n Tamanho Variavel letra: " << sizeof(letra) << " Bytes\n";
	std::cout << "\n Tamanho Variavel flag: " << sizeof(flag) << " Bytes\n";
	//usar & para pegar o endereço de memória da variável
	std::cout << "\n O endereço de uma variável é o endereço do seu primeiro byte. Não importa o tamanho!" << "\n";
	std::cout << "\n Endereço de memória da Variável Numero: " << &Numero << "\n";	
	std::cout << "\n Endereço de memória da Variável Salário: " << &Salario << "\n";
	std::cout << "\n Endereço de memória da Variável letra: " << &letra << "\n";
	std::cout << "\n Endereço de memória da Variável flag: " << &flag << "\n";
	system("PAUSE");
	return 0;
}