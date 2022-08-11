
//#ifndef DIFFPAIR_H_
//#define DIFFPAIR_H_

#include "EqualValue.h"

template <typename T1, typename T2>
class DiffPair {
private:
	T1 value;
	T2 value2;
public:
	DiffPair(T1 value, T2 value2);
	void checkEqual();
	~DiffPair();
};

//#endif /* DIFFPAIR_H_ */

template<typename T1, typename T2> DiffPair<T1,T2>::DiffPair(T1 p_value, T2 p_value2) {

	this->value=p_value;
	this->value2=p_value2;

}

template<typename T1, typename T2>void DiffPair<T1,T2>::checkEqual() {
	if(value== static_cast<T1>(value2)) {
		throw EqualValue();
	}
}

//destrutor
template<typename T1, typename T2>DiffPair<T1,T2>::~DiffPair() {

}

