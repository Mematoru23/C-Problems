#include <iostream>

using namespace std;

int n, r, g, b, v[1000], k;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        k = 0;
        cin >> r >> g >> b;
        if (r > g && g < b && r < b)
        {
            while (r)
            {
                r--;
                b--;
                v[i]++;
            }
            if (g > b)
            {
                while (b)
                {
                    b--;
                    g--;
                    v[i]++;
                }
            }
            else
                while (g)
                {
                    g--;
                    b--;
                    v[i]++;
                }
        }
        if (r > g)
        {
            while (g)
            {
                r--;
                g--;
                v[i]++;
            }
            if (r > b)
            {
                while (b)
                {
                    r--;
                    b--;
                    v[i]++;
                }
            }
            else
            {
                while (r)
                {
                    r--;
                    b--;
                    v[i]++;
                }
            }
        }
        else if (r < g)
        {
            while (r)
            {
                r--;
                g--;
                v[i]++;
            }
            if (b < g)
            {
                while (b)
                {
                    b--;
                    g--;
                    v[i]++;
                }
            }
            else
            {
                while (g)
                {
                    g--;
                    b--;
                    v[i]++;
                }
            }
        }
        else if (r == g && r == b)
            v[i] = r;
        else if (r == b && g < b)
        {
            while (b != g)
            {
                r--;
                b--;
                v[i]++;
            }
            while (b != 0)
            {
                b--;
                g--;
                v[i]++;
            }
            while (r != 0)
            {
                r--;
                g--;
                v[i]++;
            }
            while (r != 0)
            {
                b--;
                r--;
                v[i]++;
            }
        }
        else if (r == g)
        {
            while (r)
            {
                r--;
                g--;
                v[i]++;
            }
        }
        else if (g == b)
        {
            while (g)
            {
                g--;
                b--;
                v[i]++;
            }
        }
    }
    v[n - 1]++;
    for (int i = 0; i < n; i++)
        cout << v[i] << "\n";
}
