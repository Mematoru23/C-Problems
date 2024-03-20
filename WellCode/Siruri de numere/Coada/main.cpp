#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n, m;
    queue<int> q;
    cin >> n >> m;
    int cont = n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;
        if (k == 1) {
            cont--;
            if (cont >= 0)
                q.pop();
            else
                cont = 0;
        }
        else {
            int x;
            cin >> x;
            q.push(x);
            cont++;
        }
    }
    cout << cont << "\n";
    for (int i = 0; i < q.size() + cont; i++) {
        cout << q.front() << " ";
        q.pop();
    }
}
