#include <bits/stdc++.h>
using namespace std;

const int LOG = 20; 

int main() {
   

    int n, q;
    cin >> n >> q;

    vector<vector<int>> up(n + 1, vector<int>(LOG, -1));

   
    for (int i = 2; i <= n; i++) {
        int boss;
        cin >> boss;
        up[i][0] = boss;
    }

  
    for (int j = 1; j < LOG; j++) {
        for (int i = 1; i <= n; i++) {
            if (up[i][j - 1] != -1)
                up[i][j] = up[up[i][j - 1]][j - 1];
        }
    }

    while (q--) {
        int x, k;
        cin >> x >> k;

        int j = 0;
        while (k>0 && x!=-1) {
            if (k % 2 == 1) {
                x = up[x][j];
            }
            k = k / 2;
            j++;
        }

        cout << x << "\n";
    }

    return 0;
}
