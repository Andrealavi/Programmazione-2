#include <iostream>

using namespace std;

void esercizio1()
{
    unsigned int n;

    cout << "Inserisci il numero da raddoppiare: ";
    cin >> n;
    cout << endl;

    cout << (n << 1) << endl;
}

void esercizio2()
{
    unsigned int n;

    cout << "Inserisci il numero: ";
    cin >> n;
    cout << endl;

    cout << (n & 1) << endl;
}

void esercizio3()
{
    unsigned int n, i;

    cout << "Inserisci il numero: ";
    cin >> n;
    cout << endl;

    cout << "Inserisci l'esponente: ";
    cin >> i;
    cout << endl;

    cout << (n << i) << endl;
}

void esercizio4()
{
    unsigned int n, i;

    cout << "Inserisci il numero: ";
    cin >> n;
    cout << endl;

    cout << "Inserisci l'esponente: ";
    cin >> i;
    cout << endl;

    cout << (n >> i) << endl;
}

void esercizio5()
{
    unsigned int j, i;

    cout << "Inserisci il numero: ";
    cin >> i;
    cout << endl;

    cout << "Inserisci il secondo numero: ";
    cin >> j;
    cout << endl;

    cout << (i >> (32 - j)) << endl;
}

void esercizio6()
{
    unsigned int j, i;

    cout << "Inserisci il numero: ";
    cin >> i;
    cout << endl;

    cout << "Inserisci il secondo numero: ";
    cin >> j;
    cout << endl;

    cout << (i << (32 - j)) << endl;
}

void esercizio7()
{
    unsigned int j, i, k;

    cout << "Inserisci il numero: ";
    cin >> i;
    cout << endl;

    cout << "Inserisci il secondo numero: ";
    cin >> j;
    cout << endl;

    k = i << (32 - j);

    cout << ((i >> j) | k) << endl;
}

void esercizio8()
{
    unsigned int j, i, k;

    cout << "Inserisci il numero: ";
    cin >> i;
    cout << endl;

    cout << "Inserisci il secondo numero: ";
    cin >> j;
    cout << endl;

    k = i >> (32 - j);

    cout << ((i << j) | k) << endl;
}

void esercizio9()
{
    unsigned int n;

    cout << "Inserisci il numero: ";
    cin >> n;
    cout << endl;

    cout << (n | 1) << endl;
}

void esercizio10()
{
    unsigned int n;

    cout << "Inserisci il numero: ";
    cin >> n;
    cout << endl;

    n = n | 1;

    cout << (n ^ 1) << endl;
}

int main()
{
    // esercizio1();
    // esercizio2();
    // esercizio3();
    // esercizio4();
    // esercizio5();
    // esercizio6();
    esercizio7();
    // esercizio8();
    // esercizio9();
    // esercizio10();

    return 0;
}