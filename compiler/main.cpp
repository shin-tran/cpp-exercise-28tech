#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n, m, k; cin >> n >> m >> k;
  vector<int> a(n), b(m);
  for (int &x : a) cin >> x;
  for (int &x : b) cin >> x;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int i = 0, j = 0, count = 0;
  while (i < n && j < m) {
    if (abs(a[i] - b[j]) <= k) {
      count++;
      i++;
      j++;
    } else if (a[i] < b[j]) {
      i++;
    } else {
      j++;
    }
  }
  cout << count;
  return 0;
}