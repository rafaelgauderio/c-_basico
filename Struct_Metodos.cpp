#include <iostream>
#include <vector>
#include <locale.h>
using namespace std;

struct Carro {
    string nome;
    int ano;
    int velMax;
    int velMed;

    //funcao para inserir valores na propriedades
    void inserir(string n, int a, int vel, int velM) {
        nome=n;
        ano=a;
        velMax=vel;
        velMed=velM;
    }

    void imprime() {

    cout << "\nDescricao: " << nome << endl;
    cout << "ano: " << ano << endl;
    cout << "Velocidade média: " << velMed << " km/h" << endl;
    cout << "Velocidade Máxima: " << velMax << " km/h" << endl;
    }

    void alteraVelocidade (int velocidade) {
        velMed=velocidade;
        if(velocidade > velMax) {
            cout << "Alterando a velocidade de " << nome << ". NÃO é possível uma velocidade média maior que velocidade máxima." << endl;
            velMed = velMax;
       } if(velocidade < 0) {
           cout << "Alterando a velocidade de " << nome << ". NÃO é possível velocidade negativa." << endl;
           velMed=0;
       }

    }

};

int main()
{

    setlocale(LC_ALL,"PORTUGUESE");

    Carro opala,palio,gol;
    opala.inserir("Opalão diplomata",1975,150,80);
    palio.inserir("Palio fire",2005,210,86);
    gol.inserir("Novo Gol",2018,190,85);

    opala.imprime();
    gol.imprime();
    palio.imprime();
    opala.alteraVelocidade(95);
    palio.alteraVelocidade(400);
    gol.alteraVelocidade(-30);

    vector <Carro> carros;
    carros.push_back(opala);
    carros.push_back(palio);
    carros.push_back(gol);


    cout << "\nImprimindo o vetor\n";
    for(int i=0 ; i < carros.size() ; i++) {
        cout << "\nPropriedades do carro" << (i+1) << endl;
        cout <<  "Nome: " << carros[i].nome << endl;
        cout <<  "Ano: " << carros[i].ano << endl;
        cout <<  "Velocidade Média: " << carros[i].velMed << " km/h" <<endl;
        cout <<  "Velocidade Máxima: " << carros[i].velMax << " km/h" <<endl;
    }


    return 0;
}
