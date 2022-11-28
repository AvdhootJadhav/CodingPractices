#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
typedef long long ll;

vector < vector < int >> adj;
vector < bool > visited;
int n, m;
queue < int > q;

void dfs(int v) {
    cout << v << " ";
    visited[v] = true;
    for (auto h: adj[v]) {
        if (!visited[h]) {
            dfs(h);
        }
    }
}

void solve() {
    cin >> n >> m;
    adj.resize(n);
    visited.assign(n, false);
    for (auto i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(0);
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
}
