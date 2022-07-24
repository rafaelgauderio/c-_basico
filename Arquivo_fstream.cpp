#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <sstream>

using namespace std;


int main()
{
    
    cout << "fstream: pode ser configurado como entrada ou saída." << endl;
    cout << "Com o mesmo objeto consigo fazer a entrada e a saída"<< endl;
    
   
    fstream arquivoSaida, arquivoVetor;
    char opcao = 's';
    string nome = "";
    string linha;
    vector <string> vetor;
    //fazendo append no final do arquivo e não sobrescrever
    arquivoSaida.open("texto.txt",ios::out | ios::app);
    arquivoVetor.open("vetor.txt",ios::out | ios::app);
    do {
        cout << "Digite um nome: ";
        cin >> nome;
        arquivoSaida << nome << endl;
        vetor.push_back(nome);
        cout << "\nDeseja informar um novo usuário? [S/N]" << endl;
        cin >> opcao;
        system("clear");
    }  while (opcao=='s' || opcao=='S');
    stringstream ss;
    for (auto iterador = vetor.begin() ; iterador !=vetor.end(); iterador++) {
        if(iterador != vetor.begin()) {
            ss << "\n";
        }
        ss << *iterador;
    }
    arquivoVetor << ss.str();
    
    arquivoSaida.close();
    arquivoVetor.close();
    
    cout << "Lendo nomes do arquivo " << endl;
    arquivoSaida.open("texto.txt",ios::in);
    if(arquivoSaida.is_open()) {
        while(getline(arquivoSaida,linha)) {
            cout << "nome: " << linha << endl;
        }
        arquivoSaida.close();
    } else {
        cout << "\nErro ao abrir o arquivo.";
    }
    
    
    return 0;
}
