#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int firstPos(int a[],int i, int n, int x) {
  int res = -1, left = i + 1, right = n - 1;
  x -= a[i];
  while (left <= right) {
    int mid = (left + right) / 2;
    if (a[mid] == x) {
      res = mid;
      right = mid - 1;
    }
    else if (a[mid] < x) left = mid + 1;
    else right = mid - 1;
  }
  return res;
}

int lastPos (int a[],int i, int n, int x) {
  int res = -1, left = i + 1, right = n - 1;
  x -= a[i];
  while (left <= right) {
    int mid = (left + right) / 2;
    if (a[mid] == x) {
      res = mid;
      left = mid + 1;
    } else if (a[mid] < x) left = mid + 1;
    else right = mid - 1;
  }
  return res;
}

int main() {
  faster();
  int n, k; cin >> n >> k;
  int a[n];
  for (int &x : a) cin >> x;
  sort(a, a + n);
  ll ans = 0;
  for (int i = 0; i < n - 1; i++) {
    int l = firstPos(a, i, n, k), r = lastPos(a, i, n, k);
    if (l != -1) ans += r - l + 1;
  }
  cout << ans;
  return 0;
}