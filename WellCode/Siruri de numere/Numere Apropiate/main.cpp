#include <iostream>

using namespace std;

int main()
{
    int x[100], n, y;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i];
    for (int i = 1; i <= n; i++)
    {
        y = 1000;
        for (int j = 1; j <= n; j++)
        {
            if (x[i] < x[j] && x[j] < y) y = x[j];
        }
        if (y > x[i] && y < 1000) cout << y << " ";
        else cout << -1 << " ";
    }
}
