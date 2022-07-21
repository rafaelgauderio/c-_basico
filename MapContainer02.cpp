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
    map <int,string>::iterator iteradorMap;
    
    produtos[0] = "Detergente";
    produtos[1] = "Sabão em pó";
    produtos[2] = "Álcool Gel";
    produtos[3] = "Álcool Espuma";
    
    
    produtos.insert(pair<int,string>(4,"Água sanitária"));
    produtos.insert(pair<int,string>(5,"Desinfetante"));
    produtos.insert(pair<int,string>(8,"Sabonete Líquido"));
    produtos.insert(pair<int,string>(17,"Sabão em Barra"));
    
    cout << "\nImprimindo após inserir mais um pair\n";
    for(auto iterador:produtos) {
        cout << "Key: "<< iterador.first << ", value: " << iterador.second << endl;
    }
    
    //producando elementos no container
    iteradorMap = produtos.find(17);
    //iteradorMap = produtos.find(50);
    //se ele percorrer até final sem encotrar nada significa que o iterador é diferente no valor no final
    if(iteradorMap!=produtos.end()) {
        cout << "\nProduto encontrado no container" << endl;
        cout << "Código do produto: " << iteradorMap->first << ", Descrição: " << iteradorMap->second << endl;
        
    } else {
        cout << "\nProduto NÃO encontrado no container" << endl;
    }
    
    
    return 0;
}


