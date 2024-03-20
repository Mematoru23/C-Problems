#include <iostream>

using namespace std;

int generareTriunghi(int n)
{
    if (n == 0)
        return 0;
    generareTriunghi(n - 1);
    for (int i = 1; i <= n; i++)
        cout << i << " ";
    cout << "\n";
    return 0;
}

int main()
{
    generareTriunghi(4);
}
