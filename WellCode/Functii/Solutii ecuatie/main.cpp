#include <iostream>

using namespace std;

int x, y, z, c, cx, cy;
void afisareSolutii(int c)
{
    cin >> c;
    z = c;
    while (x <= c / 2)
    {
        while (y <= z && x + y + z == c)
        {
            cout << x << " " << y << " " << z << "\n";
            y++;
            z--;
        }
        cx++;
        cy++;
        z = c - cx - cy;
        x = cx;
        y = cy;
    }

}

int main()
{
    afisareSolutii(c);
}
