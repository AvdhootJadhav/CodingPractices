#include <bits/stdc++.h>

using namespace std;

vector < pair < int, int >> E[1000];

void weightgraph() {
  int n, m;
  cin >> n >> m;
  for (auto i = 1; i <= m; ++i) {
    int a, b, c;
    cin >> a >> b >> c;
    E[a].push_back(make_pair(b, c));
    E[b].push_back(make_pair(a, c));
  }
  for (auto i = 1; i <= n; ++i) {
    cout << i << " ";
    for (auto x: E[i]) cout << x.first << " " << x.second << " ";
    cout << "\n";
  }
}

int main() {
  weightgraph();
}
