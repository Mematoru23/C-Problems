#include <bits/stdc++.h>
using namespace std;

char s[100000], v[100000];
int n, nr;
void ordonareLitere(char s[], int n)
{
    sort(s, s + n);
}

int main()
{
    int ok = 1;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (ok == 1)
        {
            cin.getline(v, 100000);
            ordonareLitere(v, strlen(v));
            ok = 0;
        }
        cin.getline(s, 100000);
        ordonareLitere(s, strlen(s));
        if (strcmp(s, v) == 0)
            nr++;
    }
    cout << nr;
}
