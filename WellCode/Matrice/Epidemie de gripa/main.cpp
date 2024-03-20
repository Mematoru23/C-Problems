#include <iostream>
#include <math.h>
using namespace std;

int mt[500][500], n, m, x, y;
int main()
{
    cin >> n >> m;
    cin >> x >> y;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            mt[i][j] = abs(x - i) + abs(y - j);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << mt[i][j] << " ";
        cout << "\n";
    }
}
