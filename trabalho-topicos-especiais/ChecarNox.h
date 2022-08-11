#include "ExcecaoNoxTemplate.h"

// Criacao de novo template
template <typename Tipo>

class ChecarNox {
    private:
        const Tipo nox;
    public:
    //construtor
        ChecarNox (Tipo parametro) : nox(parametro) {
            
        } 
    void verificaNox () {
        if(nox ==static_cast<Tipo>(0)) {
            throw ExcecaoNoxTemplate();
        } 
    }
};