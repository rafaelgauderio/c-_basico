/******************************************************************************
smart pointer com string
*******************************************************************************/
#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Carro {

public:
	
	//construtor vazio
	Carro () {
	    
	}
	
	//construtor com parâmetros
	Carro(string nome) {
	    this->name=nome;
	}
	string getName() const {
	    return name;
	}
	void setName(string name) {
	    this->name=name;
	}
	
	int getVel() const {
	    return vel;
	}
	
	void setVel(int vel) {
	    this->vel=vel;
	}

protected:
	string name;
	int vel;

};


int main()
{
    
    Carro *palio = new Carro();
    palio->setName("Palio vermelho 2016");
    cout << palio->getName();
    delete palio;
    
    Carro *gol = new Carro("Novo Gol preto 2019");
    cout << "\n" << gol->getName();
    delete gol;
    
    unique_ptr<Carro> civic (new Carro("Honda civic 2021"));
    civic->setVel(15);
    cout << "\n" << civic->getName() << ", velocidade: " << civic->getVel() << " k/h";
    //delete civic;
    
    shared_ptr<Carro>opala(new Carro("Opalao"));
    shared_ptr<Carro>diplomata =opala;
    opala->setVel(90);
    diplomata->setVel(115);
    cout << "\nShared pointer. Alterando a velocidade em 1 deles, altera em todos, compartilham o mesmo ponteiro"; 
    cout << "\n" << diplomata->getName() << ", velocidade: " << opala->getVel() << " km/h";
    cout << "\n" << opala->getName() << ", velocidade: " << diplomata->getVel() << " km/h";
    
    unique_ptr<Carro>montana(new Carro("Montana 2019"));
    unique_ptr<Carro>strada(new Carro("Strada Adventure"));
    montana->setVel(120);
    strada->setVel(130);
    cout << "\nUnique pointer\n" << montana->getName() << ", velocidade: " << montana->getVel() << " km/h";;
    cout << "\n" << strada->getName() << ", velocidade: " << strada->getVel() << " km/h";;
    

    return 0;
}
