#include <iostream>

using namespace std;

int maxim = INT_MIN;
int maxRecursiv(int n, int v[1000])
{
    if (n == 0)
        return 0;
    maxRecursiv(n - 1, v);
    if (maxim < v[n]) maxim = v[n];
    return maxim;
}

int main()
{
    int v[5] = {0, 4, 2, 5, 3};
    cout << maxRecursiv(4, v);
}
