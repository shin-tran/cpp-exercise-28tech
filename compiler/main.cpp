#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  int a[n];
  multiset<int> se;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    se.insert(a[i]);
  }
  int q; cin >> q;
  while (q--) {
    int thao_tac, x; cin >> thao_tac >> x;
    if (thao_tac == 1) se.insert(x);
    else if (thao_tac == 2 && se.count(x)) {
      auto it = se.find(x);
      se.erase(it);
    } else if (thao_tac == 3) {
      if (se.count(x)) cout << "YES\n";
      else cout << "NO\n";
    }
  }
  return 0;
}