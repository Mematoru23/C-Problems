#include <iostream>

using namespace std;

struct Elev
{
    double medie;
    char nume[21];
};

void sortare(int n, Elev elevi[30])
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (elevi[i].medie > elevi[j].medie)
            {
                int aux = elevi[i].medie;
                elevi[i].medie = elevi[j].medie;
                elevi[j].medie = aux;
            }
}

int main()
{
    int n;
    Elev elevi[30];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> elevi[i].medie >> elevi[i].nume;
    sortare(n, elevi);
    for (int i = 0; i < n; i++)
        cout << elevi[i].medie << " " << elevi[i].nume << "\n";
}
