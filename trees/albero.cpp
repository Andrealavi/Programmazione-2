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
    if (n->firstChild != NULL)
    {
        return n->firstChild;
    }
    else
    {
        return NULL;
    }
}

node *getNextSibling(node *n)
{
    if (n->nextSibling != NULL)
    {
        return n->nextSibling;
    }
    else
    {
        return NULL;
    }
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
