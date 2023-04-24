#include <iostream>
using namespace std;

int main()
{

    int par = 0;

    for (int i = 0; i <= 500; i++)
    {

        if (i % 2 == 0)
        {
            cout << "o valor e par: " << i << endl;

            par = par + i;
        }
    }

    cout << "A somatoria dos pares e: " << par << endl;

    return 0;
}