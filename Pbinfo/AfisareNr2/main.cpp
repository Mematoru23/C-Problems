#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        v.push_back(i);
    for (auto i = v.begin(); i != v.end();  i++)
        cout << *i << " ";
    cout << "\n";
    for (auto i = v.rbegin(); i != v.rend(); i++)
        cout << *i << " ";
}
