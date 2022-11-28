#include <bits/stdc++.h>

using namespace std;

vector < int > p(1000);
vector < int > r(1000);

int find_parent(int a) {
    return p[a] = (a == p[a] ? a : find_parent(p[a]));
}

void rank_union(int a, int b) {
    int p1 = find_parent(a);
    int p2 = find_parent(b);

    if (r[p1] < r[p2]) p[p1] = p2;
    else if (r[p1] > r[p2]) p[p2] = p1;
    else p[p2] = p1, r[p1]++;
}

void init() {
    for (auto i = 0; i < 1000; ++i) {
        p[i] = i;
        r[i] = 0;
    }
}

int main() {
    int m;
    cin >> m;
    init();

    vector < array < int, 3 >> E;

    for (auto i = 0; i < m; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        --a, --b;
        E.push_back({c, a, b});
    }

    //sorting all edges
    sort(E.begin(), E.end());
    int cost = 0;

    //main kruskals function
    for (auto x: E) {
        if (find_parent(x[1]) == find_parent(x[2])) continue;
        rank_union(x[1], x[2]);
        cost += x[0];
    }
    cout << cost << "\n";
}
