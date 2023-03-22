#include <iostream>

using namespace std;

float pow(float n, int exp)
{
    if (exp == 1)
        return n;

    return n * pow(n, exp - 1);
}

void fromNto1(int n)
{
    if (n > 0)
        cout << n << endl;

    return fromNto1(n - 1);
}

void from1toN(int n)
{
    if (n == 1)
    {
        cout << n << endl;
    }
    else
    {
        from1toN(n - 1);
        cout << n << endl;
    }
}

int main()
{

    cout << pow(2, 5) << endl;

    from1toN(6);
    cout << endl;
    fromNto1(6);

    return 0;
}