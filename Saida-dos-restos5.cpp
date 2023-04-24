#include <iostream>
using namespace std;

int main()
{

    int n;

    for (int i = 1000; i < 1999; i++)
    {
        n = i;
        if (n % 11 == 5)
        {

            cout << n << endl;
        }
    }
}