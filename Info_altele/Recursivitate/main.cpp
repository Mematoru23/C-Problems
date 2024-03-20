#include <iostream>
using namespace std;

/* 1.
int factorial(int n) {
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
*/

/*
int factorial(int n, int &f) {
    if (n <= 1)
        return 1;
    if (n > 1)
        f = n * factorial(n - 1, f);
    return f;
}
*/////////////////////////////////////

/* 2.
int cmmdc(int a, int b) {
    if (!b)
        return a;
    else
        return cmmdc(b, a % b);
}
*/

/*
int cmmdc(int a, int b, int &r) {
    if (!b)
        r = a;
    else
        r = cmmdc(b, a % b, r);
    return r;
}
*/////////////////////////////////////

/* 3.
int sumcif(int n) {
    if (n != 0)
        return n % 10 + sumcif(n / 10);
    return 0;
}
*/

/*
int sumcif(int n, int &s) {
    if (n < 10)
        s = n;
    else
        s = n % 10 + sumcif(n / 10, s);
    return s;
}
*////////////////////////////////////

/* 4.
int nr_cif_zero(int n) {
    if (n < 10) {
        if (n == 0)
            return 1;
        else
            return 0;
    }
    if (n % 10 == 0)
        return 1 + nr_cif_zero(n / 10);
    else
        return nr_cif_zero(n / 10);
}
*/

/*
int nr_cif_zero(int n, int &nr) {
    if (n < 10) {
        if (n == 0)
            return 1;
        else
            return 0;
    }
    if (n % 10 == 0)
        nr = 1 + nr_cif_zero(n / 10, nr);
    else
        nr = nr_cif_zero(n / 10, nr);
    return nr;
}
*//////////////////////////////////

/* 5.
int cnt_cif(int n, int k, int &c) {
    if (n > 0) {
        if (n % 10 >= k)
            c = 1 + cnt_cif(n / 10, k, c);
        else
            c = cnt_cif(n / 10, k, c);
    }
    return c;
}
*/

/*
int ok;
int F(int n, int a[], int &k, int ok) {
    if (ok == n)
        return -1;
    if (a[n - 1] % 2 == 0) {
        k = a[n - 1] * 10 + F(n - 1, a, k, ok);
    }
    else {
        k = F(n - 1, a, k, ok + 1);
    }
    return k;
}
*/

/* 6. Manna-Pnueli
int mp(int n) {
    if (n >= 12)
        return n - 1;
    else if (n < 12)
        return mp(mp(n + 2));
}
*/

int main() {
    int n, f, a, b, r, s, k, c, nr, v[10];
    /* 1.
    cin >> n;
    cout << factorial(n);
    cout << factorial(n, f);*/
    /* 2.
    cin >> a >> b;
    cout << cmmdc(a, b, r);*/
    /* 3.
    cin >> n;
    cout << sumcif(n, s);*/
    /* 4.
    cin >> n;
    cout << nr_cif_zero(n);
    cin >> n;
    cout << nr_cif_zero(n, nr);*/
    /* 5.
    cin >> n >> k;
    cout << cnt_cif(n, k, c);*/
    /*
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << F(n, v, k, 0);*/
    /* 6. Manna-Pnueli
    cin >> n;
    cout << mp(n);*/

}






