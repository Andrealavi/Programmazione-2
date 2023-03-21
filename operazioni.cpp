#include <iostream>

using namespace std;

int somma(const int &n1, const int &n2)
{
    return n1 + n2;
}

int differenza(const int &n1, const int &n2)
{
    return n1 - n2;
}

int prodotto(const int &n1, const int &n2)
{
    return n1 * n2;
}

int quoziente(const int &n1, const int &n2)
{
    return n1 / n2;
}

int main()
{

    int operazione, n1, n2;
    int (*operazioni[4])(const int &, const int &) = {somma, differenza, prodotto, quoziente};

    cout << "Operazioni: " << endl;
    cout << "1. somma" << endl;
    cout << "2. differenza" << endl;
    cout << "3. prodotto" << endl;
    cout << "4. quoziente" << endl;

    cout << "Inserisci il primo numero: ";
    cin >> n1;
    cout << endl;

    cout << "Inserisci il secondo numero: ";
    cin >> n2;
    cout << endl;

    cout << "Inserisci l'operazione desiderata: ";
    cin >> operazione;
    cout << endl;

    cout << operazioni[operazione - 1](n1, n2) << endl;

    return 0;
}