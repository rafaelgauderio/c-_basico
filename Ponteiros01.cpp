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
	//usar & para pegar o endere�o de mem�ria da vari�vel
	std::cout << "\n O endere�o de uma vari�vel � o endere�o do seu primeiro byte. N�o importa o tamanho!" << "\n";
	std::cout << "\n Endere�o de mem�ria da Vari�vel Numero: " << &Numero << "\n";	
	std::cout << "\n Endere�o de mem�ria da Vari�vel Sal�rio: " << &Salario << "\n";
	std::cout << "\n Endere�o de mem�ria da Vari�vel letra: " << &letra << "\n";
	std::cout << "\n Endere�o de mem�ria da Vari�vel flag: " << &flag << "\n";
	system("PAUSE");
	return 0;
}