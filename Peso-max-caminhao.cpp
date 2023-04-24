#include <iostream>
using namespace std;

int main()
{

    float peso, pesototal;
    int pesomaxcaminhao = 10000;

    for (int i = 0; i <= 4; i++)
    {
        cout << "De entrada no valor da caixa " << i + 1 << " : ";
        cin >> peso;

        pesototal = pesototal + peso;
    }

    if (pesototal > pesomaxcaminhao)
    {
        cout << "O peso do caminhao foi extrapolado em: "
             << pesototal - pesomaxcaminhao << "KGs." << endl;
    }
    else if (pesototal < pesomaxcaminhao)
    {
        cout << "O peso atual do caminhao e de: " << pesototal;
    }
}