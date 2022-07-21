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
   
    unique_ptr <int> pontsmarty(new int(25));
    
    cout << "Valor do ponteiro: " << *pontsmarty << endl;
    cout << "Endereço de memória onde está alocado o ponteiro: " << &pontsmarty << endl;
    
    double number=17.15;
    unique_ptr<double> pont2 (new double(number));
    
    cout << "\nValor do ponteiro: " << *pont2 << endl;
    cout << "Endereço de number: " << &number << endl;
    cout << "Endereço de memória onde está alocado o ponteiro2: " << &pont2 << endl;
    
    
    unique_ptr<double> pont3 (new double());
    *pont3=number;
    
    cout << "\nValor do ponteiro: " << *pont3 << endl;
    cout << "Endereço de number: " << &number << endl;
    cout << "Endereço de memória onde está alocado o ponteiro3: " << &pont3 << endl;
    
    return 0;
}



