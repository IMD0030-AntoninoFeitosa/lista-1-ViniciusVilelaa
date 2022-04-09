/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int m = 0; int n = 0; const int SIZE = 0;
int soma_1 = 0; int soma_2 = 0;



int main( void )
{
    
    cout<<"Digite os valores de M e N "<< endl;
    cin>>m>>n;
    
    if (n == SIZE)
    {
        cout<<m<<endl;
    }
    else if (n > SIZE)
    {
        for ( int i = 1; i <=n+1; i++)
        {
            soma_1 = m + (n-1) * i;
            
        }
        cout<<soma_1<<endl;
    }

    else if (n < SIZE)
    {
        for ( int i = 0; i < abs(n); i++)
        {
            soma_2 = soma_2 + m;
            m--;
        }
        cout<<soma_2<<endl;
    }
    
    
    


    return 0;
}
