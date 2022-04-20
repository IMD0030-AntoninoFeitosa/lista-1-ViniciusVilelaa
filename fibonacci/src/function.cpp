#include "function.h"


std::vector<unsigned int> fib_below_n( unsigned int n ){
  std::vector<unsigned int> valores;
  
  if(n > 1){
    valores.push_back(1);
    valores.push_back(1);
    
    int tamanho = valores.size();

    unsigned int proximo = valores[tamanho-2] + valores[tamanho-1];

    while(proximo < n){
      valores.push_back(proximo);
      tamanho = valores.size();
      proximo = valores[tamanho-2] + valores[tamanho-1];
    }
  }  

  

 
  return valores;
}