#include <iostream>

using namespace std;

int v[10000], n, nr, f[10000], val;
void citire()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
}

int main()
{
    citire();
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == i)
        {
            nr++;
            f[i] = -1;
        }
        else
        {
            if (f[i] != -1)
            {
                f[i] = -1;
                val = v[i];
                if (v[val] == i)
                {
                    f[val] = -1;
                    nr++;
                }
                else
                {
                    while (v[val] != i)
                    {
                        f[val] = -1;
                        val = v[val];
                    }
                    f[val] = -1;
                    nr++;
                }
            }
        }
    }
    cout << nr;
}
