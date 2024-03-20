#include <iostream>

using namespace std;

int n, v[100], s[100], m;
void gen(int lg, int s[100], int m)
{
    if (lg == n + 1)
    {
        for (int i = 1; i <= m; i++)
            cout << s[i];
        cout << "\n";
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i - 1] == 0)
        {
            s[lg] = i;
            v[i - 1] = 1;
            gen(lg + 1, s, m);
            v[i - 1] = 0;
        }
    }
}

int main()
{
    cin >> n >> m;
    gen(1, s, m);
}
