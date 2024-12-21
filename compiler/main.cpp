#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for (int &x : a) cin >> x;
  sort(a.begin(), a.end());
  int ans = 0, l = 0, r = n - 1;
  while (l <= r) {
    if (a[l] + a[r] <= k) {
      ++ans;
      ++l; --r;
    } else {
      ++ans;
      --r;
    }
  }
  cout << ans;
  return 0;
}