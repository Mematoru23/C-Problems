#include <iostream>

using namespace std;

int x[1000000];
int main()
{
    int n, s = 0, cs = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        cin >> x[i];
        s += x[i];
    }
    for (int i = 1; i <= n; i++)
        cs += i;
    cout << cs - s;
}
