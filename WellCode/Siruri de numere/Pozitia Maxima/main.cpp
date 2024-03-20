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
    int i = 1;
    while (i <= m)
    {
        int st = 1, dr = n, mij = 0, nr = 0;
        mij = (dr + st) / 2 - 2;
        if (x[mij] > s[i])
        {
            dr = mij;
            while (st < dr)
            {
                if (s[i] == x[st])
                {
                    nr = st;
                    st++;
                }
                else st++;
            }
            cout << nr << " ";
        }
        else
        {
            st = mij;
            while (st <= dr)
            {
                if (s[i] == x[st])
                {
                    nr = st;
                    st++;
                }
                else st++;
            }
            cout << nr << " ";
        }
        i++;
    }
}
