#include <iostream>

using namespace std;

int sommaN(const int n, int (*fun)(int))
{
    int somma = 0;

    for (int i = 0; i <= n; i++)
    {
        somma += fun(i);
    }

    return somma;
}

int quadrato(const int n)
{
    return n * n;
}

int cubo(const int n)
{
    return n * n * n;
}

int main()
{

    int n;

    cout << "Inserisci il numero di elementi: ";
    cin >> n;
    cout << endl;

    cout << sommaN(n, quadrato) << endl;
    cout << sommaN(n, cubo) << endl;

    return 0;
}