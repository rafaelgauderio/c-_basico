#ifndef ELEMENTO_H_
#define ELEMENTO_H_


#include <iostream>
#include "ExcecaoNoxZero.h"


using namespace std;

class Elemento {
    friend ostream &operator << (ostream & saida, const Elemento &e);
    public:
        Elemento();
        string getNome() const;
        void setNome(string p_nome);
        int getProtons() const;
        int getNeutrons() const;
        bool isRadioativo() const;
        //método virtual torna a classe abstrata, = 0 é obrigatório a redefinição. funcão virtual pura
        virtual void imprime() const =0;
        virtual ~Elemento();
        int numeroMassa() const;
        //polimorfismo da saida
        
    
    protected:
        string nome;
        int protons;
        int neutrons=0; //declarar valor padrão zero
        bool radioativo=false; // declarar valor padrão false;
};

#endif

Elemento::Elemento() {
    
}

string Elemento::getNome() const {
    return nome;
}

void Elemento::setNome(string p_nome) {
    this->nome=p_nome;
}

int Elemento::getProtons() const {
    return protons;
}

int Elemento::getNeutrons() const {
    return neutrons;
}

bool Elemento::isRadioativo() const {
    return radioativo;
}

int Elemento::numeroMassa() const{
    return getProtons() + getNeutrons();
}

Elemento::~Elemento() {
    
}

//classe filho isótopo = classe que pode ser instanciada

class Isotopo:public Elemento {
    
    public:
        Isotopo(string p_nome, int p_protons, int p_neutrons,bool p_radio);
        virtual void imprime() const;
};
//construtor
Isotopo::Isotopo(string p_nome, int p_protons, int p_neutrons,bool p_radio) {
    this->nome=p_nome;
    this->protons=p_protons;
    this->neutrons=p_neutrons;
    this->radioativo=p_radio;
}

void Isotopo::imprime() const {
    cout << "\nDados do Isótopo\nNome do isótopo: " << getNome() << "\nNúmero de atômico: " << getProtons() << 
    "\nNúmero de nêutrons: " << getNeutrons () << "\nÉ radiotivo: " << isRadioativo() << 
    "\nNúmero de Massa: " << numeroMassa() << endl;
    
}

//classe filho ion 

class Ion:public Elemento {
    public: 
        Ion(string p_nome, int p_protons, int p_neutrons, int p_eletrons);
        int getEletrons() const;
        void setEletrons(int p_eletrons);
        virtual void imprime() const;
        void tipo_ion() const;
    private:
        int eletrons;
};
//construtor
Ion::Ion(string p_nome, int p_protons, int p_neutrons,int p_eletrons) {
    this->nome=p_nome;
    this->protons=p_protons;
    this->neutrons=p_neutrons;
    this->eletrons=p_eletrons;
}

int Ion::getEletrons() const {
    return eletrons;
}

void Ion::setEletrons(int p_eletrons) {
    this->eletrons=p_eletrons;
}

void Ion::imprime() const {
    cout << "\nDados do Íon\nNome do íon: " << getNome() << "\nNúmero de atômico: " << getProtons() << 
    "\nNúmero de nêutrons: " << getNeutrons () << "\nÉ radiotivo: " << isRadioativo() << 
    "\nNúmero de Massa: " << numeroMassa() << "\nNúmero de Eletróns: " << getEletrons() << endl;
}

void Ion::tipo_ion() const {
    if(getEletrons() < 0) {
        cout << "O elemento " << getNome() << " sofreu OXIDAÇÃO, perdeu eletrons e é um CÁTION." << endl;
    } else if (getEletrons() > 0) {
        cout << "O elemento " << getNome() << " sofreu REDUÇÃO, ganhou eletrons e é um ÂNION." << endl;
    } else {
        throw ExcecaoNoxZero();
    }
}

//sobrecarga do operador de saida << para imprimir um ion
ostream &operator<< (ostream & saida, const Ion & ion) {
    saida << "\nDados do Íon\nNome do isótopo: " << ion.getNome() << "\nNúmero de atômico: " << ion.getProtons() << 
    "\nNúmero de nêutrons: " << ion.getNeutrons () << "\nÉ radiotivo: " << ion.isRadioativo() << 
    "\nNúmero de Massa: " << ion.numeroMassa() << "\nNúmero de Eletróns: " << ion.getEletrons() << "\n";
    
    return saida;
}




















