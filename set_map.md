# Set and Map | Phụ B13 44:22 | Chính

## Phần tử phân biệt

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  int a[n];
  set<int> se;
  for (int &x : a) {
    cin >> x;
    se.insert(x);
  }
  cout << se.size();
  return 0;
}
```

## Truy vấn phần tử trong mảng

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  set<int> se;
  for (int i = 0; i < n; ++i) {
    int x; cin >> x;
    se.insert(x);
  }
  int q; cin >> q;
  while (q--) {
    int x; cin >> x;
    if (se.find(x) != se.end()) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
```

## Phần tử riêng biệt

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  set<int> se;
  for (int i = 0; i < n; ++i) {
    int x; cin >> x;
    if (se.count(x) == 0) {
      cout << x << " ";
      se.insert(x);
    }
  }
  return 0;
}
```

## Truy vấn trên mảng

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  int a[n];
  multiset<int> se;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    se.insert(a[i]);
  }
  int q; cin >> q;
  while (q--) {
    int thao_tac, x; cin >> thao_tac >> x;
    if (thao_tac == 1) se.insert(x);
    else if (thao_tac == 2 && se.count(x)) {
      auto it = se.find(x);
      se.erase(it);
    } else if (thao_tac == 3) {
      if (se.count(x)) cout << "YES\n";
      else cout << "NO\n";
    }
  }
  return 0;
}
```

## Lớn nhất, nhỏ nhất

```c

```

##

```c

```

##

```c

```
