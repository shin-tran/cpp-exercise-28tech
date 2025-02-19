# String advanced | Phụ 21 | Chính 19 48:00

## Phân số

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

ll ucln(ll a, ll b) {
  while (b) {
    ll t = a % b;
    a = b; b = t;
  }
  return a;
}

struct phanSo {
  ll ts, ms;
};

void nhap(phanSo &p) {
  cin >> p.ts >> p. ms;
}

void rutGon(phanSo &p) {
  ll k = ucln(p.ts, p.ms);
  p.ts /= k; p.ms /= k;
}

void in(phanSo p) {
  cout << p.ts << "/" << p.ms << endl;
}

int main() {
  faster();
  phanSo p;
  nhap(p);
  rutGon(p);
  in(p);
  return 0;
}
```

## Tổng hai phân số

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

ll ucln(ll a, ll b) {
  while (b) {
    ll t = a % b;
    a = b; b = t;
  }
  return a;
}

struct phanSo {
  ll ts, ms;
};

void nhap(phanSo &p) {
  cin >> p.ts >> p. ms;
}

void rutGon(phanSo &p) {
  ll k = ucln(p.ts, p.ms);
  p.ts /= k; p.ms /= k;
}

void in(phanSo p) {
  cout << p.ts << "/" << p.ms << endl;
}

phanSo tong(phanSo a, phanSo b) {
  phanSo res;
  res.ms = 1ll * a.ms * b.ms;
  res.ts = 1ll * a.ts * b.ms + 1ll * a.ms * b.ts;
  rutGon(res);
  return res;
}

int main() {
  faster();
  phanSo p, q;
  nhap(p); nhap(q);
  phanSo t = tong(p,q);
  in(t);
  return 0;
}
```

## Cấu trúc điểm trong toạ độ Oxy

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

struct point {
  double x, y;
};

void input(point &p) {
  cin >> p.x >> p.y;
}

double distance(point a, point b) {
  return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main() {
  faster();
  point a, b;
  int t;
  cin >> t;
  while (t--) {
    input(a); input(b);
    cout << fixed << setprecision(4) << distance(a, b);
  }
  return 0;
}
```

## Cấu trúc thí sinh

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

struct ThiSinh {
  string name, ns;
  float a, b, c;
};

void nhap(ThiSinh &a) {
  getline(cin, a.name);
  cin >> a.ns;
  cin >> a.a >> a.b >> a.c;
}

void in(ThiSinh a) {
  cout << a.name << " " << a.ns << " "
       << fixed << setprecision(1) << (a.a + a.b + a.c) << endl;
}

int main() {
  faster();
  ThiSinh a;
  nhap(a);
  in(a);
  return 0;
}
```

## Cấu trúc sinh viên

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

struct SinhVien {
  string ma, ten, lop, ns;
  float gpa;
};

void nhap(SinhVien &a) {
  getline(cin, a.ten);
  cin >> a.lop;
  cin >> a.ns;
  cin >> a.gpa;
  a.ma = "B20DCCN001";
  string tmp = "";
  if (a.ns[1] == '/') a.ns = "0" + a.ns;
  if (a.ns[4] == '/') a.ns.insert(3, "0");
}

void in(SinhVien a) {
  cout << a.ma << " " << a.ten << " "
       << a.lop << " " << a.ns << " "
       << fixed << setprecision(2) << a.gpa << endl;
}

int main() {
  faster();
  struct SinhVien a;
  nhap(a);
  in(a);
  return 0;
}
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

##

```c

```

##

```c

```

##

```c

```
