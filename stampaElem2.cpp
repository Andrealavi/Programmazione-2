#include <iostream>

using namespace std;

struct elem
{
    int n;
    elem *pun;
};

typedef elem *lista;

int head(lista l)
{
    return l->n;
}

lista tail(lista l)
{
    return l->pun;
}

void stampaLista(lista p)
{
    while (p != NULL)
    {
        cout << head(p) << endl;
        p = tail(p);
    }
}

int main()
{

    lista testa = new elem;
    testa->n = 3;

    lista p = new elem;
    p->n = 7;
    p->pun = NULL; // Ricorda di metterlo a NULL

    testa->pun = p;

    stampaLista(testa);

    return 0;
}