#include <bits/stdc++.h>
#include <vector>
using namespace std;

void maxProd(vector<int> v, int n)
{
    sort(v.begin(), v.end());
    int a = v[0], b = v[1], maxim = -100000;
    if (a * b > v[n - 1] * v[n - 2])
        maxim = a * b;
    else
        maxim = v[n - 1] * v[n - 2];
    cout << maxim;
}

int main()
{
    int n, x, maxim = -1000000;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        vec.push_back(x);
    }
    maxProd(vec, n);
}
