#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int gcd(long long a, long long b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l, b;
        cin >> l >> b;
        int n = gcd(l, b);
        cout << (l / n) * (b / n) << endl;
    }
    return 0;
}
