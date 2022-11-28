#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
#pragma GCC optimize("Ofast")

void merge(int l, int r, int mid, vector < int > & A, vector < int > & B) {
  int i, j, k;
  i = l;
  j = mid;
  k = l;
  while (i <= mid - 1 and j <= r) {
    if (A[i] <= A[j]) {
      B[k++] = A[i++];
    } else {
      B[k++] = A[j++];
    }
  }
  while (i <= mid - 1) {
    B[k++] = A[i++];
  }
  while (j <= r) {
    B[k++] = A[j++];
  }

  for (i = l; i <= r; ++i) {
    A[i] = B[i];
  }
}

void mergeSort(int l, int r, vector < int > & A, vector < int > & B) {
  if (l < r) {
    int mid = l + (r - l) / 2;
    mergeSort(l, mid, A, B);
    mergeSort(mid + 1, r, A, B);
    merge(l, r, mid + 1, A, B);
  }
}

void solve() {
  int n = 6;
  vector < int > A = {1,9,5,3,0,10};
  vector < int > B(n);
  mergeSort(0, n - 1, A, B);

  for (auto x: A) cout << x << " ";
  cout << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
