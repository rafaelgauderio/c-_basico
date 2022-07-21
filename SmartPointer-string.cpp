/******************************************************************************
smart pointer com string
*******************************************************************************/
#include <iostream>
#include <memory>

using namespace std;

int main()
{
    //sem smarty pointer
    string *texto = new string ("Rafael de Luca");
    cout << "\nValor da string: " << *texto << endl;
    cout << "Tamanho da string: " << texto->size() << endl;
    cout << "Endereço de memória do ponteiro: " << &texto << endl;
    delete texto;
    
    unique_ptr<string> curso(new string("Engenharia de Software"));
    cout << "\nValor da string: " << *curso << endl;
    cout << "Tamanho da string: " << curso->size() << endl;
    cout << "Endereço de memória do ponteiro: " << &curso << endl;
    //não precisa deletar
    

    return 0;
}
