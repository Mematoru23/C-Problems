#include <iostream>
#include <string>
using namespace std;

int n;

void backtr(int curr, string s) {
    if (curr == 0) {
        for (int i = 0; i < s.size(); i++)
            cout << s[i] << " ";
        cout << "\n";
    }
    for (int i = 1; i < n; i++)
        if (i <= curr)
            backtr(curr - i, s + to_string(i));
}

int main() {
    cin >> n;
    backtr(n, "");
    return 0;
}
