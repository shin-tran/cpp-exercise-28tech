#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int lastPos(const vector<int>& a, int i, int n, int k) {
  int res = -1, l = i + 1, r = n - 1;
  while (l <= r) {
    int m = (l + r) / 2;
    if (a[m] <= k) {
      res = m;
      l = m + 1;
    } else r = m - 1;
  }
  return res;
}

int main() {
  faster();
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for (int x : a) cin >> x;
  sort(a.begin(), a.end());
  int tmp = n, c2 = 0;
  for (int i = 0; i < n && a[i] <= k / 2; i++) {
    int r = lastPos(a, i, tmp, k - a[i]);
    tmp = r;
    if (r != -1) c2++;
  }
  int c1 = n - c2 * 2;
  cout << c1 + c2;
  return 0;
}