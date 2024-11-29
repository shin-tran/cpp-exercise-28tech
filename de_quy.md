# Trợ giảng buổi 13 | Chính buổi 11 56:47

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

## Tính tổng 5

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

double sum(int n) {
  if (n == 1) return 1;
  else return 1/n + sum(n - 1);
}

int main() {
  faster();
  int n; cin >> n;
  cout << fixed << setprecision(3);
  cout << sum(n);
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

## Đếm số thao tác

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int thaoTac(int n) {
  if (n == 1) return 0;
  int x = 1e9, y = 1e9, z = 1e9; 
  if (n % 2 == 0) {
    x = 1 + thaoTac(n / 2);
  }
  if (n % 3 == 0) {
    y = 1 + thaoTac(n / 3);
  }
  if (n > 1) {
    z = 1 + thaoTac(n - 1);
  }
  return min(x, min(y, z));
}

int main() {
  faster();
  int n; cin >> n;
  cout << thaoTac(n);
  return 0;
}
```

## Chuyển hệ thập phân sang hệ nhị phân

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

void convert(ll n) {
  if (n == 0) return;
  convert(n / 2);
  cout << n % 2;
}

int main() {
  faster();
  int n; cin >> n;
  if (n == 0) cout << 0;
  else convert(n);
  return 0;
}
```

## Chuyển hệ thập phân sang hệ 16

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

void convert(ll n) {
  if (n == 0) return;
  convert(n / 16);
  int r = n % 16;
  if (r < 10) cout << r;
  else cout << (char)(r + 55);
}

int main() {
  faster();
  int n; cin >> n;
  if (n == 0) cout << 0;
  else convert(n);
  return 0;
}
```

## Tính tổng chữ số sử dụng đệ quy

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int tongChuSo(ll n) {
  if (n < 10) return n;
  else return n % 10 + tongChuSo(n / 10);
}

int main() {
  faster();
  int n; cin >> n;
  cout << tongChuSo(n);
  return 0;
}
```

## Đếm số lượng chữ số của N sử dụng đệ quy

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int tongChuSo(ll n) {
  if (n < 10) return 1;
  else return 1 + tongChuSo(n / 10);
}

int main() {
  faster();
  int n; cin >> n;
  cout << tongChuSo(n);
  return 0;
}
```

## Tìm chữ số đầu tiên của số nguyên

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int fistNum(ll n) {
  if (n < 10) return n;
  else return fistNum(n / 10);
}

int main() {
  faster();
  int n; cin >> n;
  cout << fistNum(n);
  return 0;
}
```

## Chữ số lớn nhất và chữ số nhỏ nhất

```c
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
```

##

```c

```
