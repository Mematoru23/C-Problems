#include <iostream>

using namespace std;

int generareTriunghiDesc(int n)
{
    if (n == 0)
        return 0;
    for (int i = 1; i <= n; i++)
        cout << i << " ";
    cout << "\n";
    generareTriunghiDesc(n - 1);
    return 0;
}

int main()
{
    generareTriunghiDesc(4);
}

