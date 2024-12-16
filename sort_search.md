# Sort and search | Phụ 14 57:40 | Chính 13

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

```

## Tìm kiếm nhị phân biến đổi

```c

```

##

```c

```
