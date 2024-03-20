#include <iostream>
#include <limits>

using namespace std;

int x[1000][1000], n, m;
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> x[i][j];
    int maxim = numeric_limits<int>::min(), p = 0;
    for (int j = 0; j < m; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += x[i][j];
        if (maxim < sum && maxim != sum)
        {
            maxim = sum;
            p = j;
        }
    }
    for (int i = 0; i < n; i++)
        cout << x[i][p] << " ";
}
