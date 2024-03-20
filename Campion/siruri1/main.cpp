#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;
ifstream fin("siruri1.in");
ofstream fout("siruri1.out");

vector< pair<int, int> > v;

int sortbySec(const pair<int, int> &a, const pair<int, int> &b) {
    return (a.first < b.first);
}

int main() {
    int n;
    cin >> n;
    v.push_back(make_pair(0, 0));
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        v.push_back(make_pair(x, i));
    }
    sort(v.begin() + 1, v.end(), sortbySec);
    for (int i = 1; i <= n; i++)
        cout << v[i].second << " ";
}
