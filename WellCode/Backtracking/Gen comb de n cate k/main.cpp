#include <iostream>

using namespace std;

int v[100], k, n, ok, m;
void init(int k)
{
    v[k] = 0;
}

int valid(int k)
{
    for (int i = 1; i < k; i++)
    {
        if (v[i] == v[k]) return 0;
        if (v[k - 1] > v[k]) return 0;
    }
    return 1;
}

int succ(int k)
{
    if (v[k] < n)
    {
        v[k]++;
        return 1;
    }
    else
        return 0;
}

int sol(int k, int m)
{
    return k == m;
}

void show(int k)
{
    for (int i = 1; i <= m; i++)
        cout << v[i] << " ";
    cout << "\n";
}

int BT(int k, int m)
{
    init(k);
    while (succ(k))
        if (valid(k))
            if (sol(k, m)) show(k);
        else BT(k + 1, m);
}

int main()
{
    cin >> n >> m;
    BT(1, m);
}
