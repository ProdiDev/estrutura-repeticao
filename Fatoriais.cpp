#include <iostream>
using namespace std;

int main (){

    int n, fn=1; 
    char op, operar;
    
    cout << "Qual fatorial deseja calcular? ";
    cin >> n;

    for(int i=1; i<=n; i++){

        if ( n == 0 ) {
            fn=1;
        }
        else {
            fn=fn*i;
        }
    }

    cout << "O fatorial de " << n << " eh: " << fn << endl;
    cout << "O que voce deseja operar com esse fatorial? *, /, +, - : ";
    cin >> op;

    if (op=='*'){
        int v;
        int result;
        int fn1=1;
        cout << "Certo, voce deseja uma mutiplicacao com o fatorial de " <<n <<" que tem como valor : " <<fn <<" e qual sera o fatorial a ser mutiplicado? ";
        cin >> v;

        cout << "Certo, estamos calculando o fatorial de " <<v <<"!........"<<endl;

        for(int i=1; i<=v; i++){

        if ( v == 0 ) {
            fn1=1;
        }
        else {
            fn1=fn1*i;
        }
    }

    cout << "O fatorial calculado e " <<fn1 <<endl;

    result = fn1*fn;
    cout << "O resultado dessa mutiplicacao de fatoriais e: " <<result;
    }



    else if (op=='/'){
        int v;
        int result;
        int fn1=1;
        cout << "Certo, voce deseja uma divisão com o fatorial de " <<n <<" que tem como valor : " <<fn <<" e qual sera o fatorial a ser dividido? ";
        cin >> v;

        cout << "Certo, estamos calculando o fatorial de " <<v <<"!........"<<endl;

        for(int i=1; i<=v; i++){

        if ( v == 0 ) {
            fn1=1;
        }
        else {
            fn1=fn1/i;
        }
    }

    cout << "O fatorial calculado e " <<fn1 <<endl;

    result = fn1/fn;
    cout << "O resultado dessa divisao de fatoriais e: " <<result;
    }



    else if (op=='+'){
        int v;
        int result;
        int fn1=1;
        cout << "Certo, voce deseja uma soma com o fatorial de " <<n <<" que tem como valor : " <<fn <<" e qual sera o fatorial a ser somado? ";
        cin >> v;

        cout << "Certo, estamos calculando o fatorial de " <<v <<"!........"<<endl;

        for(int i=1; i<=v; i++){

        if ( v == 0 ) {
            fn1=1;
        }
        else {
            fn1=fn1*i;
        }
    }

    cout << "O fatorial calculado e " <<fn1 <<endl;

    result = fn1+fn;
    cout << "O resultado dessa soma de fatoriais e: " <<result;
    }


    else if (op=='-'){
        int v;
        int result;
        int fn1=1;
        cout << "Certo, voce deseja uma subtracao com o fatorial de " <<n <<" que tem como valor : " <<fn <<" e qual sera o fatorial a ser subtraido? ";
        cin >> v;

        cout << "Certo, estamos calculando o fatorial de " <<v <<"!........"<<endl;

        for(int i=1; i<=v; i++){

        if ( v == 0 ) {
            fn1=1;
        }
        else {
            fn1=fn1*i;
        }
    }

    cout << "O fatorial calculado e " <<fn1 <<endl;

    result = fn1-fn;
    cout << "O resultado dessa subtracao de fatoriais e: " <<result;
    }
}