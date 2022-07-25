#include <iostream>
#include <locale.h>

using namespace std;

typedef struct {
    int dia;
    int mes;
    int ano;
} NovaData;


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

        if(velocidade > velMax) {
            cout << "Alterando a velocidade de " << nome << ". NÃO é possível uma velocidade média maior que velocidade máxima." << endl;
            velMed = velMax;
       } else if(velocidade < 0) {
           cout << "Alterando a velocidade de " << nome << ". NÃO é possível velocidade negativa. Fica a velocidade média inicial." << endl;
           velMed=velMed;
       } else {
           velMed=velocidade;
       }

    }
};

void imprimirData(NovaData *p) {
    cout << "\nData: dia/mês/ano \n" << p->dia << "/" << p->mes << "/" << p->ano << endl;
}

void imprimirDataCopia(NovaData p) {
    cout << "\nData: dia/mês/ano \n" << p.dia << "/" << p.mes << "/" << p.ano << endl;
}

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    //vetor de 3 carros
    Carro *carros = new Carro[3];
    Carro opala,palio,gol;
    carros[0]=opala;
    carros[1]=palio;
    carros[2]=gol;


    carros[0].inserir("Opalão diplomata",1975,150,80);
    carros[1].inserir("Palio fire",2005,210,86);
    carros[2].inserir("Novo Gol",2018,190,85);

    carros[0].alteraVelocidade(75);
    carros[1].alteraVelocidade(400);
    carros[2].alteraVelocidade(-30);

    cout << "\nImprimindo o vetor de carros\n";

    for(size_t i=0 ; i < 3 ; i++) {
        carros[i].imprime();
    }


    NovaData data;
    NovaData *ponteiro = &data;

    data.ano=1995;
    data.mes=12;
    data.dia=17;

    imprimirDataCopia(data);
    imprimirData(ponteiro);

    return 0;
}

