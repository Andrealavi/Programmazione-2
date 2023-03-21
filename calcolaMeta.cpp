#include <iostream>
using namespace std;

double calcolaMeta(double valore)
{
	return valore / 2.0;
}

int main()
{
	double valore;
	cout << "Inserisci un valore: ";
	cin >> valore;
	double resto = calcolaMeta(valore);
	cout << "La meta del numero e': " << resto << endl;
	return 0;
}
