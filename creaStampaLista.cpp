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

lista insertElem(lista l, elem *e)
{
    e->pun = l;
    return e;
}

lista deleteElem(lista l, elem *e)
{
    if (l == e)
    {
        l = tail(l);
    }
    else
    {
        elem *l1 = l;
        while (l1 != NULL)
        {
            if (tail(l1) != e)
            {
                l1 = tail(l1);
            }
        }
        l1->pun = tail(e);
    }

    delete e;
    return l;
}

void eliminalista(lista &testa)
{
    while (testa != NULL)
    {
        testa = deleteElem(testa, testa);
    }
}

lista search(lista l, int v)
{
    while (l != NULL)
    {
        if (head(l) == v)
            return l;
        else
            l = tail(l);
    }

    return l;
}

lista creaLista(int n)
{
    if (n == 0)
        return NULL;

    lista l = new elem;
    l->pun = NULL;

    cout << "Inserisci elemento: ";
    cin >> l->n;
    cout << endl;

    for (int i = 0; i < (n - 1); i++)
    {
        elem *e = new elem;

        cout << "Inserisci elemento: ";
        cin >> e->n;
        cout << endl;

        e->pun = NULL;

        l = insertElem(l, e);
    }

    return l;
}

int main()
{
    int numero;

    cout << "Inserisci la lunghezza della lista: ";
    cin >> numero;
    cout << endl;

    lista l = creaLista(numero);

    stampaLista(l);

    cout << search(l, 2);
    cout << endl
         << search(l, 5) << endl;

    return 0;
}