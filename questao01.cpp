/******************************************************************************
1 – a) Criar um programa em C++ para administração de uma fazenda, que utiliza um map associando uma
string contendo o nome da espécie de animal, com o um inteiro contendo o número de animais dessa
espécie na fazenda.
b) Preencher o map com dados inseridos via teclado pelo usuário, que digitará a espécie e o número de
animais, até que o usuário digite “fim”.
c) A partir desse map, escrever o conteúdo em um arquivo sequencial, inserindo em cada linha do arquivo o
nome da espécie, seguida de um espaço, seguida do número de animais.
d) Ler o conteúdo do arquivo para um vector de strings, com cada item do vector contendo “<n. de animais>
<espécie>”.
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

	cout << "Digite uma string e um número inteiro. Digite 'fim' para sair do programa.\n";
	while(key!="fim") {
		cin >> key;
		if(key !="fim") {
			cin >> value;
			myMap[key]=value;
		}
	}

	ofstream outputFile ("maping.txt",ios::out);
		if(!outputFile) {
			cerr << "Não foi possível abrir o arquivo";
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
