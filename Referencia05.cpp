#include <iostream>
#include <windows.h>

// agora a funcao referebe 2 ponteiros
void changeNumber(int  *outro1, int *outro2);

int main()
{

    //Ponteiros s�o vari�veis que possuem dentro delas um endere�o de outra vari�vel
	setlocale(LC_ALL, "portuguese");
	int number1, number2;
	std::cout << "\nInforme o primeiro n�mero: ";
	std::cin >> number1;
	std::cout << "\nInforme o Segundo n�mero: ";
	std::cin >> number2;
	std::cout << "\nValores antes da troca";
	std::cout << "\nnumber1 = " << number1;
	std::cout << "\nnumber2 = " << number2;
	std::cout << "\nEndere�o number1 na fun��o main = " << &number1;
	std::cout << "\nEndere�o number2 na fun��o main = " << &number2;

	//Agora a fun��o n�o espera receber 2 numeros, espera receber 2 endere�os de mem�ria
    changeNumber(&number1,&number2);
    std::cout << "\nValores depois da troca";
	std::cout << "\nnumber1 = " << number1;
	std::cout << "\nnumber2 = " << number2 <<"\n";
	std::cout << "Usando passagem por refer�ncia usando ponteiros funciona a troca" << "\n\n";

    system("pause");
	return 0;
}


    void changeNumber(int *outro1, int *outro2)
{
	//
	std::cout << "\n\nValores dentro da fun��o changeNumber";
	std::cout << "\nEndere�o outro1 Fun��o changeNumber (diferente da main)= " << &outro1;
	std::cout << "\nEndere�o outro2 Fun��o changeNumber (diferente da main)= " << &outro2;
	//Agora para fazer os desferenciamentos dos ponteiros tem que colocar o *, para puxar o valor para onde apontam
	int temp= *outro1;
	*outro1=*outro2;
	*outro2=temp;
	std::cout << "\nAs vari�veis locais outro1 e outro2 agora guardam dentro delas endere�os de mem�rias, visto que s�o 2 ponteiros";
	std::cout << "\noutro1 Fun��o = " << outro1;
	std::cout << "\noutro2 Fun��o = " << outro2;
	std::cout << "\nAqui dentro da fun��o changeNumber vai funcionar a troca";
	std::cout << "\nApensar de eu colocar nomes diferentes aqui nas vari�veis, a fun��o pede como argumentos endere�os de mem�rias.";
	std::cout << "\nLogo N�O v�o ter o mesmo n�mero de endere�o de mem�ria e apontam para o mesmo valor.\n";

	}


