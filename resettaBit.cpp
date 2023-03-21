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

    x ^= maschera;

    cout << "Il nuovo numero è: " << x << endl;

    return 0;
}