#include <stdexcept>
#include <iostream>

using namespace std;

class ExcecaoNoxZero : public runtime_error {
    
    public:
        ExcecaoNoxZero () : runtime_error("Erro.") {
            cout << "EXCEÇÃO DISPARADA\nO nox de íon não pode ser zero. Precisa perder ou ganhar elétrons para virar Cátion ou Anion.\n";
        }
    
};

