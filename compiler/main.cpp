#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

ll tong(int n) {
  if (n == 1) return -1;
  if (n % 2 == 0) return tong(n - 1) + n;
  else return tong(n - 1) - n;
}

int main() {
  faster();
  int n; cin >> n;
  cout << tong(n);
  return 0;
}