#include <iostream>
#include <cstring>
#include "tipo.h"

using namespace std;

/*******************************/
/* DEFINIZIONE MODULO "liste-tipo" */
/*******************************/

int compare(tipoInf s1, tipoInf s2)
{
    return s1 - s2;
}

void copy(tipoInf &dest, tipoInf source)
{
    dest = source;
}

void print(tipoInf s)
{
    cout << s << endl;
}