/*
  Scrivere un programma che stampi il contenuto di un vettore di
  interi definito ed inizializzato a tempo di scrittura del programma
  stesso e che contiene almeno un elemento di valore -1. In
  particolare lo stesso vettore va stampato due volte, utilizzando
  ciascuna volta una funzione diversa. Le due funzioni di stampa
  devono avere un solo parametro formale, non devono utilizzare
  variabili globali, e devono stampare gli elementi del vettore
  fermandosi non appena incontrano l'elemento di valore -1 (senza
  stamparlo).

  La prima funzione non deve utilizzare l'operazione di selezione con
  indice, mentre la seconda non deve utilizzare n� l'operazione di
  selezione con indice n� alcuna variabile locale.

 */

#include <iostream>

using namespace std;

void stampaArray(int a[])
{
	for (int *p = a; *p != -1; p++)
	{
		cout << *p << endl;
	}
}

void stampa(int a[])
{
	for (; *a != -1; a++)
	{
		cout << *a << endl;
	}
}

int main()
{

	int a[] = {1, 2, 3, 4, 5, -1};

	stampaArray(a);

	cout << endl;

	stampa(a);

	return 0;
}
