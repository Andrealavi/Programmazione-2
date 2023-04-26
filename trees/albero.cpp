#include <iostream>
#include "albero.h"

using namespace std;

tipoInf getInfo(node *n)
{
    return n->inf;
}

node *getParent(node *n)
{
    return n->parent;
}

node *getFirstChild(node *n)
{
    return n->firstChild;
}

node *getNextSibling(node *n)
{
    return n->nextSibling;
}

node *newNode(tipoInf i)
{
    tree subTree = new node;

    copy(subTree->inf, i);

    subTree->parent = NULL;
    subTree->firstChild = NULL;
    subTree->nextSibling = NULL;

    return subTree;
}

void insertChild(tree p, tree c)
{
    c->parent = p;
    c->nextSibling = getFirstChild(p);
    p->firstChild = c;
}

void insertSibling(node *n, tree t)
{
    t->parent = getParent(n);
    t->nextSibling = getNextSibling(n);
    n->nextSibling = t;
}

void printTree(tree t)
{
    if (t != NULL)
    {
        cout << getInfo(t) << endl;
        if (getFirstChild(t) != NULL)
            printTree(t->firstChild);
        if (getNextSibling(t) != NULL)
            printTree(t->nextSibling);
    }
}