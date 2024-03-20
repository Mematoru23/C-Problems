#include <iostream>
#include <string.h>
using namespace std;

char s[100000], ls[3] = {'a', 'b', 'c'}, cs[100000];
int n, lg, ok, ck, k;
int main()
{
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cin.getline(s, 100000);
        k = 0;
        ok = 1;
        lg = strlen(s);
        for (int j = 0; j < lg; j++)
            if (s[j] == s[j + 1] && s[j] != '?' && s[j + 1] != '?')
            {
                ok = 0;
                break;
            }
        if (ok == 0)
        {
            cs[ck++] = '-';
            cs[ck++] = '1';
            cs[ck++] = ' ';
            continue;
        }
        for (int j = 0; j < lg; j++)
        {
            k = 0;
            if (s[j] == '?')
            {
                if (s[j] != '?')
                {
                    while (ls[k] == s[j - 1])
                        k++;
                    s[j] = ls[k];
                }
                else
                {
                    while (ls[k] == s[j - 1] || ls[k] == s[j + 1])
                        k++;
                    s[j] = ls[k];
                }
            }
        }
        for (int j = 0; j < lg; j++)
            cs[ck++] = s[j];
        cs[ck++] = ' ';
    }
    for (int i = 0; i < ck; i++)
        if (cs[i] != ' ' || cs[i] == '-' && cs[i + 1] == '1')
            cout << cs[i];
        else
            cout << "\n";
}
