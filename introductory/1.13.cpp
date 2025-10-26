#include <bits/stdc++.h>
using namespace std;

string dec2bin(int num, int n) {
    string res = "";
    if (num == 0) res = "0";  
    while (num > 0) {
        res += to_string(num % 2);
        num /= 2;
    }
    reverse(res.begin(), res.end());

   
    while ((int)res.size() < n)
        res = "0" + res;

    return res;
}

int main() {
    int n;
    cin >> n;

    int total = 1 << n; // 2^n

    for (int k = 0; k < total; k++) {
        int gray = k ^ (k >> 1);
        cout << dec2bin(gray, n) << endl;
    }
}
