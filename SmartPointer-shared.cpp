/******************************************************************************
-> smart pointer deletando o objeto apontado automaticamente após o uso;
-> não precisa usar delete ou free em objetos ponteiros declarados
-> mesmo se houver um exceção, eles conseguem liberar o espaço de memória;

*******************************************************************************/

#include <iostream>
#include <memory>

using namespace std;

int main()
{
   
    shared_ptr <int> pontsmarty(new int());
    shared_ptr <int> pointer2=pontsmarty;
    
    *pontsmarty = 18;
    
    cout << "Valor do ponteiro: " << *pontsmarty << endl;
    cout << "Endereço de memória onde está alocado o ponteiro: " << &pontsmarty << endl;
    
    cout << "\nValor do ponteiro: " << *pointer2 << endl;
    cout << "Endereço de memória onde está alocado o ponteiro2: " << &pointer2 << endl;
    
    
    return 0;
}




