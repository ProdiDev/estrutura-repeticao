#include <iostream>
using namespace std;

int main()
{

    int n, fn = 1;
    char op, operar;

    cout << "Qual fatorial deseja calcular? ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        if (n == 0)
        {
            fn = 1;
        }
        else
        {
            fn = fn * i;
        }
    }

    cout << "O fatorial de " << n << " eh: " << fn << endl;

    cout << "Voce deseja continuar operando com esse fatorial ? Y/N : ";
    cin >> operar;

    if (operar == 'N')
    {

        cout << "Tudo bem, espero ter sido util (: )";
    }

    else if (operar == 'Y')
    {

        cout << "Certo, qual sera a operacao a ser realizada? | * | / | + | - | : ";
        cin >> op;

        int v;
        int result;
        int fn1 = 1;
        cout << "Certo, voce deseja uma operacao com o antigo fatorial de " << n << " que tem como valor : " << fn << " e qual sera o fatorial a ser operado? ";
        cin >> v;

        cout << "Certo, estamos calculando o fatorial de " << v << "!........" << endl;

        for (int i = 1; i <= v; i++)
        {

            if (v == 0)
            {
                fn1 = 1;
            }
            else
            {
                fn1 = fn1 * i;
            }
        }

        if (op == '*')
        {
            result = fn1 * fn;
            cout << "A multiplicacao dos fatoriais e : " << result << endl;
        }
        else if (op == '/')
        {
            result = fn / fn1;
            cout << "A divisao dos fatoriais e : " << result << endl;
        }
        else if (op == '+')
        {
            result = fn1 + fn;
            cout << "A soma dos fatoriais e : " << result << endl;
        }
        else if (op == '*')
        {
            result = fn * fn1;
            cout << "A subtracao dos fatoriais e : " << result << endl;
        }

        system("pause");
    }
}