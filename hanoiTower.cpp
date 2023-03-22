#include <iostream>

using namespace std;

void hanoi(int n, char pioloS, char pioloD, char pioloA)
{
    if (n == 1)
    {
        cout << "Sposto il disco da " << pioloS << " a " << pioloD << endl;
        return;
    }

    hanoi(n - 1, pioloS, pioloA, pioloD);

    cout << "Sposto il disco da " << pioloS << " a " << pioloD << endl;

    hanoi(n - 1, pioloA, pioloD, pioloS);
}

int main()
{
    int n;

    cout << "Inserisci il numero di dischi: ";
    cin >> n;
    cout << endl;

    hanoi(n, 'A', 'C', 'B');

    return 0;
}