#include <iostream>

using namespace std;
int n, x, y, ok, i, k,  t;
int main() {
    cin >> n;
    x = n;
    if (n != 0) {
        while (n != 0) {
        cin >> n;
        i++;
        y = n;
        if (x <= y) ok++;
        if (x == y) k++;
        if (x >= y) t++;
        x = n;
    }
    if (k + 1 == i) cout << "nemonoton";
    else if (i == ok + 1) cout << "crescator";
    else if (t == i) cout << "descrescator";
    else if (ok > 0 && ok < i) cout << "nemonoton";
    }
    else cout << "nemonoton";
}
