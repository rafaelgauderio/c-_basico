
#ifndef EQUALVALUE_H_
#define EQUALVALUE_H_

#include <stdexcept>
#include <iostream>

using namespace std;

class EqualValue : public runtime_error {

public:
	EqualValue () : runtime_error("Os valores não podem ser iguais.") {
		cout << "\nValor tem que ser diferentes" << endl;
	}

};



#endif /* EQUALVALUE_H_ */
