/*#include <iostream>
using namespace std;

int main () {

    float a=0, b=1, maior=0, menor=99999;

    for (int i=0; i <= 9; i++)
    {
        cout << "De entrada na altura do individuo " <<b++ <<endl;
        cin >> a;
        if (a>maior){
            maior=a;
        }
        if (a<menor){
            menor=a;
        }
    }

    cout << "A altura do menor individuo e " <<menor <<" metros. Ja o maior individuo e: " <<maior <<" metros." <<endl;

}*/

#include <iostream>
using namespace std;

int main()
{

  float a = 0, maior = 0, menor = 0;

  for (int i = 0; i <= 9; i++)
  {
    cout << "De entrada na altura do individuo " << i + 1 << endl;
    cin >> a;

    if (i == 0)
    {
      maior = a;
      menor = maior;
    }
    else if (a > maior)
    {
      maior = a;
    }
    else if (a < menor)
    {
      menor = a;
    }
  }

  cout << "A altura do menor individuo e " << menor << " metros. Ja o maior individuo e: " << maior << " metros." << endl;
}