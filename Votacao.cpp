#include <iostream>
using namespace std;

int main()
{
    int ne1 = 0, ne2 = 0, ne3 = 0, nc = 0;
    const string n1 = "Ricardo";
    const string n2 = "Rusbert";
    const string n3 = "Rosberval";

    while (nc != 135)
    {
        cout << "Qual o numero do seu candidato? 7, 3, 5. " << endl;
        cin >> nc;
        if (nc == 7)
        {
            ne1++;
        }
        else if (nc == 3)
        {
            ne2++;
        }
        else if (nc == 5)
        {
            ne3++;
        }
    }
    if (ne1 > ne2 && ne1 > ne3)
    {
        cout << "O vencedor das eleicoes foi: " << n1 << " com: " << ne1 << " votos" << endl;
    }
    else if (ne2 > ne1 && ne2 > ne3)
    {
        cout << "O vencedor das eleicoes foi: " << n2 << " com: " << ne2 << " votos" << endl;
    }
    else if (ne3 > ne1 && ne3 > ne2)
    {
        cout << "O vencedor das eleicoes foi: " << n3 << " com: " << ne3 << " votos" << endl;
    }
    else if (ne1 = ne2 = ne3)
    {
        cout << "Houve um empate." << endl;
    }
    else
    {
        cout << "Nao houve votacao. " << endl;
    }

    return 0;
}