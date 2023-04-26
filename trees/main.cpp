#include <iostream>
#include "albero.h"

using namespace std;

int main()
{

    const int n = 3;

    tipoInf nomePadre;

    cout << "Inserisci nome padre: ";
    cin >> nomePadre;
    cout << endl;

    tree t = newNode(nomePadre);

    for (int i = 0; i < n; i++)
    {
        tipoInf nome;

        cout << "Inserisci nome figlio: ";
        cin >> nome;
        cout << endl;

        node *child = newNode(nome);
        insertChild(t, child);

        if (i == 1)
        {
            tipoInf nomeFiglio;

            cout << "Inserisci nome figlio del sibling: ";
            cin >> nomeFiglio;
            cout << endl;

            node *siblingChild = newNode(nomeFiglio);
            insertChild(getFirstChild(t), siblingChild);
        }
    }

    printTree(t);

    return 0;
}
