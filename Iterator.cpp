
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout<<"Iterator: permite navegar dentro de uma coleção de dados. Acessar os dados de uma coleção" << endl;
    vector<string> comandos = {"ls", "cd", "mkdir", "cp","touch","rm -r"};
    vector<string>::iterator it;
    
    cout << "Usando o advance\n";
    it=comandos.begin();
    cout << *it << endl;
    advance(it,1);
    cout << *it << endl;
    advance(it,1);
    cout << *it << endl;
    
    cout << "\nUsando o next\n";
    it=comandos.begin();
    cout << *next(it,1) << endl;
    cout << *next(it,2) << endl;
    cout << *next(it,3) << endl;
    cout << *next(it,4) << endl;
    cout << *next(it,5) << endl;
    
     cout << "\nUsando o prev\n";
    it=comandos.end();
    cout << *prev(it,1) << endl;
    cout << *prev(it,2) << endl;
    cout << *prev(it,3) << endl;
    cout << *prev(it,4) << endl;
    cout << *prev(it,5) << endl;
    
    cout << "\nImprimindo declarando iterator dentro do laço\n";
    for(vector<string>::iterator ite=comandos.begin(); ite!=comandos.end() ; ite++) {
        cout << *ite << endl;
    }
    
     cout << "\nImprimindo usando auto\n";
    for(auto ite=comandos.begin(); ite!=comandos.end() ; ite++) {
        cout << *ite << endl;
    }

    return 0;
}
