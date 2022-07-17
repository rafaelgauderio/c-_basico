/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    cout<<"Vector é uma estrutura mais moderna que um array unidimensional.\n";
    
    vector <int> vetor;
    int tamanho;
    
    //adicionando ao vim do vector
    //só da pra fazer o push_back se não definir o tamanho do vector
    vetor.push_back(15);
    vetor.push_back(17);
    vetor.push_back(12);
    vetor.push_back(25);
    vetor.push_back(8);
    vetor.push_back(19);
    vetor.push_back(81);
    vetor.push_back(550);
    vetor.push_back(16);
    vetor.push_back(01);
    //substituindo o valor 16 na posição oitava
    vetor[8]=19;
    
    
    tamanho = vetor.size();
    cout << "Tamanho do vector:" << tamanho << endl;
    
    for (int i=0 ; i < vetor.size() ; i ++) {
        cout << "Valor do vector na  posicao " << (i +1) << " é " << vetor[i] << endl;
    }
    
    
    return 0;
}
