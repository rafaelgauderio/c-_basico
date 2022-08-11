/******************************************************************************
2 � a) Criar uma classe chamada DiffPair que armazena dois tipos diferentes, com seus valores passados
no construtor da classe.
b) Criar uma classe exce��o derivada de runtime_error chamada EqualValue.
c) Criar uma fun��o-membro em DiffPair chamada checkEqual(), que verifica se os valores dos dois
atributos s�o iguais, disparando uma exce��o caso sejam. OBS: como podem ser tipos diferentes
(chamados T1 e T2), seus valores podem ser comparados com (val1 == static_cast<T1>(val2)).
d) Criar 2 instancia��es do template, uma com <int, double> e outra com <char, int>, e para cada uma delas,
solicitar valores digitados pelo usu�rio.
e) Fazer a checagem de igualdade dos valores de cada inst�ncia, e capturar a exce��o caso seja disparada,
mostrando uma mensagem de erro ao usu�rio. O programa deve continuar a execu��o do segundo caso
mesmo que o primeiro caso tenha exce��o.
*******************************************************************************/

#include <iostream>
#include "DiffPair.h"

using namespace std;

int main() {


	int integer, integer2;
	double floating;
	char character;

	cout << "Favor inserir par inteiro, double:\n";
	cin >> integer >> floating;

	DiffPair<int,double> par1 (integer, floating);

	try {
		par1.checkEqual();

	} catch (EqualValue erro) {
		cout << "Pra par de inteiro com double: " << erro.what() << endl;
	}
	//asc 97 a, 121 y
	cout << "\nFavor inserir um char, inteiro:\n";
	cin >> character >> integer;
	DiffPair<char, int> *par2 = new DiffPair <char,int>(character, integer);

	try {
		par2->checkEqual();

	} catch (EqualValue erro) {
		cout << "Para o valor de char e inteiro: " << erro.what() << endl;
	}

	delete par2;


	return 0;
}
