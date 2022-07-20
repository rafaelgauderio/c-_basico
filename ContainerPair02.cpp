/******************************************************************************
Container pair - armazena dados em pares 
(par de dados que podem ser de diferente tipos)

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    
    const int size = 3;
     
    vector <pair<string,int>> estoque;
    estoque.push_back(make_pair("Sabonete", 20));
    estoque.push_back(make_pair("Detergente",45));
    
    for(int i=0; i < estoque.size() ; i++) {
       cout << "Nome: " <<  estoque[i].first << ", quantidade: " << estoque[i].second << endl;
    }
    
    cout << "\nImprimindo com laço auto\n";
    
    for(auto i:estoque) {
         cout << "Nome: " <<  i.first << ", quantidade: " << i.second << endl;
    }
    
    cout << "\nPar de produto\n";
    //codigo, descricao, preço
    pair <int,pair<string, double>> produto[size];
    produto[0]=make_pair(1,make_pair("Camiseta",50.15));
    produto[1]=make_pair(2,make_pair("Tênis",138.90));
    produto[2]=make_pair(3,make_pair("Jaqueta de Couro",250.99));
  
     
    for(int i=0 ; i < sizeof(produto) ; i++) {
         cout << "codigo: "<< produto[i].first << ", descrição: " << produto[i].second.first
         << ", preço: " << produto[i].second.second << endl ; 
     }
    
     
    
    return 0;
}




