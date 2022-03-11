#include <iostream>

int mainr1()
{
	setlocale(LC_ALL, "portuguese");
	std::cout << "\Declarar uma refer�ncia significa um apelido, r�tulo, atalho, alias." << "\n";
	std::cout << "\N�o � reservado um espa�o de mem�ria, tem o mesmo espa�o de mem�ria da vari�vel que ela refer�ncia.  " << "\n";

	double phi{ 3.1415 };
	char letra{ 'r' };
	double &referencia = phi;

	std::cout << "\nValor de phi usando refer�ncia: " << referencia << "\n";
	std::cout << "\nValor Endere�o de mem�ria de phi: " << &phi << "\n";	
	std::cout << "\nValor Endereco de refer�ncia (mesmo da vari�vel que ela referencia): " << &referencia << "\n";

	std::cout << "\nPonteiro � diferente, ele reserva um espa�o na mem�ria do tamanho do tipo da vari�vel que ele aponta." << "\n";
	double* pointer = &phi;
	std::cout << "\nValor Endere�o do ponteiro na RAM: " << &pointer << "\n";
	std::cout << "\nValor endereco contido dentro do ponteiro (mesmo da vari�vel phi), que pra onde ele aponta: " << pointer << "\n";
	std::cout << "\nValor de thi usando ponteiro: " << *pointer << "\n\n";
	

	system("Pause");
	return 0;
}