#include <iostream>

int mainr1()
{
	setlocale(LC_ALL, "portuguese");
	std::cout << "\Declarar uma referência significa um apelido, rótulo, atalho, alias." << "\n";
	std::cout << "\Não é reservado um espaço de memória, tem o mesmo espaço de memória da variável que ela referência.  " << "\n";

	double phi{ 3.1415 };
	char letra{ 'r' };
	double &referencia = phi;

	std::cout << "\nValor de phi usando referência: " << referencia << "\n";
	std::cout << "\nValor Endereço de memória de phi: " << &phi << "\n";	
	std::cout << "\nValor Endereco de referência (mesmo da variável que ela referencia): " << &referencia << "\n";

	std::cout << "\nPonteiro é diferente, ele reserva um espaço na memória do tamanho do tipo da variável que ele aponta." << "\n";
	double* pointer = &phi;
	std::cout << "\nValor Endereço do ponteiro na RAM: " << &pointer << "\n";
	std::cout << "\nValor endereco contido dentro do ponteiro (mesmo da variável phi), que pra onde ele aponta: " << pointer << "\n";
	std::cout << "\nValor de thi usando ponteiro: " << *pointer << "\n\n";
	

	system("Pause");
	return 0;
}