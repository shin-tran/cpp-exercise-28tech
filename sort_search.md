# Sort and search | Phụ 14 2:01:00 | Chính 13

## Các số khác nhau trong mảng

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  map<int, int> m;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    m[x]++;
  }
  cout << m.size();
  return 0;
}
```

## Tăng dần giảm dần

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a, a+n);
  for (int x : a) cout << x << " ";
  cout << endl;
  sort(a, a+n, greater<int>());
  for (int x : a) cout << x << " ";
  return 0;
}
```

## Sắp xếp theo trị tuyệt đối

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

bool cmp(int a, int b) {
  if (abs(a) < abs(b)) return true;
  else return false;
}

int main() {
  faster();
  int n; cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  stable_sort(a, a + n, cmp);
  for (int x : a) cout << x << " ";
  return 0;
}
```

## Sắp xếp theo tổng chữ số

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int sum(int n) {
  int sum = 0;
  while (n) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

bool cmp (int a, int b) {
  if (sum(a) != sum(b)) return sum(a) < sum(b);
  return a < b;
}

int main() {
  faster();
  int n; cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    v.push_back(x);
  }
  sort(v.begin(), v.end(), cmp);
  for (int x : v) cout << x << " ";
  return 0;
}
```

## Khoảng cách nhỏ nhất

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    v.push_back(x);
  }
  int res = 1e9;
  for (int i = 1; i < n; i++) {
    res = min(res, v[i] - v[i - 1]);
  }
  cout << res;
  return 0;
}
```

## Số xuất hiện nhiều nhất trong mảng

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
  if (a.second != b.second) return a.second < b.second;
  return a.first > b.first;
}

int main() {
  faster();
  int n; cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    mp[x]++;
  }
  vector<pair<int, int>> v(mp.begin(), mp.end());
  sort(v.begin(), v.end(), cmp);
  cout << v[v.size() - 1].first << " " << v[v.size() - 1].second;
  return 0;
}
```

## Tìm kiếm nhị phân

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    mp[x]++;
  }
  int q; cin >> q;
  while (q--) {
    int x; cin >> x;
    if (mp.count(x)) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
```

## Tìm kiếm nhị phân biến đổi

```c

```

## Trộn 2 dãy

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n, m; cin >> n >> m;
  int b[n], c[m];
  for (int i = 0; i < n; i++) cin >> b[i];
  for (int i = 0; i < m; i++) cin >> c[i];
  int i = 0, j = 0;
  while (i < n && j < m) {
    if (b[i] <= c[j]) cout << "b" << ++i << " ";
    else cout << "c" << ++j << " ";
  }
  while (i < n) cout << "b" << ++i << " ";
  while (j < m) cout << "c" << ++j << " ";
  return 0;
}
```

## Khiêu vũ

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n, m; cin >> n >> m;
  int b[n], c[m];
  for (int i = 0; i < n; i++) cin >> b[i];
  for (int i = 0; i < m; i++) cin >> c[i];
  sort(b, b + n);
  sort(c, c + m);
  int i = 0, j = 0, cnt = 0;
  while (i < n && j < m) {
    if (b[i] > c[j]) {
      ++cnt; ++i; ++j;
    } else ++i;
  }
  cout << cnt;
  return 0;
}
```

## Xếp gạch

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n, greater<int>());
  ll doCung = a[0];
  int cnt = 1;
  for (int i = 1; i < n; i++) {
    if (a[i] < doCung) {
      ++cnt;
      doCung = min(1ll * a[i], doCung);
    } else break;
  }
  cout << cnt;
  return 0;
}
```

## Vắt sữa bò

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];
  sort(v.begin(), v.end(), greater<int>());
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] - i > 0) ans += v[i] - i;
    else break;
  }
  cout << ans;
  return 0;
}
```

## The 2014 ACM-ICPC Asia Jakarta Regional Contest

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for (int &x : a) cin >> x;
  sort(a.begin(), a.end());
  int cnt = 1;
  for (int i = 1; i < n; i++) {
    if (a[i] - a[i - 1] <= k) continue;
    else ++cnt;
  }
  cout << cnt;
  return 0;
}
```

## Xếp lịch diễn

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
  return a.second < b.second;
}

int main() {
  faster();
  int n; cin >> n;
  vector<pair<int, int>> v(n);
  for (auto &it : v) cin >> it.first >> it.second;
  sort(v.begin(), v.end(), cmp);
  int cnt = 1;
  int temp = v[0].second;
  for (int i = 1; i < n; i++) {
    if (v[i].first > temp) {
      temp = v[i].second;
      ++cnt;
    }
  }
  cout << cnt;
  return 0;
}
```

## Cặp số có tổng bằng K

```c

```

##

```c

```

##

```c

```

##

```c

```

##

```c

```

##

```c

```

##

```c

```

##

```c

```

##

```c

```
