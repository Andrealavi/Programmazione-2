#include <iostream>
#include <cstring>

using namespace std;

#include "stringa.h"

int compare(tipoInf s1, tipoInf s2)
{
    return strcmp(s1, s2);
}

void copy(tipoInf &dest, tipoInf source)
{
    dest = new char[strlen(source)];
    strcpy(dest, source);
}

void print(tipoInf inf)
{
    cout << inf;
}