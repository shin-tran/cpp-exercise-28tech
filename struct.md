# String advanced | Phụ 24 | Chính 21

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

## Cấu trúc sinh viên 1

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

## Cấu trúc nhân viên

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

struct NhanVien {
  string ma = "00001";
  string ten, gt, ns, dc, mst, hd;
};

void nhap(NhanVien &a) {
  getline(cin, a.ten);
  cin >> a.gt >> a.ns;
  cin.ignore();
  getline(cin, a.dc);
  cin >> a.mst >> a.hd;
}

void in(NhanVien a) {
  cout << a.ma << " " << a.ten << " "
       << a.gt << " " << a.ns << " "
       << a.dc << " " << a.mst << " "
       << a.hd << endl;
}

int main() {
  faster();
  NhanVien a;
  nhap(a);
  in(a);
  return 0;
}
```

## Cấu trúc sinh viên 2

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

struct SinhVien {
  string msv = "N20DCCN001";
  string ten, lop, ns;
  float gpa;
};

void nhapThongTinSV(SinhVien &a) {
  getline(cin, a.ten);
  cin >> a.lop;
  cin >> a.ns;
  cin >> a.gpa;
  if (a.ns[1] == '/') a.ns = "0" + a.ns;
  if (a.ns[4] == '/') a.ns.insert(3, "0");
}

void inThongTinSV(SinhVien a) {
  cout << a.msv << " " << a.ten << " "
       << a.lop << " " << a.ns << " "
       << fixed << setprecision(2) << a.gpa << endl;
}

int main() {
  faster();
  SinhVien a;
  nhapThongTinSV(a);
  inThongTinSV(a);
  return 0;
}
```

## Danh sách nhân viên

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

struct NhanVien {
  string ten, gt, ns, dc, mst, hd;
};

void nhap(NhanVien &a) {
  getline(cin, a.ten);
  cin >> a.gt >> a.ns;
  cin.ignore();
  getline(cin, a.dc);
  cin >> a.mst >> a.hd;
  cin.ignore();
}

void inds(NhanVien a[], int n) {
  int s = 0;
  for (int i = 0; i < n; ++i) {
    s = i + 1;
    cout << setw(5) << setfill('0') << s << " ";
    cout << a[i].ten << " " << a[i].gt << " "
         << a[i].ns << " " << a[i].dc << " "
         << a[i].mst << " " << a[i].hd << endl;
  }
}

int main() {
  faster();
  NhanVien ds[50];
  int n; cin >> n;
  cin.ignore();
  for (int i = 0; i < n; ++i) nhap(ds[i]);
  inds(ds, n);
  return 0;
}
```

## Diện tích hình tròn ngoại tiếp tam giác

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

#define PI 3.141592653589793238

struct point {
  double a, b;
  double distance(point p) {
    return sqrt(pow(a - p.a, 2) + pow(b - p.b, 2));
  }
  void nhap() {
    cin >> a >> b;
  }
};

void solve(point x, point y, point z) {
  double x1 = x.distance(y), x2 = x.distance(z), x3 = y.distance(z);
  if (x1 <= 0 || x2 <= 0 || x3 <= 0 || x1 + x2 <= x3 || x2 + x3 <= x1 || x1 + x3 <= x2) {
    cout << "INVALID\n"; return;
  }
  double p = (x1 + x2 + x3) / 2;
  double dt = sqrt(p * (p - x1) * (p - x2) * (p - x3));
  double r = x1 * x2 * x3 / (4 * dt);
  cout << fixed << setprecision(3) << PI * r * r << endl;
}

int main() {
  faster();
  int t; cin >> t;
  while (t--) {
    point x, y, z;
    x.nhap();
    y.nhap();
    z.nhap();
    solve(x, y, z);
  }
  return 0;
}
```

## Số thuận nghịch giảm dần

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

bool check(string s) {
  if (s.size() < 2) return false;
  string t = s;
  reverse(s.begin(), s.end());
  return t == s;
}

int main() {
  faster();
  auto cmp = [](const string a, const string b) {
    return (a.size() != b.size() ? a.size() > b.size() : a > b);
  };
  map<string, int, decltype(cmp)> mp(cmp);
  string s;
  while (cin >> s) {
    if (check(s)) mp[s]++;
  }
  for (auto it : mp) cout << it.first << " " << it.second << endl;
  return 0;
}
```

## Trẻ nhất - Già nhất

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

struct person {
  string ten, ns;
};

bool cmp(person a, person b) {
  string s = a.ns, t = b.ns;
  int n1 = (s[0] - '0') * 10 + (s[1] - '0'),
      t1 = (s[3] - '0') * 10+ (s[4] - '0'),
      na1 = stoi(s.substr(6));
  int n2 = (t[0] - '0') * 10 + (t[1] - '0'),
      t2 = (t[3] - '0') * 10+ (t[4] - '0'),
      na2 = stoi(t.substr(6));
  if (na1 != na2) return na1 < na2;
  if (t1 != t2) return t1 < t2;
  return n1 < n2;
}

int main() {
  faster();
  int n; cin >> n;
  person a[n];
  for (int i = 0; i < n; ++i)
    cin >> a[i].ten >> a[i].ns;
  sort(a, a + n, cmp);
  cout << a[n - 1].ten << "\n" << a[0].ten;
  return 0;
}
```

## Phép toán với phân số

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

struct PhanSo {
  ll tu, mau;
};

void nhap(PhanSo &p) {
  cin >> p.tu >> p. mau;
}

void rutGon(PhanSo &p) {
  ll k = ucln(p.tu, p.mau);
  p.tu /= k; p.mau /= k;
}

void in(PhanSo p) {
  cout << p.tu << "/" << p.mau << " ";
}

PhanSo tong(PhanSo a, PhanSo b) {
  PhanSo res;
  res.mau = 1ll * a.mau * b.mau;
  res.tu = 1ll * a.tu * b.mau + 1ll * a.mau * b.tu;
  rutGon(res);
  return res;
}

void process(PhanSo a, PhanSo b) {
  PhanSo c = tong(a, b);
  c.tu = pow(c.tu, 2);
  c.mau = pow(c.mau, 2);
  rutGon(c);
  in(c);
  PhanSo d;
  d.tu = a.tu * b.tu * c.tu;
  d.mau = a.mau * b.mau * c.mau;
  rutGon(d);
  in(d);
  cout << endl;
}

int main() {
  faster();
  int t; cin >> t;
  while (t--) {
    PhanSo a, b;
    nhap(a); nhap(b);
    process(a, b);
  }
  return 0;
}
```

## Danh sách sinh viên 1

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

struct SinhVien {
  string ma = "B20DCCN", ten, lop, ns;
  float gpa;
};

void nhap(SinhVien a[], int n) {
  for (int i = 0; i < n; i++) {
    cin.ignore();
    getline(cin, a[i].ten);
    cin >> a[i].lop;
    cin >> a[i].ns;
    cin >> a[i].gpa;
    if (a[i].ns[1] == '/') a[i].ns = "0" + a[i].ns;
    if (a[i].ns[4] == '/') a[i].ns.insert(3, "0");
  }
}

void in(SinhVien a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i].ma << setw(3) << setfill('0') << i + 1 << " "
         << a[i].ten << " " << a[i].lop << " "
         << a[i].ns << " " << fixed << setprecision(2) << a[i].gpa << endl;
  }
}

int main() {
  faster();
  SinhVien ds[50];
  int n; cin >> n;
  nhap(ds, n);
  in(ds, n);
  return 0;
}
```

## Danh sách sinh viên 2

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

struct SinhVien {
  string ma = "B20DCCN", ten, lop, ns;
  float gpa;
};

string to_lower(string s) {
  for (char &c : s) {
    if (isupper(c)) c = tolower(c);
  }
  return s;
}

string chuanhoaNS(string s) {
  if (s[1] == '/') s = "0" + s;
  if (s[4] == '/') s.insert(3, "0");
  return s;
}

string chuanhoaTen(string s) {
  stringstream ss(s);
  string w, res = "";
  while (ss >> w) {
    w = to_lower(w);
    w[0] = toupper(w[0]);
    res += w + " ";
  }
  res.pop_back();
  return res;
}

void nhap(SinhVien a[], int n) {
  for (int i = 0; i < n; i++) {
    cin.ignore();
    getline(cin, a[i].ten);
    cin >> a[i].lop;
    cin >> a[i].ns;
    cin >> a[i].gpa;
    a[i].ns = chuanhoaNS(a[i].ns);
    a[i].ten = chuanhoaTen(a[i].ten);
  }
}

void in(SinhVien a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i].ma << setw(3) << setfill('0') << i + 1 << " "
         << a[i].ten << " " << a[i].lop << " "
         << a[i].ns << " " << fixed << setprecision(2) << a[i].gpa << endl;
  }
}

int main() {
  faster();
  SinhVien ds[50];
  int n; cin >> n;
  nhap(ds, n);
  in(ds, n);
  return 0;
}
```

## Danh sách sinh viên 3

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

struct SinhVien {
  string ma = "B20DCCN", ten, lop, ns;
  int stt;
  float gpa;
};

string to_lower(string s) {
  for (char &c : s) {
    if (isupper(c)) c = tolower(c);
  }
  return s;
}

string chuanhoaNS(string s) {
  if (s[1] == '/') s = "0" + s;
  if (s[4] == '/') s.insert(3, "0");
  return s;
}

string chuanhoaTen(string s) {
  stringstream ss(s);
  string w, res = "";
  while (ss >> w) {
    w = to_lower(w);
    w[0] = toupper(w[0]);
    res += w + " ";
  }
  res.pop_back();
  return res;
}

void nhap(SinhVien a[], int n) {
  for (int i = 0; i < n; i++) {
    a[i].stt = i + 1;
    cin.ignore();
    getline(cin, a[i].ten);
    cin >> a[i].lop;
    cin >> a[i].ns;
    cin >> a[i].gpa;
    a[i].ns = chuanhoaNS(a[i].ns);
    a[i].ten = chuanhoaTen(a[i].ten);
  }
}

void in(SinhVien a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i].ma << setw(3) << setfill('0') << a[i].stt << " "
         << a[i].ten << " " << a[i].lop << " "
         << a[i].ns << " " << fixed << setprecision(2) << a[i].gpa << endl;
  }
}

void sapxep(SinhVien a[], int n) {
  sort(a, a + n, [](const SinhVien &a, const SinhVien &b){
    return a.gpa > b.gpa;
  });
}

int main(){
  SinhVien ds[50];
  int n; cin >> n;
  nhap(ds, n);
  sapxep(ds, n);
  in(ds, n);
  return 0;
}
```

## Sắp xếp danh sách mặt hàng

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

struct mathang {
  int ma;
  string ten, nhom;
  float mua, ban, loinhuan;
};

void in(mathang a[], int n) {
  for (int i = 0; i < n; i++)
    cout << a[i].ma << " " << a[i].ten << " " << a[i].nhom << " "
         << fixed << setprecision(2) << a[i].loinhuan << endl;
}

void nhap(mathang a[], int n) {
  for (int i = 0; i < n; i++) {
    a[i].ma = i + 1;
    cin.ignore();
    getline(cin, a[i].ten);
    getline(cin, a[i].nhom);
    cin >> a[i].mua >> a[i].ban;
    a[i].loinhuan = a[i].ban - a[i].mua;
  }
}

int main(){
  faster();
  mathang ds[50];
  int n; cin >> n;
  nhap(ds, n);
  sort(ds, ds + n, [](const mathang &a, const mathang &b){
    return a.loinhuan > b.loinhuan;
  });
  in(ds, n);
  return 0;
}
```
