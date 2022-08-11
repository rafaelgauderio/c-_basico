/******************************************************************************
 * Trabalho disciplina de tópicos especiais em c++ * 
1. Streams de E/S 1ok
2. Strings 2ok
3. Alocação dinâmica 3ok
4. Referências 4ok
5. Classes 5ok
6. Construtores e destrutores 6ok.
7. Funções e classes friend 7ok
8. Herança 9ok
9. Polimorfismo 10ok (função imprime)
10. Classes abstratas 10ok.
11. Sobrecarga de operadores 11ok
12. Templates 14ok
13. Contêineres da STL 15OK
14. Algoritmos da STL NÃO
15. Operações com arquivos 17ok.
16. Tratamento de exceções 16pk.
*******************************************************************************/
#include "Elemento.h"
#include <locale.h>
#include <vector>
#include <map>
#include <iostream>
#include <sstream>
#include <fstream>
#include "ChecarNox.h"


using namespace std;

//vetor de ion, guardar num arquivo, buscar no arquivo, exceção de getEletrons 


int main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    
    Isotopo *hidrogenio = new Isotopo("Hidrogênio",1,0,false);
    hidrogenio->setNome("Prótio");
    Isotopo *deuterio = new Isotopo("Deutério",1,1,false);
    Isotopo *tritio = new Isotopo("Trítio",1,2,true);
    
    Elemento *carbono12 = new Isotopo("Carbono-12",6,6,false);
    Elemento *carbono13 = new Isotopo("Carbono-13",6,7,false);
    Elemento *carbono14 = new Isotopo("Carbono-14",6,8,true);
    
    //setando um vetor e Isotopos
    Elemento *isotopos[6];
    //Elemento **isotopos2= new Elemento*[6];
    
    isotopos[0]=hidrogenio;
    isotopos[1]=deuterio;
    isotopos[2]=tritio;
    isotopos[3]=carbono12;
    isotopos[4]=carbono13;
    isotopos[5]=carbono14;
    
    //imprimindo e destruindo os objetos
    cout << "Tamanho do vetor: " << sizeof(isotopos)/sizeof(isotopos[0]) << endl;
    
    for(int i=0; i<sizeof(isotopos)/sizeof(isotopos[0]); i++) {
        isotopos[i]->imprime();
        cout << "Deletando o objeto do Array " << typeid(*isotopos[i]).name() << endl;
        delete isotopos[i];
    }
    
    
    cout << "\nDados dos Íons via funcções\n";
    Ion *sodio = new Ion("Sódio",23,0,0);
    sodio->setEletrons(1);
    sodio->imprime();
    
    //testando a exceção
    try {
       sodio->tipo_ion(); 
    } catch (ExcecaoNoxZero erro) {
        cout << erro.what() << endl;
    }
    
    Ion *cloro = new Ion("Cloro",17,0,0);
    cloro->setEletrons(-1);
    cloro->imprime();
    
    try {
         cloro->tipo_ion();  
    } catch (ExcecaoNoxZero erro) {
        cout << erro.what() << endl;
    }
    
    //exceção usando templeta, não vai disparar por nox do cloro é -1
    ChecarNox<int> noxDoCloro(cloro->getEletrons());
    try {
        noxDoCloro.verificaNox();
    } catch (ExcecaoNoxZero erro) {
        cout << erro.what() << endl; 
    }
 
    
    Ion *fluor = new Ion("Fluor",9,0,0);
    fluor->imprime();
    
    //disparando a exceção
    try {
      fluor->tipo_ion();  
    } catch (ExcecaoNoxZero erro) {
        cout << erro.what() << endl; 
    }
    
    
    
     //disparando a exceção com template
    Ion *ferro = new Ion("Ferro",26,0,0);
    ferro->imprime();
    ChecarNox<int> noxDoFerro(ferro->getEletrons());
    try {
        noxDoFerro.verificaNox();
    } catch (ExcecaoNoxTemplate erro) {
        cout << erro.what() << endl; 
    }
 
    
    
    cout << "\nVector é um estrutura de dados mais moderna que o array unidimensional";
    vector <Ion> vetorDeIons;
    
    
    vetorDeIons.push_back(*sodio);
    vetorDeIons.push_back(*cloro);
    vetorDeIons.push_back(*fluor);
    
  
   vector<Ion>::iterator it;
   it =vetorDeIons.begin();
   cout << "\nImprimindo o vetor de ions ususando iterator e poliformismo\n";
   cout << *next(it,0);
   cout << *next(it,1);
   cout << *next(it,2);
   
    // imprimindo usando iterator
    cout << "\nImprimindo usando ITERATOR com vector";
    for(vector<Ion>::iterator ite=vetorDeIons.begin(); ite!=vetorDeIons.end() ; ite++) {
        cout << *ite << endl;
    }
    
    cout << "\nImprimindo usando iterator auto com string de Gases Nobres\n";
    vector<string> gasesNobres = {"Hélio","Neônio","Argônio","criptônio","Xenônio","Radônio","Oganessônio"};
    for(auto ite2=gasesNobres.begin(); ite2!=gasesNobres.end() ; ite2++) {
        cout << *ite2 << endl;
    } 
    
    //map de alcalinos Terrosos
    map<string,int> mapDeAlcalinosTerrosos;
    mapDeAlcalinosTerrosos.insert(pair<string,int>("Berílo",4));
    mapDeAlcalinosTerrosos.insert(pair<string,int>("Magnésio",12));
    mapDeAlcalinosTerrosos.insert(pair<string,int>("Cálcio",20));
    mapDeAlcalinosTerrosos.insert(pair<string,int>("Estrôncio",38));
    mapDeAlcalinosTerrosos.insert(pair<string,int>("Bário",56));
    mapDeAlcalinosTerrosos.insert(pair<string,int>("Rádio",88));
    
    cout << "\nAlcalinos Terrosos, acessando como Object" << endl;
    for(auto iterador : mapDeAlcalinosTerrosos) {
        //acessando como ponteiro
        cout << "Nome do  alcalino terroso: " << iterador.first << ", número atômico: " <<iterador.second << endl;
    }
    
    ofstream saidaArquivo ("alcalinos.txt", ios::out);
    if (!saidaArquivo) {
        cerr << "Não foi possível abrir arquivo\n";
        exit(1);
    } else {
        for(map<string,int>::iterator it = mapDeAlcalinosTerrosos.begin(); it!=mapDeAlcalinosTerrosos.end(); it++ ) {
            saidaArquivo << it->first << " " << it->second << endl;
        }
    }
    
    saidaArquivo.close();
    
    //agora buscando valores do arquivo, convertor para um vetor de string e imprimindo na tela 
    vector<string> vetorArquivo;
    string nome;
    string numeroAtomico;
    
    ifstream lerArquivo("alcalinos.txt",ios::in);
    while(lerArquivo >> nome >> numeroAtomico ) {
        vetorArquivo.push_back("Nome: " + nome + " | número atômico: " + numeroAtomico);
    }
    
    cout<<"\nIMPRIMINDO DADOS BUSCADOS DO ARQUIVO\n";
    for(vector<string>::iterator iterador= vetorArquivo.begin(); iterador !=vetorArquivo.end(); iterador++) {
        cout << *iterador << endl;
    }
    
    
    return 0;
}