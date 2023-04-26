#include <iostream>
#include <algorithm>
#include "albero.h"

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
    if (t != NULL)
    {
        return max(1 + height(getFirstChild(t)), height(getNextSibling(t)) - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{

    char *nomePadre = "Luca";
    tree t = newNode(nomePadre);

    nomePadre = "Paolo";

    t->firstChild = newNode(nomePadre);

    node *child = getFirstChild(t);

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

    return 0;
}
