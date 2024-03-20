#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream g;
    g.open("maxim.out");
    int n, x[1000], mx = -1000;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> x[i];
    for(int i = 0; i < n; i++)
        if (mx < x[i])
            mx = x[i];
    g << mx;
    g.close();
}
