#include <iostream>

using namespace std;

int main()
{
    int v[100], n, x, minim;
    const int MAX = 10000;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
    {
        x = v[i];
        minim = MAX;
        if (i % 2 == 0)
        {
            for (int j = i - 1; j > 0; j--)
                if (v[j] < minim && v[j] > x)
                    minim = v[j];
            if (minim != MAX)
                cout << minim << " ";
            else
                cout << -1 << " ";
        }
        else
        {
            for (int j = i + 1; j <= n; j++)
                if (v[j] < minim && v[j] > x)
                    minim = v[j];
            if (minim != MAX)
                cout << minim << " ";
            else
                cout << -1 << " ";
        }
    }
}
