#include <iostream>

using namespace std;

int x[100], i, j, n, maxim;
int main()
{
    cin >> n;
    //caut maximul si urmaresc pozitia acestuia
    while (j < n) {
        cin >> x[j];
        if (maxim < x[j]) {
            maxim = x[j];
            i = j;
        }j++;
    }
    int p = i, ok = 1;
    //verific daca elementele de la pozitia maximului
    //la 0 sunt ordonate cum trebuie, alfel ies din functie cu break;
    while (i > 0) {
        if (x[i] <= x[i - 1]) {
            ok = 0;
            break;
        }i--;
    }
    i = p;
    //daca sunt ordonate cum trebuie de la pozitia maximului la 0
    //verific acum daca sunt ordonate cum trebuie de la pozitia maximului la nr de elemente
    int k = 1;
    if (ok == 1) {
        while (i < n) {
            if (x[i] <= x[i + 1]) {
                k = 0;
                break;
            }i++;
        }
    }
    if (x[0] == maxim || x[n - 1] == maxim) cout << 0; //daca primul element sau ultimul e maxim afisez 0
    else if ((ok == 1 && k == 1) || (x[0] == 0) || (x[n-1] == 0)) cout << 1;
    else cout << 0;
}
