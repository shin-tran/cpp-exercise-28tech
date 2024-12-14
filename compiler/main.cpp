#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int cnt[n+1]; set<int> se;
  for (int i = n - 1; i >= 0; i--) {
    se.insert(a[i]);
    cnt[i] = se.size();
  }
  int q; cin >> q;
  while (q--) {
    int l; cin >> l;
    cout << cnt[l] << " ";
  }
  return 0;
}