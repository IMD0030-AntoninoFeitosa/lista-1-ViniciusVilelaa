#include "function.h"


std::vector<unsigned int> fib_below_n( unsigned int n )
{
    unsigned int sequencia = 0;
    unsigned int a = 0 , b = 1;


    for( int i = 0; i < n; i++)
    {
        sequencia = (a + b);
        a = b;
        b = sequencia;
    }
            
 
    return std::vector<unsigned int>{b};
}