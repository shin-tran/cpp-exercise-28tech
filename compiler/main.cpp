#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int fibo(int n) {
  if (n == 0 || n == 1) return 1;
  else return fibo(n - 1) + fibo(n - 2);
}

int gcd(int a, int b) {
  if (b == 0) return a;
  else return gcd(b, a % b);
}

int tohop(int n, int k) {
  if (k == 0 || k == n) return 1;
  else return tohop(n - 1, k - 1) + tohop(n - 1, k);
}

int pow(int a, int b) {
  if (b == 0) return 1;
  int tmp = pow(a, b / 2);
  if (b % 2 == 1) return tmp * tmp * a;
  else return tmp * tmp;
}

int main() {
  faster();
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for (int &x : a) cin >> x;
  ll sum = 0;
  for (int i = 0; i < k; i++) sum += a[i];
  ll res = sum, pos = 0;
  for (int i = 1; i <= n - k; i++) {
    sum = sum - a[i-1] + a[i+k-1];
    if (sum >= res) {
      res = sum; pos = i;
    }
  }
  cout << res << endl;
  for (int i = 0; i < k; i++) {
    cout << a[pos + i] << " ";
  }
  return 0;
}