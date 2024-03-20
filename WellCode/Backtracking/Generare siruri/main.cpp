#include <iostream>
#include <cstring>
using namespace std;

int x[100], n, k, m;
char s[100] = {0, 'a', 'b', 'c' , 'd', 'e', 'f', 'g', 'h' , 'i', 'j', 'k', 'l', 'm' , 'n', 'o', 'p', 'q', 'r' , 's', 't', 'u', 'v', 'x', 'y', 'z'};
char voc[10] = {'a', 'e', 'i', 'o', 'u'};
void init(int k)
{
    x[k] = 0;
}

void show(int k)
{
    for(int i = 1; i <= k; i++)
        cout << s[x[i]];
    cout << "\n";
}

int valid(int k)
{
    for (int i = 1; i < k; i++)
    {
        if (x[i] == x[k])
            return 0;
        if (strchr(voc, s[x[k - 1]]) && strchr(voc, s[x[k]]))
            return 0;
    }
    return 1;
}

int succ(int k)
{
    if(x[k] < n)
    {
        x[k]++;
        return 1;
    }
    else return 0;
}

int sol(int k)
{
    return k == n;
}

void BT(int n, int k = 1)
{
    init(k);
    while(succ(k))
        if(valid(k))
            if(sol(k))
                show(k);
        else BT(n, k+1);
}

int main()
{
    cin >> n;
    BT(n);
}
