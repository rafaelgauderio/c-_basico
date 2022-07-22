
/*Criar um programa em C++ para inserção de números reais em distribuições estatísticas,
que utiliza um map associando doubles contendo o valor lido,
com um inteiro contendo o número de vezes que esse número apareceu na distribuição:
- A partir desse map, imprimir na tela os números reais que apareceram na 
distribuição, seguido de um espaço, seguido do número de vezes que ele apareceu.
- Realizar a soma de todos os elementos que foram inseridos através do map.
*/
#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    
    map <double,int> meuMap;
    double value, key;
    string in;
    cout << "Informe os números inteiros, digite 'fim' para encerar.\n";
    while(in != "fim"){
        cin >> in;
        if(in != "fim"){
            value = stod(in);
            
            if(meuMap.count(value) > 0){
                meuMap[value]++;
            }else{
                meuMap[value] = 1;
            }
        }
    }
    
    ofstream saidaArquivo ("maping.txt", ios::out);
    if (!saidaArquivo) {
        cerr << "Não foi possível abrir o arquivo\n";
        exit(1);
        
    } else {
        for(map<double,int>::iterator iterador = meuMap.begin(); iterador != meuMap.end(); ++iterador){
        saidaArquivo << iterador->first << " " << iterador->second << endl;
        
        }
    }
    saidaArquivo.close();
    
    vector <string> vetorString;
    string numero;
    string contador;
    ifstream leituraArquivo("maping.txt", ios::in);
    while(leituraArquivo >> numero >> contador) {
        vetorString.push_back(numero + " " + contador);
    }
    
    for(vector<string>::iterator iterador = vetorString.begin(); iterador != vetorString.end(); ++iterador){
        cout << *iterador << endl;
        
    }

}
