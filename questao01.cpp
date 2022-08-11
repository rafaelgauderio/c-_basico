/******************************************************************************
1 � a) Criar um programa em C++ para administra��o de uma fazenda, que utiliza um map associando uma
string contendo o nome da esp�cie de animal, com o um inteiro contendo o n�mero de animais dessa
esp�cie na fazenda.
b) Preencher o map com dados inseridos via teclado pelo usu�rio, que digitar� a esp�cie e o n�mero de
animais, at� que o usu�rio digite �fim�.
c) A partir desse map, escrever o conte�do em um arquivo sequencial, inserindo em cada linha do arquivo o
nome da esp�cie, seguida de um espa�o, seguida do n�mero de animais.
d) Ler o conte�do do arquivo para um vector de strings, com cada item do vector contendo �<n. de animais>
<esp�cie>�.
e) Imprimir esse novo vector na tela.
*********************************************************************************/

#include <iostream>
#include<vector>
#include <map>
#include <fstream>

using namespace std;

int main() {

	map<string,int> myMap;
	int value;
	string key;

	cout << "Digite uma string e um n�mero inteiro. Digite 'fim' para sair do programa.\n";
	while(key!="fim") {
		cin >> key;
		if(key !="fim") {
			cin >> value;
			myMap[key]=value;
		}
	}

	ofstream outputFile ("maping.txt",ios::out);
		if(!outputFile) {
			cerr << "N�o foi poss�vel abrir o arquivo";
			exit(1);
		} else {
			for(map<string,int>::iterator it = myMap.begin(); it!=myMap.end(); it++) {
				outputFile << it->first << " " << it->second << endl;
			}
		}
	outputFile.close();

	vector <string> vectorString;
	string name;
	int quantity;
	ifstream readFile("maping.txt", ios::in);
	while(readFile >> name >> quantity) {
		vectorString.push_back(name + " " + to_string(quantity));
	}
	for(vector<string>::iterator it2 = vectorString.begin(); it2!=vectorString.end(); it2++) {
		cout << *it2 << endl;
	}

	return 0;
}
