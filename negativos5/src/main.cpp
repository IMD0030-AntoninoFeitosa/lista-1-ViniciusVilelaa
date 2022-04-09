#include <iostream>
using namespace std;

const int SIZE = 5; // input size.

int main(void)
{
    int cont = 0;
    int negativos = 0;
    int numero;

    cout<<"Informe o valor inteiro 5 vezes ";


    while (cont < SIZE)
    {
        cin>>numero;
        if (numero < 0)
        {
           negativos = negativos +1;
        }
        cont = cont + 1;

    }
    
    cout<<"A quantidade de negativos é "<< negativos <<endl;

    

    return 0;
}
