#include <iostream>
using namespace std;

int main()
{

    int n, sn = 0, snt = 0;

    cout << "Me diga, a soma de quantos numeros deseja calcular? ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        sn = sn + 1;
        snt = sn + snt;
    }

    cout << "Soma igual a: " << snt;
}