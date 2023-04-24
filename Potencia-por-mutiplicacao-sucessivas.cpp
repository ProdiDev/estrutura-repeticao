#include <iostream>
using namespace std;

int main(){

    int a=0, b=0, parcial_result;

    cout << "Deseja elevar A por B, entao me diga o valor de A : ";
    cin >> a;
    cout << "B: ";
    cin >> b;

    for (int i = 1; i <= b; i++){

        if (i==1){
            parcial_result = 1;
        }

        parcial_result *= a;
    }
    cout << parcial_result;
}