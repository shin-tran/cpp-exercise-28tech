#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int fmax(ll n) {
  if (n < 10) return n;
  else return max(n % 10, 1ll * fmax(n / 10));
}

int fmin(ll n) {
  if (n < 10) return n;
  else return min(n % 10, 1ll * fmin(n / 10));
}

int main() {
  faster();
  ll n; cin >> n;
  cout << fmax(n) << " " << fmin(n);
  return 0;
}