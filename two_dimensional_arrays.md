# Two dimensional arrays | Phụ 17 | Chính 15

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
    int sum = 0;
    for (int j = 0; j < m; j++) {
      sum += a[i][j];
    }
    cout << sum << " ";
  }
  cout << endl;
  for (int i = 0; i < m; i++) {
    int sum = 0;
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

```

## Số thuận nghịch trong tam giác dưới

```c

```

## In ra ma trận theo mẫu

```c

```

## Hoán vị đường chéo

```c

```

## Hoán vị 2 hàng của ma trận

```c

```

## Hoán vị 2 cột của ma trận

```c

```

## Đếm các phần tử là số nguyên tố trên đường chéo chính và phụ

```c

```

## Đếm các phần tử là số nguyên tố trên đường chéo chính và phụ 2

```c

```

## Sắp xếp các hàng của ma trận

```c

```

## Sắp xếp các phần tử theo cột

```c

```

## Nhân 2 ma trận

```c

```

## Ma trận xoáy ốc

```c

```

## Ma trận xoáy ốc Fibonacci

```c

```

## Count Island 1

```c

```

## Count Island 2

```c

```

## Số điểm cực đại

```c

```

## Maximum path sum

```c

```

## Tìm đường đi

```c

```

## Đường đi của quân Mã

```c

```

## Snake

```c

```

## Biên của ma trận

```c

```

## Phần tử xuất hiện ở mọi hàng

```c

```

## Diện tích

```c

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
