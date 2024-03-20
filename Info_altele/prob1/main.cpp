#include<iostream>
#include <cstring>
using namespace std;

unsigned ex(unsigned n) {
  unsigned a;
  if (n == 0) return 9;
  else {
    a = ex(n / 10);
    cout << a << "\n";
    if (n % 10 < a)
    {
        cout << n % 10 << "-";
        return n % 10;
    }

    return a;
  }
}

int main() {
  cout << ex(256);
}
