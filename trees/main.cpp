#include <iostream>
#include <algorithm>
#include "codaBfs.h"

using namespace std;

void serialize(tree t)
{
    if (t != NULL)
    {
        cout << "(" << getInfo(t);
        serialize(getFirstChild(t));
        cout << ")";
        serialize(getNextSibling(t));
    }
}

int height(tree t)
{
    if (t != NULL && getFirstChild(t) != NULL)
    {
        return max(1 + height(getFirstChild(t)), height(getNextSibling(t)) - 1);
    }
    else
    {
        return 0;
    }
}

int dimensione(tree t)
{
    codaBFS c = newQueue();
    c = enqueue(c, t);

    int dim = 0;

    while (!isEmpty(c))
    {
        node *n = dequeue(c);
        dim++;
        tree t1 = getFirstChild(n);

        while (t1 != NULL)
        {
            c = enqueue(c, t1);
            t1 = getNextSibling(t1);
        }
    }

    return dim;
}

int main()
{

    char *nomePadre = "Luca";
    tree t = newNode(nomePadre);

    nomePadre = "Paolo";

    t->firstChild = newNode(nomePadre);

    node *child = getFirstChild(t);

    nomePadre = "Elena";
    child->firstChild = newNode(nomePadre);

    nomePadre = "Sofia";
    child->firstChild->nextSibling = newNode(nomePadre);

    nomePadre = "Marco";
    child->nextSibling = newNode(nomePadre);

    nomePadre = "Lucia";
    child = getNextSibling(child);
    child->firstChild = newNode(nomePadre);

    nomePadre = "Anna";
    child->nextSibling = newNode(nomePadre);

    serialize(t);
    cout << endl;

    cout << height(t) << endl;
    cout << dimensione(t) << endl;

    return 0;
}
