#include <bits/stdc++.h>
using namespace std;

int diameter=0;


int calcheight(int node, int parent, vector<vector<int>>& adj) {
    int max1 = 0, max2 = 0;

    for (int child : adj[node]) {
        if (child == parent) continue;
        int h = calcheight(child, node, adj);
        if (h>max1) {
            max2=max1;
            max1=h;
        } else if (h>max2) {
            max2 = h;
        }
    }
    diameter = max(diameter, max1 + max2);
    return max1 + 1;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1);

    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

    calcheight(1, -1, adj);
    cout << diameter << endl;

    return 0;
}
