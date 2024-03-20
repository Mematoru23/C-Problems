#include <iostream>

using namespace std;

int main()
{
    int n, value = 0, d = 2;
    cin >> n;
    for (int i = 1; i <= n; i++)
        value += i * d;
    cout << "Suma este " << value;
}
