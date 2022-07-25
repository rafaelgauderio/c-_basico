#include <iostream>
#include <vector>

using namespace std;

struct Pessoa {
    string nome;
    int idade;
    double altura;
};

int main()
{

    Pessoa aluno1;

    aluno1.nome="Rafael De Luca";
    aluno1.idade=25;
    aluno1.altura=1.75;

    cout << "nome: " << aluno1.nome << endl;
    cout << "idade: " << aluno1.idade << endl;
    cout << "altura: " << aluno1.altura << endl;

    Pessoa aluno2;

    aluno2.nome="Claudia da Silva";
    aluno2.idade=35;
    aluno2.altura=1.67;

    cout << "nome: " << aluno2.nome << endl;
    cout << "idade: " << aluno2.idade << endl;
    cout << "altura: " << aluno2.altura << endl;

    vector <Pessoa> alunos;
    alunos.push_back(aluno1);
    alunos.push_back(aluno2);

    for(int i=0 ; i < alunos.size() ; i++) {
        cout << "\nPropriedades do aluno" << (i+1) << endl;
        cout <<  "Nome: " << alunos[i].nome << endl;
        cout <<  "Idade: " << alunos[i].idade << endl;
        cout <<  "Altura: " << alunos[i].altura << endl;
    }


    return 0;
}



