#include <iostream>
using namespace std;

int main()
{

    int n, sni = 0;

    cout << "Quantos numeros impares deseja somar? ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 1)
        {
            sni = i + sni;
        }
    }

    cout << "A soma dos impares e: " << sni;
}