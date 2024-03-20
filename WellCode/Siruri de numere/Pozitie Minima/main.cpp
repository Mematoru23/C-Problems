#include <iostream>

using namespace std;

int main()
{
    int x[10000], s[100], n, m;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i];
    cin >> m;
    for (int i = 1; i <= m ; i++)
        cin >> s[i];
    int i = 1, mij = 0, dr, st;
    mij = (1 + n) / 2;
    while (i <= m)
    {
        int nr = 0;
        st = 1, dr = n;
        if (s[i] < x[mij])
        {
            dr = mij;
            while (dr >= st)
            {
                if (x[dr] == s[i])
                {
                    nr = dr;
                    break;
                }
                dr--;
            }
            cout << nr << " ";
        }
        else
        {
            st = mij;
            while (dr >= st)
            {
                if (x[dr] == s[i])
                {
                    nr = dr;
                    break;
                }
                dr--;
            }
            cout << nr << " ";
        }
        i++;
    }
}
