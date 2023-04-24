#include <iostream>

int main (){

    int i = 1, n=0, ni=0, np=0;

    for (i = 1; i <= 10; i++){

        std::cout << "De entrada em um valor: ";
        std::cin >> n;

        if (n%2==1){
        ni=ni+1;}

        else if (n%2==0){
            np=np+1;
        }

    }

    std::cout << "De todo os " <<i <<" digitados, apenas " <<np <<" eram pares. "<<std::endl <<"E aprenas, " <<ni << " eram impares." ;

}