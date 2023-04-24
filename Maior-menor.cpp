#include <iostream>
using namespace std;

int main()
{

    int n, maior, menor = 9999;

    for (int i = 0; i <= 20; i++)
    {
        cout << "De entrada em um numero: " << endl;
        cin >> n;

        if (n > maior)
        {
            maior = n;
        }
        if (n < menor)
        {
            menor = n;
        }
    }

    cout << "O menor numero e igual a: " << menor << " E o maior numero e: " << maior << endl;
}
