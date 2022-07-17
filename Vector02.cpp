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
    vector <int> vetor02;
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
    vetor.push_back(95);
    //substituindo o valor 16 na posição oitava
    vetor[8]=19;
    
    
    vetor02.push_back(1);
    vetor02.push_back(2);
    vetor02.push_back(3);
    vetor02.push_back(4);
    vetor02.push_back(5);
    vetor02.push_back(6);
    vetor02.push_back(7);
    vetor02.push_back(8);
    vetor02.push_back(9);
    vetor02.push_back(10);
    vetor02.push_back(11);
    
    
    
    
    
    tamanho = vetor.size();
    cout << "Tamanho do vector:" << tamanho << endl;
    
    
    cout << "\nVetor02\n";
     for (int i=0 ; i < vetor02.size() ; i ++) {
        cout << "Valor do vector02 na posicao " << (i +1) << " é " << vetor02[i] << endl;
    }
    
    vetor02.swap(vetor);
    
    cout << "\nVetor02 depois do swap\n";
     for (int i=0 ; i < vetor02.size() ; i ++) {
        cout << "Valor do vector02 na posicao " << (i +1) << " é " << vetor02[i] << endl;
    }
    
    cout << "Primeiro elemento do vetor02: " << vetor02.front() << "\n";
    cout << "Último elemento do vetor02: " << vetor02.back() << "\n";
    cout << "Elemento do meio do vetor02: " << vetor02.at(vetor02.size()/2);
    
    //inserindo elementos em posicoes especificas
    vetor02.insert(vetor02.begin(),55);
    vetor02.insert(vetor02.begin()+2,33);
    vetor02.insert(vetor02.end(),33);
   
    
    
    
    cout << "\nVetor02 depois do swap\n";
     for (int i=0 ; i < vetor02.size() ; i ++) {
        cout << "Valor do vector02 na posicao " << (i +1) << " é " << vetor02[i] << endl;
    }
    
    //excluir elementos
     vetor02.erase(vetor02.end()-5);
     
     //retirando do fim e esvaziando o vetor
     while (vetor02.empty()==false) {
         vetor02.pop_back();
     }
     
     vetor.clear();
     cout << "Tamanho do vetor após as exclusões: " << vetor.size() << "\n";
     cout << "Tamanho do vetor02 após as exclusões: " << vetor02.size() << "\n";
    
    
    return 0;
}
