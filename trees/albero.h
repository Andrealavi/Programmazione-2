#include "stringa.h"

struct node
{
    tipoInf inf;
    node *parent;
    node *firstChild;
    node *nextSibling;
};

typedef node *tree;

node *newNode(tipoInf i);
void insertChild(tree p, tree c);
void insertSibling(node *n, tree t);

tipoInf getInfo(node *n);
node *getParent(node *n);
node *getFirstChild(node *n);
node *getNextSibling(node *n);

void printTree(tree t);