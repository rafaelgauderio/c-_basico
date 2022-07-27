/******************************************************************************
 * Trabalho disciplina de tópicos especiais em c++ * 
1. Streams de E/S 1.
2. Strings 2.
3. Alocação dinâmica
4. Referências 4.
5. Classes 3.
6. Construtores e destrutores 5.
7. Funções e classes friend 6
8. Herança 7.
9. Polimorfismo
10. Classes abstratas 8.
11. Sobrecarga de operadores
12. Templates 9.
13. Contêineres da STL
14. Algoritmos da STL
15. Operações com arquivos 10.
16. Tratamento de exceções
*******************************************************************************/
#include "Elemento.h"

using namespace std;

int main()
{
    Isotopo *hidrogenio = new Isotopo("Hidrogênio",1,0,false);
    hidrogenio->setNome("Prótio");
   
    
    Isotopo *deuterio = new Isotopo("Deutério",1,1,false);
    
    Isotopo *tritio = new Isotopo("Trítio",1,2,true);
    
    //setando um vetor e Isotopos
    Elemento *isotopos[3];
    
    isotopos[0]=hidrogenio;
    isotopos[1]=deuterio;
    isotopos[2]=tritio;
    
    //imprimindo e destruindo os objetos
    
    for(int i=0; i<sizeof(isotopos)/sizeof(isotopos[0]); i++) {
        isotopos[i]->imprime();
        delete isotopos[i];
    }
    
    
    
    
    
    
    

    return 0;
}