/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    double intervalo_1 = 0; double intervalo_2 = 0; double intervalo_3 = 0; double intervalo_4 = 0;

    int x;
    int cont = 0;
    double porcent_1 = 0;
    double porcent_2 = 0;
    double porcent_3 = 0;
    double porcent_4 = 0;
    double soma = 0;
    double porcent_tot = 0;

    while( cin >> std::ws >> x) {
    // realização da contagem em relação aos intervalos
        if (x >= 0 && x <25)
        {
            intervalo_1++;
        }
        else if (x >= 25 && x < 50)
        {
            intervalo_2++;
        }
        else if (x >= 50 && x < 75)
        {
            intervalo_3++;
        }
        else if (x >= 75 && x < 100)
        {
            intervalo_4++;
        }
        cont = cont + 1;

    }   
    porcent_1 = (intervalo_1/cont) * 100;
    porcent_2 = (intervalo_2/cont) * 100;
    porcent_3 = (intervalo_3/cont) * 100;
    porcent_4 = (intervalo_4/cont) * 100;
    soma = cont - (intervalo_1 + intervalo_2 + intervalo_3 + intervalo_4);
    porcent_tot = (soma/cont) * 100;



    
    cout<< setprecision(4) <<porcent_1<<endl;
    cout<< setprecision(4) <<porcent_2<<endl;
    cout<<setprecision(4) <<porcent_3<<endl;
    cout<<  setprecision(4) <<porcent_4<<endl;
    cout<< setprecision(4) <<porcent_tot<<endl;


    return 0;
}
