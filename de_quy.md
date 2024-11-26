# Trợ giảng buổi 12 54:40| Chính buổi 11 37:54

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

##

```c

```
