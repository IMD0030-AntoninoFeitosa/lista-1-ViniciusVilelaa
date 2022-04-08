#include <iostream>
using namespace std;

const int SIZE = 5; // input size.

int main(void)
{
    int cont = 0;
    int negativos = 0;
    int numero;

    std::cout<<"Informe o valor inteiro 5 vezes"<<std::endl;


    while (cont < 5)
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
