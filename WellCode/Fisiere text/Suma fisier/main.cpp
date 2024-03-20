#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f;
    f.open("donatii.in");
    int n, x[1000], sum = 0;
    f >> n;
    for(int i = 0; i < n; i++) f >> x[i];
    for(int i = 0; i < n; i++) sum += x[i];
    cout << sum;
    f.close();
}
