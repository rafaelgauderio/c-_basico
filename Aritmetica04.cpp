#include <iostream>
#include <windows.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"Portuguese");

    double phi = 3.1415;
    double *pointer1 = &phi;

    std::cout << "\nEndereco de Phi = " << &phi;
    std::cout << "\nValor de Phi = " << phi;

    std::cout << "\n\nEndereco em que a vari�vel primeiro ponteiro esta carregado na mem�ria: " << &pointer1;
	std::cout << "\nValor Contido dentro do primeiro ponteiro = endere�o de phi = " << pointer1;
	std::cout << "\nValor para qual do primeiro ponteiro aponta = valor de phi = " << *pointer1;


    std::cout << "\n\nUm ponteiro de ponteiro � um ponteiro que aponta para outro ponteiro\n";
    std::cout << "Utiliza-se 2 asteriscos para designa��o de ponteiro de ponteiro\n";

    double **pointer2 = &pointer1;

    std::cout << "\nEndereco do segundo ponteiro na mem�ria:  " << &pointer2;
	std::cout << "\nValor Contido dentro do segundo ponteiro = endere�o do primeiro ponteiro:  " << pointer2;
	std::cout << "\nOpera��o *ponteiro2,  Valor do primeiro ponteiro = Endere�o de phi: " << *pointer2 ;
	std::cout << "\nOpera��o **ponteiro2, Valor para onde o primeiro ponteiro aponta = valor de phi: " << **pointer2 << "\n\n";



    system("pause");
    return 0;


}
