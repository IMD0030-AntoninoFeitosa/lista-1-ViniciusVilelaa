/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
  int n, m, soma;
  while(cin >> std::ws >> n >> m){
    soma = 0;
    if(m > 0){
      for(int i=0;i<m;i++){
        soma += n;
        n++;
      }
    } 
    else if(m < 0){
      for(int i=0;i<-m;i++){
        soma += n;
        n--;
      }
    } 
    else {
      soma = n;
    }
    
    cout << soma << endl;
    
  }
  return 0;
}

