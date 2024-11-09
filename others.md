
#### Goldbach conjecture 

```c
#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int maxInt = (int)1e6;
vector<int> prime(maxInt + 1);

void sieve() {
  for (int i = 0; i <= maxInt; i++) prime[i] = 1;
  prime[0] = prime[1] = 0;
  for (int i = 2; i <= sqrt(maxInt); i++) {
    if (prime[i]) {
      for (int j = i * i; j <= maxInt; j += i) prime[j] = 0;
    }
  }
}

int main() {
  sieve();
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    for (int i = 1; i <= n / 2; i++) {
      if (prime[i] && prime[n - i]) cout << i << " " << n - i << endl;
    }
  }
  return 0;
}
```

