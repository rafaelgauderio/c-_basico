/******************************************************************************
Container pair - armazena dados em pares 
(par de dados que podem ser de diferente tipos)

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <utility>

using namespace std;

int main()
{
    
     const int size = 3;
     const int tamanho =2;
    
   
    pair <string,double> vetor2[tamanho];
    vetor2[0]=make_pair("Claudio", 1.80);
    vetor2[1]=make_pair("Marilene",1.65);
     
    cout << vetor2[0].first << " - " << vetor2[0].second << endl; 
    cout << vetor2[1].first << " - " << vetor2[1].second << endl << endl;
    
    pair<string,int> pares("Rafael",25);
    cout << "Nome: " << pares.first << ", idade:  " << pares.second << endl; 
    
    //sem inicilizar o pair com valores
    pair<int,double> pares2;
    pares2.first=100;
    pares2.second=17.2;
    cout << pares2.first << " - " << pares2.second << endl << endl; 
    
    //pair com vetor
     pair <string,int> vetorPair[size];
     vetorPair[0].first="Juliana";
     vetorPair[0].second=27;
     
     vetorPair[1].first="Mariana";
     vetorPair[1].second=35;
     
     vetorPair[2].first="Rafael";
     vetorPair[2].second=69;
     
     for(int i=0 ; i < sizeof(vetorPair) ; i++) {
         cout << vetorPair[i].first << " - " << vetorPair[i].second << endl; 
     }
     
    
    return 0;
}


