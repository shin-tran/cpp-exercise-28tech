#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

const int mod = 1e9 + 7;

ll du(int a, int b) {
  return ((a % mod) * (b % mod)) % mod;
}

ll binpow(int a, int b) {
  if ( b == 0) return 1;
  ll res = binpow(a, b / 2);
  if (b % 2) return du(du(res, res), a);
  else return du(res, res);
}

int main() {
  faster();
  int a, b; cin >> a >> b;
  cout << binpow(a, b);
  return 0;
}