#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    string nome = "Rafael de Luca";
    int idade = 25;
    
    cout << "ofstream: saida do sistema e vai pro arquivo." << endl;
    cout << "ifstream: sistema(tela) busca do arquivo." << endl;
    cout << "fstream: pode ser configurado como entrada ou saída.\n"<< endl;
    ofstream arquivo;
    //não precisa indicar que é saida
    //arquivo.open("deluca.txt",ios::out);
    arquivo.open("deluca.txt");
    arquivo << nome << " " << idade;
    arquivo.close();
    
    ofstream arquivo2;
    //agora vai fazer append no final do arquivo
    arquivo2.open("texto.txt",ios::app);
    
    arquivo2 << "Mouse" << endl;
    arquivo2 << "Monitor" << endl;
    arquivo2.close();
    arquivo2.open("texto.txt",ios::app);
    arquivo2 << "Teclado" << endl;
    arquivo2 << "Memória Ram" << endl;
    
    arquivo2.close();
    
    //agora buscando o conteudo dos arquivos e imprimindo na tela
    ifstream arquivoEntrada;
    string linha;
    arquivoEntrada.open("texto.txt",ios::in);
    if(arquivoEntrada.is_open()) {
        //enquanto tiver linha escrita vai buscar a linha do arquivo
        while(getline(arquivoEntrada,linha)) {
            cout << linha << endl;
        }
        arquivoEntrada.close();
    } else {
        cout << "\nErro. Não foi possível abrir o arquivo.";
    }
    
    
    return 0;
}
