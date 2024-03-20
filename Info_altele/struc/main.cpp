#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
ifstream fin("cheltuieli.in");

vector <int> v[10];
int main() {
	int x, k = 1, nmax = 0;
	while (fin >> x) {
		v[x % 10].push_back(k);
		k++;
	}
	for (int i = 0; i < 10; i++)
		if (v[i].size())
			if (v[i].size() > nmax)
				nmax = v[i].size();
	for (int i = 0; i < 10; i++)
		if (v[i].size())
			if (v[i].size() == nmax)
				cout << v[i].size();
}
