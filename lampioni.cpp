#include <iostream>

using namespace std;

void cambiaStato(unsigned int &lampioni, const unsigned int n)
{
    unsigned int maschera = 1 << (n);

    lampioni ^= maschera;
};

void stampaLampioni(unsigned int &lampioni, unsigned int numLampioni)
{
    for (unsigned int i = 0; i < numLampioni; i++)
    {
        if ((lampioni & (1 << i)))
            cout << (i) << " Funzionante" << endl;
        else
            cout << (i) << " Guasto" << endl;
    }

    cout << endl;
}

bool risparmioEnergetico(unsigned int &lampioni, unsigned int numLampioni)
{
    for (unsigned int i = 0; i < numLampioni; i++)
    {
        if (i % 2 == 0 && !(lampioni & (1 << i)))
            return false;
        else if (i % 2 != 0 && (lampioni & (1 << i)))
            return false;
    }

    return true;
}

int main()
{

    unsigned int lampioni = 255, n;
    char input;
    do
    {
        cout << "G Segnalare guasto al lampione \n";
        cout << "R Riparazione \n";
        cout << "L Stampa Lista \n";
        cout << "K Controlla Risparmio \n";
        cout << "T Termina \n";

        cout << "Inserisci azione: ";
        cin >> input;
        cout << endl;

        switch (input)
        {
        case 'G':
            cout << "Inserisci il lampione da controllare: ";
            cin >> n;
            cout << endl;

            if (lampioni & (1 << (n)))
                cambiaStato(lampioni, n);
            break;
        case 'R':
            cout << "Inserisci il lampione da controllare: ";
            cin >> n;
            cout << endl;

            if (!(lampioni & (1 << (n))))
                cambiaStato(lampioni, n);
            break;
        case 'L':
            stampaLampioni(lampioni, 8);
            break;
        case 'K':
            if (risparmioEnergetico(lampioni, 8))
                cout << "SI" << endl;
            break;
        case 'T':
            return 0;
        default:
            break;
        }
    } while (true);

    return 0;
}