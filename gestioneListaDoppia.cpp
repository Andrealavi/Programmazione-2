#include <iostream>
#include <cstring>

using namespace std;

const int MAXNUMCARATTERI = 50;

struct elem
{
    char url[MAXNUMCARATTERI];
    elem *prev;
    elem *pun;
};

typedef elem *lista;

char *head(lista l)
{
    return l->url;
}

lista tail(lista l)
{
    return l->pun;
}

lista insertElem(lista l, elem *e)
{
    e->pun = l;

    if (l != NULL)
    {
        l->prev = e;
    }

    e->prev = NULL;
    return e;
}

lista deleteElem(lista l, elem *e)
{
    if (e == l)
    {
        l = tail(l);
    }
    else
    {
        (e->prev)->pun = (e->pun);
        if (e->pun != NULL)
            (e->pun)->prev = (e->prev);
    }

    delete e;
    return l;
}

lista search(lista l, char *url)
{
    while (l != NULL)
    {
        if (strcmp(head(l), url) == 0)
        {
            return l;
        }
        else
        {
            l = tail(l);
        }
    }

    return l;
}

void stampaLista(lista l)
{
    while (l != NULL)
    {
        cout << head(l) << endl;
        l = tail(l);
    }
}

void navigate(lista l)
{
    char url[MAXNUMCARATTERI];

    cout << "Inserire l'url da cercare:";
    cin >> url;
    cout << endl;

    lista listaDaNavigare = search(l, url);

    if (listaDaNavigare == NULL)
    {
        cout << "Url non trovato" << endl;
        return;
    }

    char op;

    while (true)
    {

        cout << "F) Va avanti\nB) va indietro\nS) stop\n"
             << endl;

        cout << "Inserisci l'operazione da eseguire: ";
        cin >> op;
        cout << endl;

        switch (op)
        {
        case 'F':
            if (tail(listaDaNavigare) == NULL)
            {
                cout << "Hai raggiunto la fine della lista" << endl;
                break;
            }
            listaDaNavigare = tail(listaDaNavigare);
            cout << head(listaDaNavigare) << endl;
            break;
        case 'B':
            if ((listaDaNavigare->prev) == NULL)
            {
                cout << "Hai raggiunto l'inizio della lista" << endl;
                break;
            }
            listaDaNavigare = listaDaNavigare->prev;
            cout << head(listaDaNavigare) << endl;
            break;
        case 'S':
            return;

        default:
            break;
        }
    }
}

lista creaLista(int n)
{
    if (n == 0)
        return NULL;

    lista l = new elem;
    l->pun = NULL;
    l->prev = NULL;

    cout << "Inserisci url: ";
    cin >> l->url;
    cout << endl;

    for (int i = 0; i < (n - 1); i++)
    {
        elem *e = new elem;

        cout << "Inserisci url: ";
        cin >> e->url;
        cout << endl;

        e->pun = NULL;

        l = insertElem(l, e);
    }

    return l;
}

int main()
{

    int n;

    cout << "Inserisci il numero di elementi della lista: ";
    cin >> n;
    cout << endl;

    lista l = creaLista(n);

    stampaLista(l);

    navigate(l);

    return 0;
}