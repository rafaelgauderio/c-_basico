#ifndef ELEMENTO_H_
#define ELEMENTO_H_

#include <iostream>

using namespace std;

class Elemento {
    public:
        Elemento();
        string getNome() const;
        void setNome(string nome);
        int getProtons() const;
        int getNeutrons() const;
        bool isRadioativo() const;
        virtual void imprime() const =0;
        virtual ~Elemento();
    
    
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

void Elemento::setNome(string nome) {
    this->nome=nome;
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

Elemento::~Elemento() {
    
}

//classe filho isótopo = classe que pode ser instanciada

class Isotopo:public Elemento {
    
    public:
        Isotopo(string no, int pro, int neu,bool radio);
        virtual void imprime() const;
};

Isotopo::Isotopo(string no, int pro, int neu,bool radio) {
    this->nome=no;
    this->protons=pro;
    this->neutrons=neu;
    this->radioativo=radio;
}

void Isotopo::imprime() const {
    cout << "\nDados do Isótopo\nNome do isótopo: " << getNome() << "\nNúmero de atômico: " << getProtons() << 
    "\nNúmero de nêutrons: " << getNeutrons () << "\nÉ radiotivo: " << isRadioativo() << endl;
    
}


















