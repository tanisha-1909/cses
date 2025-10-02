#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    vector<long long> basis; // XOR basis
 
    for (long long x : a) {
        for (long long b : basis)
            x = min(x, x ^ b); // reduce using current basis
        if (x) basis.push_back(x);
    }
 
    // Now maximize XOR
    long long ans = 0;
    for (long long b : basis)
        ans = max(ans, ans ^ b);
 
    cout << ans << "\n";
    return 0;
}
