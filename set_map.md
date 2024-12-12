# Set and Map | Phụ 14 | Chính 12 42:12

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
    int thao_tac, x; cin >> thao_tac;
    if (thao_tac == 1) {
      cin >> x;
      se.insert(x);
    }
    else if (thao_tac == 2) {
      cin >> x;
      if (se.count(x)) {
        se.erase(x);
      }
    }
    else if (thao_tac == 3) cout << *se.begin() << endl;
    else if (thao_tac == 4) cout << *se.rbegin() << endl;
  }
  return 0;
}
```

## Tìm hợp và giao của hai mảng 1

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n, m; cin >> n >> m;
  set<int> se1, se2, hop;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    se1.insert(x);
  }
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    se2.insert(x);
    hop.insert(x);
  }
  vector<int> giao;
  for (int x : se1) {
    hop.insert(x);
    if (se2.count(x)) giao.push_back(x);
  }
  for (int x : giao) cout << x << " ";
  cout << endl;
  for (int x : hop) cout << x << " ";
  return 0;
}
```

## Tìm hợp và giao của hai mảng 2

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n, m; cin >> n >> m;
  set<int> s1, hop;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    hop.insert(x);
    s1.insert(x);
  }
  vector<int> giao;
  for (int i = 0; i < m; i++) {
    int x; cin >> x;
    hop.insert(x);
    if (s1.count(x)) giao.push_back(x);
  }
  for (int x : hop) cout << x << " ";
  cout << endl;
  for (int x : giao) cout << x << " ";
  return 0;
}
```

## Loại trừ

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n, m; cin >> n >> m;
  set<int> se;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    se.insert(x);
  }
  for (int i = 0; i < m; i++) {
    int x; cin >> x;
    if (se.count(x)) se.erase(x);
  }
  for (int x : se) cout << x << " ";
  return 0;
}
```

## Union

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n, m; cin >> n >> m;
  set<int> se;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    se.insert(x);
  }
  for (int i = 0; i < m; i++) {
    int x; cin >> x;
    se.insert(x);
  }
  for (auto it = se.rbegin(); it != se.rend(); it++) {
    cout << *it << " ";
  }
  return 0;
}
```

## Intersection

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n, m; cin >> n >> m;
  vector<int> v1;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    v1.push_back(x);
  }
  set<int> s2;
  for (int i = 0; i < m; i++) {
    int x; cin >> x;
    s2.insert(x);
  }
  for (int x : v1) {
    if (s2.count(x)) cout << x << ' ';
  }
  return 0;
}
```

## Difference

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n, m; cin >> n >> m;
  set<int> s1, s2;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    s1.insert(x);
  }
  for (int i = 0; i < m; i++) {
    int x; cin >> x;
    s2.insert(x);
  }
  for (int x : s1) {
    if (s2.count(x) == 0) cout << x << ' ';
  }
  return 0;
}
```

## Symmetric difference

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n, m; cin >> n >> m;
  set<int> s1, s2, se;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    s1.insert(x);
  }
  for (int i = 0; i < m; i++) {
    int x; cin >> x;
    s2.insert(x);
  }
  for (int x : s1) {
    if (s2.count(x) == 0) se.insert(x);
  }
  for (int x : s2) {
    if (s1.count(x) == 0) se.insert(x);
  }
  for (int x : se) cout << x << ' ';
  return 0;
}
```

## Suffix And Query

```c

```

##

```c

```
