#include <iostream>

using namespace std;

int main()
{

    unsigned int x, n, maschera;

    cout << "Inserisci il numero: ";
    cin >> x;
    cout << endl;

    cout << "Inserisci il bit da controllare: ";
    cin >> n;
    cout << endl;

    maschera = 1 << (n - 1);

    if (!(x & maschera))
        cout << "Il bit non è settato" << endl;
    else
        cout << "Il bit è settato" << endl;

    return 0;
}