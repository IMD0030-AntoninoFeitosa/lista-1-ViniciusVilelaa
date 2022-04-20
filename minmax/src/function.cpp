#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], std::size_t n )
{
  int minimo = -1;
  int maximo = -1;
  for(int i=0; i<n; i++){
    if(minimo == -1 || V[i] < V[minimo]){
      minimo = i;
    }
    if(maximo == -1 || V[i] >= V[maximo]){
      maximo = i;
    }
  }

  return std::make_pair(minimo, maximo);
}
