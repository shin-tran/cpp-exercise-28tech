# Giải các bài toán CSES

## Introductory Problems

Phần "Introductory Problems" trong bộ bài tập CSES (CSES Problem Set) bao gồm các bài toán cơ bản nhằm giúp người học làm quen với các khái niệm và kỹ thuật lập trình cơ bản. Đây là phần khởi đầu tốt cho những ai mới bắt đầu học lập trình hoặc muốn ôn lại các kiến thức cơ bản.

### Weird Algorithm

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  ll n; cin >> n;
  cout << n << " ";
  while (n != 1) {
    if (n % 2 == 0) {
      n /= 2;
      cout << n << " ";
    }
    else {
      n = n * 3 + 1;
      cout << n << " ";
    }
  }
  return 0;
}
```

### Missing Number

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  ll n; cin >> n;
  vector<ll> a(n - 1);
  for (ll &x : a) cin >> x;
  ll xor_all = 0;
  for (ll i = 1; i <= n; i++) xor_all ^= i;
  ll xor_array = 0;
  for (ll x : a) xor_array ^= x;
  ll missing_number = xor_all ^ xor_array;
  cout << missing_number << endl;
  return 0;
}
```

###

```c

```
