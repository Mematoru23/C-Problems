#include <iostream>
using namespace std;

int s[100000], n, m, x, t, k;
void push (int s[], int &k, int x) {
    s[k++] = x;
}

int pop (int s[], int &k) {
    return s[k--];
}

int main() {

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        t++;
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> k;
        if (k == 1) {
            cin >> x;
            push(s, n, x);
            t++;
        }
        else if (k == 2) {
            pop(s, n);
            t--;
        }
    }
    cout << t << "\n";
    for (int i = 0; i < t; i++)
        cout << s[i] << " ";
}
