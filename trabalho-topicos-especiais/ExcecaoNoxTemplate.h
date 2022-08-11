#include <stdexcept>
#include <iostream>

using namespace std;

class ExcecaoNoxTemplate : public runtime_error {
    
    public:
        ExcecaoNoxTemplate () : runtime_error("Erro.") {
            cout << "EXCEÇÃO TEMPLATE DISPARADA\nO nox de íon não pode ser zero. Precisa perder ou ganhar elétrons para virar Cátion ou Anion.\n";
        }
    
};
