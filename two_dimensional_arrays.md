# Two dimensional arrays

## Mảng di chuyển

```c
// 4 ô xung quanh
const int dx[] = {-1, 0, 0, 1};
const int dy[] = {0, -1, 1, 0};
// 8 ô xung quanh
const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
// di chuyển con mã
const int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
const int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};
```

## Liệt kê các số nguyên tố trong mảng 2 chiều

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

const int num = 1e7;
int nt[num + 1];
void sieve() {
  for (int &x : nt) x = 1;
  nt[0] = nt[1] = 0;
  for (int i = 2; i <= sqrt(num); i++) {
    if (nt[i]) {
      for (int j = i * i; j <= num; j += i) nt[j] = 0;
    }
  }
}

int main() {
  faster();
  sieve();
  int n, m; cin >> n >> m;
  int a[n][m];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) cin >> a[i][j];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (nt[a[i][j]]) cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
```

## Tổng hàng, tổng cột trên ma trận

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

int main() {
  faster();
  int n, m; cin >> n >> m;
  int a[n][m];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) cin >> a[i][j];
  for (int i = 0; i < n; i++) {
    ll sum = 0;
    for (int j = 0; j < m; j++) {
      sum += a[i][j];
    }
    cout << sum << " ";
  }
  cout << endl;
  for (int i = 0; i < m; i++) {
    ll sum = 0;
    for (int j = 0; j < n; j++) {
      sum += a[j][i];
    }
    cout << sum << " ";
  }
  return 0;
}
```

## Số lớn nhất và nhỏ nhất trong ma trận

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

int main() {
  faster();
  int n, m; cin >> n >> m;
  int a[n][m];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) cin >> a[i][j];
  int minVal = INT_MAX, maxVal = INT_MIN;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      minVal = min(minVal, a[i][j]);
      maxVal = max(maxVal, a[i][j]);
    }
  }
  cout << minVal << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] == minVal) cout << i + 1 << " " << j + 1 << endl;
    }
  }
  cout << maxVal << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] == maxVal) cout << i + 1 << " " << j + 1 << endl;
    }
  }
  return 0;
}
```

## Số thuận nghịch trong tam giác dưới

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

bool checkReverse(int n) {
  int temp = n, reverse = 0;
  while (temp > 0) {
    reverse = reverse * 10 + (temp % 10);
    temp /= 10;
  }
  return reverse == n;
}

int main() {
  faster();
  int n; cin >> n;
  int a[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> a[i][j];
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      if (checkReverse(a[i][j])) ++cnt;
    }
  }
  cout << cnt;
  return 0;
}
```

## In ra ma trận theo mẫu

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  int a[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> a[i][j];
  cout << "Pattern 1:\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) cout << a[j][i] << " ";
    cout << endl;
  }
  cout << "Pattern 2:\n";
  for (int i = n - 1; i >= 0; i--) {
    for (int j = n - 1; j >= 0; j--) cout << a[i][j] << " ";
    cout << endl;
  }
  cout << "Pattern 3:\n";
  for (int i = 0; i < n; i++) {
    for (int j = n - 1; j >= 0; j--) cout << a[i][j] << " ";
    cout << endl;
  }
  cout << "Pattern 4:\n";
  for (int i = 0; i < n; i++) {
    for (int j = n - 1; j >= 0; j--) cout << a[i][j] << " ";
    cout << endl;
  }
  return 0;
}
```

## Hoán vị đường chéo

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  int a[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> a[i][j];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) cout << a[i][n - 1 - i] << " ";
      else if (j == n - 1 - i) cout << a[i][i] << " ";
      else cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
```

## Hoán vị 2 hàng của ma trận

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  int a[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> a[i][j];
  int h1, h2; cin >> h1 >> h2;
  h1--; h2--;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == h1) cout << a[h2][j] << " ";
      else if (i == h2) cout << a[h1][j] << " ";
      else cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
```

## Hoán vị 2 cột của ma trận

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  int a[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> a[i][j];
  int c1, c2; cin >> c1 >> c2;
  c1--; c2--;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j == c1) cout << a[i][c2] << " ";
      else if (j == c2) cout << a[i][c1] << " ";
      else cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
```

## Đếm các phần tử là số nguyên tố trên đường chéo chính và phụ

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

const int num = 1e7;
int nt[num + 1];
void sieve() {
  for (int &x : nt) x = 1;
  nt[0] = nt[1] = 0;
  for (int i = 2; i <= sqrt(num); i++) {
    if (nt[i]) {
      for (int j = i * i; j <= num; j += i) nt[j] = 0;
    }
  }
}

int main() {
  faster();
  sieve();
  int n; cin >> n;
  int a[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> a[i][j];
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (nt[a[i][i]]) ++cnt;
    if (nt[a[i][n - 1 - i]]) ++cnt;
  }
  cout << cnt;
  return 0;
}
```

## Đếm các phần tử là số nguyên tố trên đường chéo chính và phụ 2

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

const int num = 1e7;
int nt[num + 1];
void sieve() {
  for (int &x : nt) x = 1;
  nt[0] = nt[1] = 0;
  for (int i = 2; i <= sqrt(num); i++) {
    if (nt[i]) {
      for (int j = i * i; j <= num; j += i) nt[j] = 0;
    }
  }
}

int main() {
  faster();
  sieve();
  int n; cin >> n;
  int a[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> a[i][j];
  set<int> cnt;
  for (int i = 0; i < n; i++) {
    if (nt[a[i][i]]) cnt.insert(a[i][i]);
    if (n- 1 - i != i && nt[a[i][n - 1 - i]]) cnt.insert(a[i][n - 1 - i]);
  }
  cout << cnt.size();
  return 0;
}
```

## Sắp xếp các hàng của ma trận

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  int a[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> a[i][j];
  for (int i = 0; i < n; i++) {
    sort(a[i], a[i] + n);
    for (int j = 0; j < n; j++) cout << a[i][j] << " ";
    cout << endl;
  }
  return 0;
}
```

## Sắp xếp các phần tử theo cột

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  int a[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) {
      int x; cin >> x;
      a[j][i] = x;
    }
  for (int i = 0; i < n; i++) {
    sort(a[i], a[i] + n);
    for (int j = 0; j < n; j++) cout << a[j][i] << " ";
    cout << endl;
  }
  return 0;
}
```

## Nhân 2 ma trận

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

int main() {
  faster();
  int n, m, p; cin >> n >> m >> p;
  int a[n][m], b[m][p];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) cin >> a[i][j];
  for (int i = 0; i < m; i++)
    for (int j = 0; j < p; j++) cin >> b[i][j];
  ll c[n][p];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < p; j++) {
      c[i][j] = 0;
      for (int k = 0; k < m; k++) {
        c[i][j] += 1ll * a[i][k] * b[k][j];
      }
    }
  }
  for (int i = 0; i < n; i++)
    for (int j = 0; j < p; j++) cout << c[i][j];
  return 0;
}
```

## Ma trận xoáy ốc

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  int a[n][n];
  int val = 1;
  int top = 0, bottom = n - 1, left = 0, right = n - 1;
  while (val <= n * n) {
    for (int i = left; i <= right; ++i) a[top][i] = val++;
    top++;
    for (int i = top; i <= bottom; ++i) a[i][right] = val++;
    right--;
    for (int i = right; i >= left; --i) a[bottom][i] = val++;
    bottom--;
    for (int i = bottom; i >= top; --i) a[i][left] = val++;
    left++;
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
```

## Ma trận xoáy ốc Fibonacci

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

ll fi[100];
void fibo() {
  ll fn;
  fi[0] = 0, fi[1] = 1;
  for (int i = 2; i < 93; i++) {
    fn = fi[i - 2] + fi[i - 1];
    fi[i] = fn;
  }
}

int main() {
  faster();
  fibo();
  int n; cin >> n;
  int a[n][n];
  int cnt = 0;
  int top = 0, bottom = n - 1, left = 0, right = n - 1;
  while (cnt < n * n) {
    for (int i = left; i <= right; ++i) a[top][i] = fi[cnt++];
    top++;
    for (int i = top; i <= bottom; ++i) a[i][right] = fi[cnt++];
    right--;
    for (int i = right; i >= left; --i) a[bottom][i] = fi[cnt++];
    bottom--;
    for (int i = bottom; i >= top; --i) a[i][left] = fi[cnt++];
    left++;
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
```

## Count Island 1

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

const int dx[] = {-1, 0, 0, 1};
const int dy[] = {0, -1, 1, 0};

int a[100][100];
int n, m;

void loang(int i, int j) {
  a[i][j] = 0;
  for (int k = 0; k < 4; k++) {
    int ni = i + dx[k];
    int nj = j + dy[k];
    if (ni >= 0 && ni < n && nj >= 0 && nj < m && a[ni][nj] == 1)
      loang(ni, nj);
  }
}

int main() {
  faster();
  cin >> n >> m;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) cin >> a[i][j];
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] == 1) {
        ++cnt;
        loang(i, j);
      }
    }
  }
  cout << cnt;
  return 0;
}
```

## Count Island 2

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int a[100][100];
int n, m;

void loang(int i, int j) {
  a[i][j] = 0;
  for (int k = 0; k < 8; k++) {
    int ni = i + dx[k];
    int nj = j + dy[k];
    if (ni >= 0 && ni < n && nj >= 0 && nj < m && a[ni][nj] == 1)
      loang(ni, nj);
  }
}

int main() {
  faster();
  cin >> n >> m;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) cin >> a[i][j];
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] == 1) {
        ++cnt;
        loang(i, j);
      }
    }
  }
  cout << cnt;
  return 0;
}
```

## Số điểm cực đại

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

int main() {
  faster();
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j) cin >> a[i][j];
  int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
  int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
  int count = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      bool isPeak = true;
      for (int k = 0; k < 8; ++k) {
        int ni = i + dx[k];
        int nj = j + dy[k];
        if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
          if (a[i][j] <= a[ni][nj]) {
            isPeak = false;
            break;
          }
        }
      }
      if (isPeak) ++count;
    }
  }
  cout << count << endl;
  return 0;
}
```

## Maximum path sum

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

int main() {
  faster();
  ll n, m; cin >> n >> m;
  ll a[500][500];
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++) cin >> a[i][j];
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (i == 1) a[i][j] += a[i][j - 1];
      else if (j == 1) a[i][j] += a[i - 1][j];
      else a[i][j] += max(a[i - 1][j], a[i][j - 1]);
    }
  }
  cout << a[n][m];
  return 0;
}
```

## Tìm đường đi

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

const int dx[] = {-1, 0, 0, 1};
const int dy[] = {0, -1, 1, 0};

ll n, m, a[500][500];

void loang(int i, int j) {
  a[i][j] = 0;
  for (int k = 0; k < 4; k++) {
    int ni = i + dx[k];
    int nj = j + dy[k];
    if (ni >= 1 && ni <= n && nj >= 1 && nj <= m && a[ni][nj] == 1) loang(ni, nj);
  }
}

int main() {
  faster();
  cin >> n >> m;
  int s, t, u, v;
  cin >> s >> t >> u >> v;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++) cin >> a[i][j];
  loang(s, t);
  if (a[u][v] == 1) cout << "NO\n";
  else cout << "YES\n";
  return 0;
}
```

## Đường đi của quân Mã

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

const int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
const int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};

ll n, m, a[500][500];

void loang(int i, int j) {
  a[i][j] = 0;
  for (int k = 0; k < 8; k++) {
    int ni = i + dx[k];
    int nj = j + dy[k];
    if (ni >= 1 && ni <= n && nj >= 1 && nj <= m && a[ni][nj] == 1) loang(ni, nj);
  }
}

int main() {
  faster();
  cin >> n >> m;
  int s, t, u, v;
  cin >> s >> t >> u >> v;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++) cin >> a[i][j];
  loang(s, t);
  if (a[u][v] == 1) cout << "NO\n";
  else cout << "YES\n";
  return 0;
}
```

## Snake

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  int a[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> a[i][j];
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      int j = n - 1;
      while (j >= 0) {
        cout << a[i][j--];
      }
    } else {
      int j = 0;
      while (j < n) {
        cout << a[i][j++];
      }
    }
    cout << endl;
  }
  return 0;
}
```

## Biên của ma trận

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  int a[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> a[i][j];
  for (int i = 0; i < n; i++) {
    if (i == 0 || i == n - 1) {
      int j = 0;
      while (j < n) cout << a[i][j++] << " ";
    } else cout << a[i][0] << " " << a[i][n - 1] << " ";
  }
  return 0;
}
```

## Phần tử xuất hiện ở mọi hàng

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  int a[n][n];
  map<int, int> d;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
      d[a[i][j]] = 0;
    }
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (d[a[i][j]] == i - 1) d[a[i][j]] = i;
    }
  }
  for (auto it : d) {
    if (it.second == n - 1) cout << it.first << " ";
  }
  return 0;
}
```

## Diện tích

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;

const int dx[] = {-1, 0, 0, 1};
const int dy[] = {0, -1, 1, 0};

int n, m, a[500][500];

int loang(int i, int j) {
  int cnt = 1;
  a[i][j] = 0;
  for (int k = 0; k < 4; k++) {
    int ni = i + dx[k];
    int nj = j + dy[k];
    if (ni >= 0 && ni < n && nj >= 0 && nj < m && a[ni][nj] == 1)
      cnt += loang(ni, nj);
  }
  return cnt;
}

int main() {
  faster();
  cin >> n >> m;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) cin >> a[i][j];
  int max_cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] == 1) {
        int cur_cnt = loang(i, j);
        max_cnt = max(max_cnt, cur_cnt);
      }
    }
  }
  cout << max_cnt;
  return 0;
}
```

## Maximum path sum 2

```c

```

## Maximum path sum 3

```c

```

## Hình vuông lớn nhất

```c

```

## Đường đi của quân Tịnh

```c

```

## Đường đi của quân Xe

```c

```
