/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 #include <iostream>
 using namespace std; 
 
 void Swap (int &i,int &j)
  {
 	int t=i;
 	i=j;
 	j=t;
  }
  
  void SwapPorCopia (int i,int j)
  {
 	int t=i;
 	i=j;
 	j=t;
  } 
  
  int main ()
  {
 	int a,b; 
 	a=17;
 	b=12;
 	cout << "Valor de a e b ANTES O swap POR CÓPIA, respectivamente: " <<a<<"\t"<<b << endl;
 	SwapPorCopia (a,b);
 	cout << "Valor de a e b APÓS O swap POR CÓPIA, respectivamente: " <<a<<"\t"<<b << endl;
 	
 	cout << "Só vai funcionar o swap se for por refência a passagem\n";
 	cout << "Valor de a e b ANTES O swap POR REFERÊNCIA, respectivamente: " <<a<<"\t"<<b << endl;
 	Swap (a,b);
 	cout << "Valor de a e b APÓS O swap POR REFERÊNCIA, respectivamente: " <<a<<"\t"<<b << endl;
 	
    cout<<"\nDigite enter para FINALIZAR..."<< endl;
    cin.get();
    return 0;
  }