#include <bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;

int modPow(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

signed main() {
    int n;
    cin >> n;
    cout << modPow(2, n) << endl;
}
