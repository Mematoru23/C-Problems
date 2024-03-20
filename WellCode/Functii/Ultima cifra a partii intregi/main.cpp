#include <iostream>
#include <math.h>
using namespace std;

double ultimaCifraDinPI(double nr)
{
    nr = floor(nr);
    return fmod(nr, 10);
}

int main()
{
    int nr;
    cin >> nr;
    cout << ultimaCifraDinPI(nr);
}
