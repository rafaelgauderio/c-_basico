#include <iostream>
#include <locale.h>

int mainMatrix01() {

	int Matrix[10][10];

//criando a matriz
for (int i = 0; i < 10; i++)		{
	for (int j=0; j < 10; j++) {

		if (i < j) {
			Matrix[i][j] = 1;
		} //valor dos elementos da diagonal principal
		else if (i == j) {
			Matrix[i][j] = i;
		}
		else if (i > j) {
			Matrix[i][j] = -1;
			}

		}
	}

	//agora imprimindo a matriz
for (int i = 0; i < 10; i++) {
	for (int j = 0; j < 10; j++) {
		if (i > j) {
			std::cout << "[" << Matrix[i][j] << "] ";
			}
		else{
			std::cout << "[ " << Matrix[i][j] << "] ";
			}
		}
		//quebra uma linha cada vez que termina uma linha de elementos da matriz
	std::cout << "\n";
	}


std::cout << "\n\n";
	system("PAUSE");
	return 0;

}