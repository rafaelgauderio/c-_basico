/******************************************************************************
-> smart pointer deletando o objeto apontado automaticamente após o uso;
-> não precisa usar delete ou free em objetos ponteiros declarados
-> mesmo se houver um exceção, eles conseguem liberar o espaço de memória;

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int number = 17;
    int *ponteiro;
    ponteiro = &number;
    
    cout << "Imprimindo sem os smartpointer" << endl;
    cout << "Valor do ponteiro: " << *ponteiro << endl;
    cout << "Para onde ele aponta (endereço de number): " << ponteiro << endl;
    cout << "Para onde ele aponta (endereço de number): " << &number << endl;
    cout << "Endereço de memória onde está alocado o ponteiro: " << &ponteiro << endl << endl;
    
    //delete ponteiro;
    
    //instanciando de maneira diferente
    
    int *ponteiro2 = new int();
    *ponteiro2=17;
    
    cout << "Valor do ponteiro: " << *ponteiro2 << endl;
    cout << "Para onde ele aponta (endereço de number): " << ponteiro2 << endl;
    cout << "Endereço de memória onde está alocado o ponteiro: " << &ponteiro2 << endl;
    
    //delete ponteiro2;
    
    
    return 0;
}

