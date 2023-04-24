#include <iostream>
using namespace std;

int main()
{
    int codm, codg;
    float pesog, pesom, peso;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Peso do boi: ";
        cin >> peso;

        if (i == 1)
        {
            codm = i;
            codg = i;
            pesom = peso;
            pesog = peso;
        }

        if (peso > pesog)
        {
            pesog = peso;
            codg = i;
        }
        if (peso < pesom)
        {
            pesom = peso;
            codm = i;
        }
    }
    cout << "O boi mais gordo foi o de numero: " << codg << " pesando: " << pesog << "@" << endl;
    cout << "O boi mais magro foi o de numero: " << codm << " pesando: " << pesom << "@" << endl;
    system("pause");
}