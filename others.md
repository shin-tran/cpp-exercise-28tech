# Others

##

```c

```

## Ước số nguyên tố nhỏ nhất

```c
#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll maxint = 1e6;

vector<ll> prime(maxint + 1);

void sieve() {
  for (int i = 1; i <= maxint; i++) prime[i] = i;
  for (int i = 2; i <= sqrt(maxint); i++) {
    if (prime[i] == i) {
      for (int j = i * i; j <= maxint; j += i) {
        if (prime[j] == j) prime[j] = i;
      }
    }
  }
}

int solve(int n) {
  if (n == 1) return 1;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return i;
  }
  return n;
}

int main() {
  sieve();
  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    cout << prime[i] << " ";
  }
}
```

## Phân tích thừa số nguyên tố

```c
#include <bits/stdc++.h>

using namespace std;

void pt1(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    while (n % i == 0) {
      cout << i << " ";
      n /= i;
    }
  }
  if (n != 1) cout << n;
}

void pt2(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      cout << i << " ";
      while (n % i == 0) {
        n /= i;
      }
    }
  }
  if (n != 1) cout << n;
}

void pt3(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      int count = 0;
      while (n % i == 0) {
        count++;
        n /= i;
      }
      cout << i << "(" << count << ") ";
    }
  }
  if (n != 1) cout << n << "(1)";
}

void pt4(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    while (n % i == 0) {
      cout << i;
      n /= i;
      if (n != 1) cout << "x";
    }
  }
  if (n != 1) cout << n;
}

void pt5(int n) {
  cout << n << " = ";
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      int cnt = 0;
      while (n % i == 0) {
        cnt++;
        n /= i;
      }
      cout << i << "^" << cnt << " * ";
    }
  }
  if (n != 1) cout << n << "^1";
}

int main() {
  int n; cin >> n;
  pt5(n);
}
```

## Tích luỹ thừa nhị phân (Luỹ thừa nhanh)

```c
#include <bits/stdc++.h>

using namespace std;

#define mod 1000000007

long long binPow(long long a, long long b, long long c) {
  long long res = 1;
  while (b > 0) {
    if (b % 2 == 1) res = ((a % c) * (a % c)) % c;
    a = ((a % c) * (a % c) % c);
    b /= 2;
  }
  return res;
}

int main() {
  cout << binPow(2, 1000000000, mod);
}
```

## Lý thuyết số - Đồng dư

```c
#include <bits/stdc++.h>

using namespace std;

//(a + b) % c = (a % c) + (b % c) % c
//(a - b) % c = (a % c) - (b % c) % c
//(a * b) % c = (a % c) * (b % c) % c
//(a / b) % c = (a % c) * (b^-1 % c) % c
//(a ^ m) % c = (a % c) ^ m % c

long long addMod(long long a, long long b, long long c) {
  return (a % c + b % c) % c;
}

long long subMod(long long a, long long b, long long c) {
  return (a % c - b % c + c) % c;
}

long long mulMod(long long a, long long b, long long c) {
  return (a % c * b % c) % c;
}

long long modInverse(long long b, long long c) {
  long long x, y;
  long long g = gcdExtended(b, c, &x, &y);
  if (g != 1)
    return -1; // Nghịch đảo không tồn tại
  else {
    long long res = (x % c + c) % c;
    return res;
  }
}

long long gcdExtended(long long a, long long b, long long *x, long long *y) {
  if (a == 0) {
    *x = 0, *y = 1;
    return b;
  }
  long long x1, y1;
  long long gcd = gcdExtended(b % a, a, &x1, &y1);
  *x = y1 - (b / a) * x1;
  *y = x1;
  return gcd;
}

long long divMod(long long a, long long b, long long c) {
  long long inv = modInverse(b, c);
  if (inv == -1)
    return -1; // Không thể chia
  else
    return (a % c * inv % c) % c;
}

long long powMod(long long a, long long m, long long c) {
  long long res = 1;
  a = a % c;
  while (m > 0) {
    if (m % 2 == 1)
      res = (res * a) % c;
    m = m >> 1;
    a = (a * a) % c;
  }
  return res;
}

int main() {
  cout << addMod(5, 3, 7);
}
```

## Tổ hợp chập k của n

```c
#include <bits/stdc++.h>

using namespace std;

// Hàm tính tổ hợp chập k của n
long long combination(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    if (k > n - k) k = n - k; // C(n, k) == C(n, n-k)
    long long result = 1;
    for (int i = 0; i < k; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << "C(" << n << ", " << k << ") = " << combination(n, k);
    return 0;
}
```

## Số Fibonacci

```c
#include <bits/stdc++.h>

using namespace std;

long long fibo[100];

void check2() {
  fibo[0] = 0; fibo[1] = 1;
  for (int i = 2; i <= 92; i++) {
    fibo[i] = fibo[i - 1] + fibo[i - 2];
  }
}

bool isFibonacci(long long n) {
  for (int i = 0; i <= 92; i++) {
    if (fibo[i] == n) return true;
  }
  return false;
}

int main() {
  check2();
  long long n;
  cin >> n;
  if (isFibonacci(n)) {
    cout << n << " la so Fibonacci." << endl;
  } else {
    cout << n << " khong phai la so Fibonacci." << endl;
  }
  return 0;
}
```

## Phi hàm Euler

```c
#include <bits/stdc++.h>

using namespace std;

int prime[10000001];

void sieved() {
  for (int i = 0; i <= 1000000; i++) prime[i] = 1;
  prime[0] = prime[1] = 0;
  for (int i = 2; i <= 1000; i++) {
    if (prime[i]) {
      for (int j = i * i; j <= 1000000; j += i) prime[j] = 0;
    }
  }
}

int phi(int n) {
  int res = n;
  for (int i = 2; i <= sqrt(n); i++) {
    if (prime[i] && n % i == 0) {
      res -= res / i;
      while (n % i == 0) n /= i;
    }
  }
  if (n > 1) res -= res / n;
  return res;
}

int main() {
  sieved();
  int n; cin >> n;
  cout << phi(n);
}
```

## T prime

```c
#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int maxint = (int)1e6;

vector<int> prime(maxint + 1);

void sieve() {
  for (int i = 0; i <= maxint; i++) prime[i] = 1;
  prime[0] = prime[1] = 0;
  for (int i = 2; i <= sqrt(maxint); i++) {
    if (prime[i]) {
      for (int j = i * i; j <= maxint; j += i) prime[j] = 0;
    }
  }
}

int main() {
  sieve();
  ll n; cin >> n;
  for (int i = 2; i <= sqrt(n); i++) {
    if (prime[i]) cout << 1ll * i * i << " ";
  }
  return 0;
}
```

## T prime 2

```c
#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll maxint = 1e6;

vector<ll> prime(maxint + 1);

void sieve() {
  for (int i = 0; i <= maxint; i++) prime[i] = 1;
  prime[0] = prime[1] = 0;
  for (int i = 2; i <= sqrt(maxint); i++) {
    if (prime[i]) {
      for (int j = i * i; j <= maxint; j += i) prime[j] = 0;
    }
  }
}

int main() {
  sieve();
  int t; cin >> t;
  while (t--) {
    ll n; cin >> n;
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
      if (prime[i]) cnt++;
    }
    cout << cnt << endl;
  }
}
```

## T prime 3

```c
#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll maxint = 1e6;

vector<ll> prime(maxint + 1);

void sieve() {
  for (int i = 0; i <= maxint; i++) prime[i] = 1;
  prime[0] = prime[1] = 0;
  for (int i = 2; i <= sqrt(maxint); i++) {
    if (prime[i]) {
      for (int j = i * i; j <= maxint; j += i) prime[j] = 0;
    }
  }
}

int main() {
  sieve();
  int t; cin >> t;
  while (t--) {
    ll l, r; cin >> l >> r;
    int cnt = 0;
    int a = sqrt(l);
    if (1ll * a * a != l) ++a;
    for (int i = a; i <= sqrt(r); i++) {
      if (prime[i]) cnt++;
    }
    cout << cnt << endl;
  }
}
```

## Cặp số nguyên tố

```c
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int a, b; cin >> a >> b;
  for (int i = a; i <= b; i++) {
    for (int j = i + 1; j <= b; j++) {
      if (__gcd(i, j) == 1) cout << "(" << i << "," << j << ")\n";
    }
  }
  return 0;
}
```

## Goldbach conjecture

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
