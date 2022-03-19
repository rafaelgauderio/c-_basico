#include <iostream>
#include <windows.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"Portuguese");

    double phi = 3.1415;
    double *pointer1 = &phi;

    std::cout << "\nEndereco de Phi = " << &phi;
    std::cout << "\nValor de Phi = " << phi;

    std::cout << "\n\nEndereco em que a variável primeiro ponteiro esta carregado na memória: " << &pointer1;
	std::cout << "\nValor Contido dentro do primeiro ponteiro = endereço de phi = " << pointer1;
	std::cout << "\nValor para qual do primeiro ponteiro aponta = valor de phi = " << *pointer1;


    std::cout << "\n\nUm ponteiro de ponteiro é um ponteiro que aponta para outro ponteiro\n";
    std::cout << "Utiliza-se 2 asteriscos para designação de ponteiro de ponteiro\n";

    double **pointer2 = &pointer1;

    std::cout << "\nEndereco do segundo ponteiro na memória:  " << &pointer2;
	std::cout << "\nValor Contido dentro do segundo ponteiro = endereço do primeiro ponteiro:  " << pointer2;
	std::cout << "\nOperação *ponteiro2,  Valor do primeiro ponteiro = Endereço de phi: " << *pointer2 ;
	std::cout << "\nOperação **ponteiro2, Valor para onde o primeiro ponteiro aponta = valor de phi: " << **pointer2 << "\n\n";



    system("pause");
    return 0;


}
