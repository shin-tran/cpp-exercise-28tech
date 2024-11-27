# Trợ giảng buổi 12 1:58:43 | Chính buổi 11 37:54

## Tính tổng 1

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int tong(int n) {
  if (n == 1) return 1;
  else return n + tong(n - 1);
}

int main() {
  faster();
  int n; cin >> n;
  cout << tong(n);
  return 0;
}
```

## Tính tổng 2

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

ll tong(int n) {
  if (n == 1) return 1;
  else return n * n + tong(n - 1);
}

int main() {
  faster();
  int n; cin >> n;
  cout << tong(n);
  return 0;
}
```

## Tính tổng 3

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

ll tong(int n) {
  if (n == 1) return 1;
  else return (n * n * n) + tong(n - 1);
}

int main() {
  faster();
  int n; cin >> n;
  cout << tong(n);
  return 0;
}
```

## Tính tổng 4

```c
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
```

## Tính giai thừa

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

const ll num = 1e9 + 7;
ll giaiThua(int n) {
  if (n == 1) return 1;
  else return ((n % num) * (giaiThua(n - 1) % num)) % num;
}

int main() {
  faster();
  int n; cin >> n;
  cout << giaiThua(n);
  return 0;
}
```

## Số Fibonacci

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

const int mod = 1e9 + 7;

ll fibo(int n) {
  if (n == 0 || n == 1) return 0;
  else if (n == 2) return 1;
  else return ((fibo(n - 1) % mod) + (fibo(n - 2) % mod)) % mod;
}

int main() {
  faster();
  int n; cin >> n;
  cout << fibo(n);
  return 0;
}
```

## Tổ hợp chập K của N

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

const int mod = 1e9 + 7;

ll toHop(int n, int k) {
  if (k == 0 || k == n) return 1;
  else if (k == 1 || k == n - 1) return n;
  else if (k == 2) return n * (n - 1) / 2;
  else return toHop(n - 1, k) + toHop(n - 1, k - 1);
}

int main() {
  faster();
  int n, k; cin >> n >> k;
  cout << toHop(n, k);
  return 0;
}
```

## GCD và LCM

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

const int mod = 1e9 + 7;

ll gcd(int a, int b) {
  if (b == 0) return a;
  else return (b, a % b);
}

ll lcm (int a, int b) {
  return a / gcd(a, b) * b;
}

int main() {
  faster();
  int a, b; cin >> a >> b;
  cout << gcd(a, b) << " " << lcm(a, b);
  return 0;
}
```

## Luỹ thừa nhị phân

```c
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
```

##

```c

```
