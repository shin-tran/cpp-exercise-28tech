# Giải các bài toán CSES

## Introductory Problems

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

```

###

```c

```
