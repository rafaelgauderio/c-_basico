
//Escrita sequencial em arquivos

#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <ostream>
#include <istream>
#include <iomanip>


using namespace std;

int main(){
    
    string conta;
    string nome;
    double saldo;
    string sair;
    
    ofstream arquivoCliente("cliente.txt", ios::out);
    
   //criar o arquivo se não existir
   
   if(!arquivoCliente) {
       cerr << "Arquivo não pode ser aberto\n";
       exit(1);
   }
   
   cout << "Informe o numero da conta, nome e saldo (digite 'sair' para sair):\n";
   
   while (conta!="sair" || nome !="sair") {
       cin >> conta >> nome >> saldo;
       if (conta!="sair" || nome !="sair") {
         arquivoCliente << conta << " " << nome << " " << saldo << endl;  
       }
    }
    arquivoCliente.close();
   
   /*
   ofstream saidaArquivoCliente;
   saidaArquivoCliente.open("cliente.txt",ios::out);
   */
   
   //leitura sequencial
   ifstream entradaClienteArquivo("cliente.txt",ios::in);
   cout << "Lendo os dados do arquivo\n";
   while (entradaClienteArquivo >> conta >> nome >> saldo){
       cout << left << setw(10) << conta 
                    << setw(13) << nome 
                    << setw(7) << fixed << setprecision(2) << right << saldo << endl;
   }
   

}
