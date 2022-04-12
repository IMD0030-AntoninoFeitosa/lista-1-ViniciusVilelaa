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
    int x = 0, auxiliar_MAX = 0, auxiliar_MIN = 0;
    std::pair<int,int> par;
    par.first=V[0], par.second=V[0];

    /* CONTADOR */

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(V[i]<V[j]){
                auxiliar_MIN = V[i];
                if(auxiliar_MIN < par.first){
                    par.first = auxiliar_MIN;
                }
            }
            else if(V[i]>V[j]){
                auxiliar_MAX = V[i];
                if(auxiliar_MAX > par.second){
                    par.second = auxiliar_MAX;
                }

            }

        }
    }

    return par;
}
