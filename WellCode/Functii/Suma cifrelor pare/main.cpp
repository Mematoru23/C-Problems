#include <iostream>

using namespace std;

int sumaCifrePare(int nr)
{
    int s = 0;
    while (nr)
    {
        if ((nr % 10) % 2 == 0)
            s += nr % 10;
        nr /= 10;
    }
    return s;
}

int main()
{
    cout << sumaCifrePare(342);
}
