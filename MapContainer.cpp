/******************************************************************************
Map - container de associação chave e valor

*******************************************************************************/
#include <stdio.h>
#include <map>
#include <iostream>

using namespace std;

int main()
{
    
    map <int,string> produtos;
    
    produtos[0] = "Detergente";
    produtos[1] = "Sabão em pó";
    produtos[2] = "Álcool Gel";
    produtos[3] = "Álcool Espuma";
    
    cout << "Imprimindo o value\n";
    for (int i=0; i<produtos.size() ; i++) {
        
        cout << "Nome: " << produtos[i] << endl;
    }
    
    cout << "\nUsando o iterator\n";
    for(auto iterador=produtos.begin(); iterador!=produtos.end(); iterador++ ) {
        cout << "Key: "<< iterador->first << ", value: " << iterador->second << endl;
    }
    
    
    cout << "\nUsando for com base em intervalo\n";
    for(auto iterador:produtos) {
        cout << "Key: "<< iterador.first << ", value: " << iterador.second << endl;
    }
    
    produtos.insert(pair<int,string>(4,"Água sanitária"));
    produtos.insert(pair<int,string>(5,"Desinfetante"));
    produtos.insert(pair<int,string>(40,"Sabonete Líquido"));
    produtos.insert(pair<int,string>(41,"Saco de Lixo"));
    produtos.insert(pair<int,string>(42,"Pano Multiuso"));
    
    cout << "\nImprimindo após inserir mais um pair\n";
    for(auto iterador:produtos) {
        cout << "Key: "<< iterador.first << ", value: " << iterador.second << endl;
    }
    
    //deletando informando a key.
    //apagando o desinfetante
    produtos.erase(5);
    produtos.erase(0);
    //limpando todo o container
    //produtos.clear();
    
    
    cout << "\nImprimindo após deletar\n";
    for(auto iterador:produtos) {
        cout << "Key: "<< iterador.first << ", value: " << iterador.second << endl;
    }
    
    //deletando uma faixa de valores
    produtos.erase(produtos.begin(),produtos.find(41));
    
     cout << "\nImprimindo após deletar por faixa de valores\n";
    for(auto iterador:produtos) {
        cout << "Key: "<< iterador.first << ", value: " << iterador.second << endl;
    }
    
    
    
    
    
    return 0;
}

