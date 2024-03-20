#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int esteLitera(char c)
{
    if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
        return 1;
    return 0;
}

int v[100], k = 1, ok;
int nrLitere(char s[100])
{
    int n = strlen(s);
    float medie = 0, kk = 0;
    for (int i = 0; i < n; i++)
    {
        if (esteLitera(s[i]))
            v[k]++;
        if (!esteLitera(s[i]))
            k++;
    }
    if (k - 1 == n)
        cout << fixed << setprecision(2) << (float)medie;
    else
    {
        for (int i = 0; i <= k; i++)
        {
            medie += v[i];
            if (v[i] > 0)
                kk++;
        }
        cout << fixed << setprecision(2) << (float)medie / kk;
    }
}

int main()
{
    char s[100];
    cin.getline(s, 100);
    int n = strlen(s);
    float medie = 0;
    if (n == 0)
        cout << fixed << setprecision(2) << (float)medie;
    else
        nrLitere(s);
}
