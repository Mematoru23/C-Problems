#include <iostream>
#include <math.h>
using namespace std;

int v[1000], k = 1;
int main()
{
    int t, x, y;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> x >> y;
        int cx = x;
        if (x > 1)
        {
            while (cx > y)
                cx -= 1;
            while (cx < y)
                cx +=1 ;
            if (cx == y)
                v[k] = 1;
            else
                v[k] = 0;
        }
        else if (x == y)
        {
            v[k] = 1;
        }
        else if (x == 1)
        {
            x = (3 * x) / 2;
            if (x == y)
            {
                v[k] = 1;
                break;
            }
            else
                v[k] = 0;
        }
        k++;
    }
    for (int i = 1; i < k; i++)
        if (v[i] == 0)
            cout << "NO\n";
        else cout << "YES\n";
}
