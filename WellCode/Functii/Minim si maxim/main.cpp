#include <iostream>

using namespace std;

void minMax(int n, int v[100], int &mi, int &ma)
{
    mi = 101;
    ma = -101;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > ma)
            ma = v[i];
        if (v[i] < mi)
            mi = v[i];
    }
}

int main()
{
    int n, v[100], mi, ma;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    minMax(n, v, mi, ma);
    cout << mi << " " << ma;
}
