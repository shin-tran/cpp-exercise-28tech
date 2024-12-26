# Sort and search

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
  int a[n];
  for (int &x : a) cin >> x;
  int q; cin >> q;
  while (q--) {
    int x; cin >> x;
    if (binary_search(a, a + n, x)) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
```

## Tìm kiếm nhị phân biến đổi

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int firstPos(int a[], int n, int x) {
  int res = -1;
  int left = 0, right = n - 1;
  while (left <= right) {
    int mid = (left + right) / 2;
    if (a[mid] == x) {
      res = mid;
      right = mid - 1;
    }
    else if (a[mid] < x) left = mid + 1;
    else right = mid - 1;
  }
  return res;
}

int lastPos(int a[], int n, int x) {
  int res = -1;
  int left = 0, right = n - 1;
  while (left <= right) {
    int mid = (left + right) / 2;
    if (a[mid] == x) {
      res = mid;
      left = mid + 1;
    }
    else if (a[mid] < x) left = mid + 1;
    else right = mid - 1;
  }
  return res;
}

int lowerPos(int a[], int n, int x) {
  int res = -1;
  int left = 0, right = n - 1;
  while (left <= right) {
    int mid = (left + right) / 2;
    if (a[mid] >= x) {
      res = mid;
      right = mid - 1;
    }
    else left = mid + 1;
  }
  return res;
}

int upperPos(int a[], int n, int x) {
  int res = -1;
  int left = 0, right = n - 1;
  while (left <= right) {
    int mid = (left + right) / 2;
    if (a[mid] > x) {
      res = mid;
      right = mid - 1;
    }
    else left = mid + 1;
  }
  return res;
}

int main() {
  faster();
  int n, x; cin >> n >> x;
  int a[n];
  for (int &x : a) cin >> x;
  int l = firstPos(a, n, x), r = lastPos(a, n, x);
  cout << l << endl;
  cout << r << endl;
  cout << lowerPos(a, n, x) << endl;
  cout << upperPos(a, n, x) << endl;
  if (l != -1) cout << r - l + 1;
  else cout << 0;
  return 0;
}
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
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int firstPos(int a[],int i, int n, int x) {
  int res = -1, left = i + 1, right = n - 1;
  x -= a[i];
  while (left <= right) {
    int mid = (left + right) / 2;
    if (a[mid] == x) {
      res = mid;
      right = mid - 1;
    }
    else if (a[mid] < x) left = mid + 1;
    else right = mid - 1;
  }
  return res;
}

int lastPos(int a[],int i, int n, int x) {
  int res = -1, left = i + 1, right = n - 1;
  x -= a[i];
  while (left <= right) {
    int mid = (left + right) / 2;
    if (a[mid] == x) {
      res = mid;
      left = mid + 1;
    } else if (a[mid] < x) left = mid + 1;
    else right = mid - 1;
  }
  return res;
}

int main() {
  faster();
  int n, k; cin >> n >> k;
  int a[n];
  for (int &x : a) cin >> x;
  sort(a, a + n);
  ll ans = 0;
  for (int i = 0; i < n - 1; i++) {
    int l = firstPos(a, i, n, k), r = lastPos(a, i, n, k);
    if (l != -1) ans += r - l + 1;
  }
  cout << ans;
  return 0;
}
```

## Cặp số có tổng nhỏ hơn K

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int lastPos(int a[], int i, int n, int x) {
  int res = -1, l = i + 1, r = n - 1;
  while (l <= r) {
    int m = (l + r) / 2;
    if (a[i] + a[m] < x) {
      res = m;
      l = m + 1;
    } else r = m - 1;
  }
  return res;
}

int main() {
  faster();
  int n, k; cin >> n >> k;
  int a[n];
  for (int &x : a) cin >> x;
  sort(a, a + n);
  ll ans = 0;
  for (int i = 0; i < n - 1; i++) {
    int res = lastPos(a, i, n, k);
    if (res == -1) break;
    ans += res - i;
  }
  cout << ans;
  return 0;
}
```

## Cặp số có tổng lớn hơn k

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int lastPos(const vector<int>& a, int i, int n, int x) {
  int res = -1, l = i + 1, r = n - 1;
  while (l <= r) {
    int m = (l + r) / 2;
    if (a[i] + a[m] > x) {
      res = m;
      r = m - 1;
    } else l = m + 1;
  }
  return res;
}

int main() {
  faster();
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for (int &x : a) cin >> x;
  sort(a.begin(), a.end());
  ll ans = 0;
  for (int i = 0; i < n - 1; i++) {
    int res = lastPos(a, i, n, k);
    if (res == -1) break;
    ans += n - res;
  }
  cout << ans;
  return 0;
}
```

## Điền số còn thiếu

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  int a[n];
  for (int &x : a) cin >> x;
  int min = 1e9, max = -1e9;
  for (int x : a) {
    if (x > max) max = x;
    if (x < min) min = x;
  }
  int ans = max - min - n + 1;
  cout << ans;
  return 0;
}
```

## Sắp xếp chữ số

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  set<char> se;
  for (int i = 0; i < n; i++) {
    string x; cin >> x;
    for (string::size_type j = 0; j < x.size(); j++) {
      se.insert(x[i]);
    }
  }
  for (char x : se) cout << x << " ";
  return 0;
}
```

## Sắp đặt số 0

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
  int n, cnt = 0; cin >> n;
  vector<pair<int, int>> mp;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    if (x == 0) {
      ++cnt;
    } else mp.push_back({x, i});
  }
  sort(mp.begin(), mp.end(), cmp);
  for (auto it : mp) cout << it.first << " ";
  for (int i = 0; i < cnt; i++) cout << 0 << " ";
  return 0;
}
```

## Sắp xếp theo tần suất

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
  if (a.second != b.second) return a.second > b.second;
  return a.first < b.first;
}

bool cmp2(const pair<int, int>& a, const pair<int, int>& b) {
  return a.second > b.second;
}

int main() {
  faster();
  int n; cin >> n;
  int a[n];
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i]]++;
  }
  vector<pair<int, int>> v;
  vector<pair<int, int>> v2;
  for (int i = 0; i < n; i++) {
    v.push_back({a[i], mp[a[i]]});
    v2.push_back({a[i], mp[a[i]]});
  }
  sort(v.begin(), v.end(), cmp);
  for (auto it : v) {
    cout << it.first << " ";
  }
  cout << endl;
  stable_sort(v2.begin(), v2.end(), cmp2);
  for (auto it : v2) {
    while (mp[it.first] != 0) {
      cout << it.first << " ";
      mp[it.first]--;
    }
  }
  return 0;
}
```

## Biểu thức nhỏ nhất

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n, k; cin >> n >> k;
  int a[n];
  for (int &x : a) cin >> x;
  sort(a + 1, a + n, greater<int>());
  ll res = a[0];
  for (int i = 1; i < n; i++) {
    if (i <= k) res += a[i];
    else res -= a[i];
  }
  cout << res;
  return 0;
}
```

## Check in sân bay

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  vector<pair<int, int>> v(n);
  for (auto &it : v) cin >> it.first >> it.second;
  sort(v.begin(), v.end());
  ll time = 0;
  for (int i = 0; i < n; i++) {
    time = max(1ll * v[i].first, time) + v[i].second;
  }
  cout << time;
  return 0;
}
```

## Sắp xếp chọn

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  int a[n];
  for (int &x : a) cin >> x;
  for (int i = 0; i < n - 1; i++) {
    int m = a[i], pos = i;
    for (int j = i + 1; j < n; j++) {
      if (a[j] < m) {
        m = a[j];
        pos = j;
      }
    }
    swap(a[i], a[pos]);
    cout << "Buoc " << i + 1 << ": ";
    for (int x : a) cout << x << " ";
    cout << endl;
  }
  return 0;
}
```

## Sắp xếp chèn

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  int a[n];
  for (int &x : a) cin >> x;
  for (int i = 1; i < n; i++) {
    int temp = a[i], j = i - 1;
    while (j >= 0 && a[j] > temp) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = temp;
    cout << "Buoc " << i << ": ";
    for (int x : a) cout << x << " ";
    cout << endl;
  }
  return 0;
}
```

## Sắp xếp nổi bọt

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  int a[n];
  for (int &x : a) cin >> x;
  bool check = true;
  while (check) {
    check = false;
    for (int i = 0; i < n; i++) {
      if (a[i] > a[i + 1]) {
        check = true;
        swap(a[i], a[i + 1]);
      }
    }
    for (int x : a) cout << x << " ";
    cout << endl;
  }
  return 0;
}
```

## Tìm kiếm cặp số có hiệu bằng X

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int lastPos(const vector<int>& a, int i, int n, int x) {
  int l = i + 1, r = n - 1;
  while (l <= r) {
    int m = (l + r) / 2;
    if (a[m] - a[i] == x) {
      return 1;
    } else if (a[m] - a[i] < x) l = m + 1;
    else r = m - 1;
  }
  return -1;
}

int main() {
  faster();
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for (int &x : a) cin >> x;
  sort(a.begin(), a.end());
  int ans = 0;
  for (int i = 0; i < n - 1; i++) {
    int res = lastPos(a, i, n, k);
    if (res == 1) {
      ans = res;
      break;
    } else ans = res;
  }
  cout << ans;
  return 0;
}
```

## Số nhỏ nhất lớn hơn A[i]

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  vector<pair<int, int>> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i].first;
    a[i].second = i;
  }
  vector<int> b(n);
  sort(a.begin(), a.end());
  int j = 0;
  for (int i = 0; i < n; i++) {
    while (j < n && a[j].first == a[i].first) j++;
    if (j < n) b[a[i].second] = a[j].first;
    else b[a[i].second] = -1;
  }
  for (int i = 0; i < n; i++) {
    if (b[i] == -1) cout << "_ ";
    else cout << b[i] << " ";
  }
  return 0;
}
```

## Đèn lồng

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n, l; cin >> n >> l;
  vector<int> a(n);
  for (int &x : a) cin >> x;
  sort(a.begin(), a.end());
  int res = 0;
  for (int i = 1; i < n; i++) {
    res = max(res,a[i] - a[i - 1]);
  }
  res = max(res, 2 * a[0]);
  res = max(res, 2 * (l - a[n - 1]));
  cout << setprecision(10) << fixed << (double)res / 2;
  return 0;
}
```

## Dragon

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n, s; cin >> n >> s;
  vector<pair<int, int>> a(n);
  for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
  sort(a.begin(), a.end());
  for (int i = 0; i < n; i++) {
    if (s <= a[i].first) {
      cout << "NO";
      return 0;
    } else s += a[i].second;
  }
  cout << "YES";
  return 0;
}
```

## BerSU Ball

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  for (int &x : a) cin >> x;
  for (int &x : b) cin >> x;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int ans = 0, i = 0, j = 0;
  while (i < n && j < m) {
    if (abs(a[i] - b[j]) <= 1) {
      ++ans;
      ++i; ++j;
    } else if (a[i] - b[j] > 0) ++j;
    else ++i;
  }
  cout << ans;
  return 0;
}
```

## Distinct Number

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  vector<int> a(n);
  for (int &x : a) cin >> x;
  sort(a.begin(), a.end());
  int ans = 1;
  for (int i = 1; i < n; i++) {
    if (a[i] != a[i - 1]) ++ans;
  }
  cout << ans;
  return 0;
}
```

## Căn hộ

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n, m, k; cin >> n >> m >> k;
  vector<int> a(n), b(m);
  for (int &x : a) cin >> x;
  for (int &x : b) cin >> x;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int i = 0, j = 0, count = 0;
  while (i < n && j < m) {
    if (abs(a[i] - b[j]) <= k) {
      count++;
      i++;
      j++;
    } else if (a[i] < b[j]) {
      i++;
    } else {
      j++;
    }
  }
  cout << count;
  return 0;
}
```

## Xếp trẻ

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
  int ans = 0, l = 0, r = n - 1;
  while (l <= r) {
    if (a[l] + a[r] <= k) {
      ++ans;
      ++l; --r;
    } else {
      ++ans;
      --r;
    }
  }
  cout << ans;
  return 0;
}
```

## Hòa nhạc

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n, m; cin >> n >> m;
  multiset<int> se;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    se.insert(x);
  }
  for (int i = 0; i < m; i++) {
    int x; cin >> x;
    auto it = se.upper_bound(x);
    if (it != se.begin()) {
      --it;
      cout << *it << endl;
      se.erase(it);
    } else if (it == se.begin()) cout << -1 << endl;
  }
  return 0;
}
```

## Cửa hàng bận rộn

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  vector<pair<int, int>> events;
  for (int i = 0; i < n; i++) {
    int arrive, leave;
    cin >> arrive >> leave;
    events.push_back({arrive, 1});
    events.push_back({leave, -1});
  }
  sort(events.begin(), events.end());
  int max_customers = 0, current_customers = 0;
  for (auto event : events) {
    current_customers += event.second;
    max_customers = max(max_customers, current_customers);
  }
  cout << max_customers;
  return 0;
}
```

## Liên hoan phim

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
  vector<pair<int, int>> movies;
  for (int i = 0; i < n; i++) {
    int start, end;
    cin >> start >> end;
    movies.push_back({start, end});
  }
  sort(movies.begin(), movies.end(), cmp);
  int ans = 0, last_end_time = 0; 
  for (int i = 0; i < n; i++) {
    if (movies[i].first >= last_end_time) {
      ans++;
      last_end_time = movies[i].second;
    }
  }
  cout << ans;
  return 0;
}
```

## Missing Coin Sum

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  vector<int> coins(n);
  for (int &x : coins) cin >> x;
  sort(coins.begin(), coins.end());
  ll sum = 1;
  for (int i = 0; i < n && sum >= coins[i]; i++) {
    sum += coins[i];
  }
  cout << sum;
  return 0;
}
```

## Thu thập số

```c

```

## Mảng con có tổng bằng X

```c

```

## Đếm mảng con có tổng bằng x(2)

```c

```

## Đếm mảng con chia hết cho K

```c

```

## Đếm mảng con có nhiều nhất k số khác nhau

```c

```

## Mảng con dài nhất mà mỗi phần tử chỉ xuất hiện 1 lần

```c

```

## Chia mảng thành k mảng con liên tiếp có tổng lớn nhỏ nhất

```c

```

## Factory machine

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

bool check(const vector<ll>& a, ll n, ll m, ll t) {
  ll cnt = 0;
  for (int i = 0; i < n; i++) cnt += m / a[i];
  if (cnt >= t) return true;
  else return false;
}

int main() {
  faster();
  ll n, t; cin >> n >> t;
  vector<ll> a(n);
  for (ll &x : a) cin >> x;
  ll l = 0, r = *min_element(a.begin(), a.end()) * t, res = 0;
  while (l <= r) {
    ll m = (l + r) / 2;
    if (check(a, n, m, t)) {
      res = m;
      r = m - 1;
    } else l = m + 1;
  }
  cout << res;
  return 0;
}
```

## Xếp hình domino

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  ll a, b, n; cin >> a >> b >> n;
  ll l = 0, r = max(a, b) * n, res = 0;
  while (l <= r) {
    ll m = (l + r) / 2;
    ll x = m / a, y = m / b;
    if (x * y >= n) {
      res = m;
      r = m - 1;
    } else l = m + 1;
  }
  cout << res;
  return 0;
}
```

## Trò chơi cắt dây

```c

```

## Máy photo

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

bool check(ll n, int x, int y, ll m) {
  ll cnt = 0;
  cnt += m / x;
  cnt += m / y;
  return cnt >= n;
}

int main() {
  faster();
  ll n, x, y; cin >> n >> x >> y;
  ll l = 0, r = min(x, y) * n, res = 0;
  while (l <= r) {
    ll m = (l + r) / 2;
    if (check(n - 1, x, y, m)) {
      res = m;
      r = m - 1;
    } else l = m + 1;
  }
  cout << res + min(x, y);
  return 0;
}
```
