#include <iostream>
using namespace std;

int main()
{

    int par = 0;

    for (int i = 1; i <= 50; i++)
    {

        if (i % 2 == 1)
        {
            cout << "o valor impar: " << i << endl;
        }
    }

    cout << "A somatoria dos pares e: " << par << endl;

    return 0;
}