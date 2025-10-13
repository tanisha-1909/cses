#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
vector<int> tree[N];
bool matched[N];

int dfs(int u, int parent) {
    int res = 0;
    for (int v : tree[u]) {
        if (v == parent) continue;
        res += dfs(v, u);
    }

    for (int v : tree[u]) {
        if (v == parent) continue;
        if (!matched[u] && !matched[v]) {
            matched[u] = matched[v] = true;
            res++;
        }
    }

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    cout << dfs(1, 0) << "\n";
}
