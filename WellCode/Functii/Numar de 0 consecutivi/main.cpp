#include <iostream>

using namespace std;

int cv[1000000], kv;
int zeroCons(int n, int v[1000000])
{
    int maxim = 0, i = 0;
    while (i < n)
    {
        if (v[i] != 0)
            i++;
        else
        {
            while (v[i] == 0 && i < n)
            {
                cv[kv]++;
                i++;
            }
            kv++;
        }
        if (maxim <= cv[kv - 1])
            maxim = cv[kv - 1];

    }
    return maxim;
}

int v[1000000];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << zeroCons(n, v);
}
