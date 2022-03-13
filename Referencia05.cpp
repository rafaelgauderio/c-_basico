#include <iostream>
#include <windows.h>

// agora a funcao referebe 2 ponteiros
void changeNumber(int  *outro1, int *outro2);

int main()
{

    //Ponteiros são variáveis que possuem dentro delas um endereço de outra variável
	setlocale(LC_ALL, "portuguese");
	int number1, number2;
	std::cout << "\nInforme o primeiro número: ";
	std::cin >> number1;
	std::cout << "\nInforme o Segundo número: ";
	std::cin >> number2;
	std::cout << "\nValores antes da troca";
	std::cout << "\nnumber1 = " << number1;
	std::cout << "\nnumber2 = " << number2;
	std::cout << "\nEndereço number1 na função main = " << &number1;
	std::cout << "\nEndereço number2 na função main = " << &number2;

	//Agora a função não espera receber 2 numeros, espera receber 2 endereços de memória
    changeNumber(&number1,&number2);
    std::cout << "\nValores depois da troca";
	std::cout << "\nnumber1 = " << number1;
	std::cout << "\nnumber2 = " << number2 <<"\n";
	std::cout << "Usando passagem por referência usando ponteiros funciona a troca" << "\n\n";

    system("pause");
	return 0;
}


    void changeNumber(int *outro1, int *outro2)
{
	//
	std::cout << "\n\nValores dentro da função changeNumber";
	std::cout << "\nEndereço outro1 Função changeNumber (diferente da main)= " << &outro1;
	std::cout << "\nEndereço outro2 Função changeNumber (diferente da main)= " << &outro2;
	//Agora para fazer os desferenciamentos dos ponteiros tem que colocar o *, para puxar o valor para onde apontam
	int temp= *outro1;
	*outro1=*outro2;
	*outro2=temp;
	std::cout << "\nAs variáveis locais outro1 e outro2 agora guardam dentro delas endereços de memórias, visto que são 2 ponteiros";
	std::cout << "\noutro1 Função = " << outro1;
	std::cout << "\noutro2 Função = " << outro2;
	std::cout << "\nAqui dentro da função changeNumber vai funcionar a troca";
	std::cout << "\nApensar de eu colocar nomes diferentes aqui nas variáveis, a função pede como argumentos endereços de memórias.";
	std::cout << "\nLogo NÃO vão ter o mesmo número de endereço de memória e apontam para o mesmo valor.\n";

	}


