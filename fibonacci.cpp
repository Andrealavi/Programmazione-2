#include <iostream>

using namespace std;

int fibonacciRecursive(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int fibonacciIterative(int n)
{
    if (n == 0 || n == 1)
        return 1;

    int fibPrec1 = 1, fibPrec2 = 1, fibNum;

    for (int i = 1; i < n; i++)
    {
        fibNum = fibPrec1 + fibPrec2;

        fibPrec2 = fibPrec1;
        fibPrec1 = fibNum;
    }

    return fibNum;
}

int main()
{

    int n;

    cout << "Inserisci la posizione del numero di fibonacci che vuoi calcolare: ";
    cin >> n;
    cout << endl;

    cout << fibonacciRecursive(n) << endl;
    cout << fibonacciIterative(n) << endl;

    return 0;
}