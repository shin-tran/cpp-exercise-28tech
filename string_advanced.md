# String advanced

## Đếm số loại ký tự trong xâu

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s; getline(cin, s);
  int chu_cai = 0, so = 0, dac_biet = 0;
  for (char c : s) {
    if (!isalnum(c)) dac_biet++;
    else if (isalpha(c)) chu_cai++;
    else so++;
  }
  cout << chu_cai << " " << so << " "<< dac_biet;
  return 0;
}
```

## In hoa, in thường

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

string to_upper(string s) {
  for (char &c : s) {
    if (islower(c)) c = toupper(c);
  }
  return s;
}

string to_lower(string s) {
  for (char &c : s) {
    if (isupper(c)) c = tolower(c);
  }
  return s;
}

int main() {
  faster();
  string s; getline(cin, s);
  cout << to_upper(s) << endl;
  cout << to_lower(s);
  return 0;
}
```

## Tần suất xuất hiện của ký tự

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

bool cmp(const pair<char, int>& a, const pair<char, int>& b) {
  return a.second > b.second;
}

int main() {
  faster();
  string s; getline(cin, s);
  map<char, int> mp;
  for (char c : s) mp[c]++;
  for (auto it : mp)
    cout << it.first << " " << it.second << endl;
  vector<pair<char, int>> v(mp.begin(), mp.end());
  sort(v.begin(), v.end(), cmp);
  for (auto it : v)
    cout << endl << it.first << " " << it.second;
  return 0;
}
```

## Ký tự xuất hiện nhiều nhất trong xâu

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

bool cmp(const pair<char, int>& a, const pair<char, int>& b) {
  return a.second < b.second;
}

int main() {
  faster();
  string s; getline(cin, s);
  map<char, int> mp;
  for (char c : s) mp[c]++;
  vector<pair<char, int>> v(mp.begin(), mp.end());
  sort(v.begin(), v.end(), cmp);
  auto min = v.begin(); auto max = v.rbegin();
  cout << (*max).first << " " << (*max).second << endl;
  cout << (*min).first << " " << (*min).second << endl;
  return 0;
}
```

## Ký tự xuất hiện ở cả 2 xâu

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s, t;
  getline(cin, s); getline(cin, t);
  set<char> s1(s.begin(), s.end()), s2(t.begin(), t.end()), hop, giao;
  auto it1 = s1.begin(), it2 = s2.begin();
  while (it1 != s1.end() && it2 != s2.end()) {
    if (*it1 == *it2) {
      hop.insert(*it1);
      giao.insert(*it1);
      ++it1; ++it2;
    } else if (*it1 < *it2) {
      hop.insert(*it1);
      ++it1;
    } else {
      hop.insert(*it2);
      ++it2;
    }
  }
  while (it1 != s1.end()) {
    hop.insert(*it1); ++it1;
  }
  while (it2 != s2.end()) {
    hop.insert(*it2); ++it2;
  }
  for (char c : giao) cout << c;
  cout << endl;
  for (char c : hop) cout << c;
  return 0;
}
```

## Ký tự xuất hiện ở cả 2 xâu 2

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s, t;
  getline(cin, s); getline(cin, t);
  set<char> s1(s.begin(), s.end()), s2(t.begin(), t.end()), hops, hopt;
  for (char c : s1)
    if (!s2.count(c)) hops.insert(c);
  for (char c : s2)
    if (!s1.count(c)) hopt.insert(c);
  for (char c : hops) cout << c;
  cout << endl;
  for (char c : hopt) cout << c;
  return 0;
}
```

## Xâu đối xứng

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s; getline(cin, s);
  string temp = s;
  reverse(temp.begin(), temp.end());
  if (temp == s) cout << "YES";
  else cout << "NO";
  return 0;
}
```

## Xâu pangram 1

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s; getline(cin, s);
  set<char> se;
  for (char c : s)
    if (isalpha(c)) se.insert(c);
  if (se.size() == 26) cout << "YES";
  else cout << "NO";
  return 0;
}
```

## Đếm số lượng từ trong xâu

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s, w; getline(cin, s);
  stringstream ss(s);
  set<string> se;
  vector<string> ve;
  while (ss >> w) {
    if (!se.count(w)) {
      se.insert(w);
      ve.push_back(w);
    }
  }
  for (const string& c : se) cout << c << " ";
  cout << endl;
  for (const string& c : ve) cout << c << " ";
  return 0;
}
```

## Liệt kê các từ khác nhau trong xâu

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s, w; getline(cin, s);
  stringstream ss(s);
  set<string> se;
  vector<string> ve;
  while (ss >> w) {
    if (!se.count(w)) {
      se.insert(w);
      ve.push_back(w);
    }
  }
  for (const string& c : se) cout << c << " ";
  cout << endl;
  for (const string& c : ve) cout << c << " ";
  return 0;
}
```

## Sắp xếp các từ trong xâu 1

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

bool cmp(const string& a, const string& b) {
  if (a.size() != b.size()) return a.size() < b.size();
  return a < b;
}

int main() {
  faster();
  string s, w; getline(cin, s);
  stringstream ss(s);
  set<string> se;
  vector<string> ve;
  while (ss >> w) {
    if (!se.count(w)) {
      se.insert(w);
      ve.push_back(w);
    }
  }
  for (const string& c : se) cout << c << " ";
  cout << endl;
  sort(ve.begin(), ve.end(), cmp);
  for (const string& c : ve) cout << c << " ";
  return 0;
}
```

## Sắp xếp các từ trong xâu 2

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

bool cmp(const string& a, const string& b) {
  return a.size() < b.size();
}

bool check(string s) {
  string t = s;
  reverse(t.begin(), t.end());
  return t == s;
}

int main() {
  faster();
  string s, w; getline(cin, s);
  stringstream ss(s);
  set<string> se;
  vector<string> ve;
  while (ss >> w) {
    if (!se.count(w) && check(w)) {
      se.insert(w);
      ve.push_back(w);
    }
  }
  stable_sort(ve.begin(), ve.end(), cmp);
  for (const string& c : ve) cout << c << " ";
  return 0;
}
```

## Tần suất các từ xuất hiện trong xâu

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s, w; getline(cin, s);
  stringstream ss(s);
  map<string, int> mp;
  vector<pair<string, int>> ve;
  while (ss >> w) {
    if (!mp.count(w)) ve.push_back({w, 1});
    mp[w]++;
  }
  for (auto &it : ve) it.second = mp[it.first];
  for (auto it : mp) cout << it.first << " " << it.second << endl;
  for (auto it : ve) cout << endl << it.first << " " << it.second;
  return 0;
}
```

## Từ xuất hiện nhiều nhất, ít nhất

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
  return a.second < b.second;
}

int main() {
  faster();
  string s, w; getline(cin, s);
  stringstream ss(s);
  map<string, int> mp;
  while (ss >> w) mp[w]++;
  vector<pair<string, int>> ve(mp.begin(), mp.end());
  sort(ve.begin(), ve.end(), cmp);
  cout << ve.rbegin()->first << " " << ve.rbegin()->second << endl;
  cout << ve.begin()->first << " " << ve.begin()->second << endl;
  return 0;
}
```

## Kiểm tra xâu con

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s, t;
  getline(cin, s); getline(cin, t);
  int n = s.size();
  for (int i = 0; i < n; i++) {
    string sub = s.substr(i, i + t.size());
    if (sub == t) {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
  return 0;
}
```

## Chuẩn hóa tên 1

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

string to_upper(string s) {
  s[0] = toupper(s[0]);
  int n = s.size();
  for (int i = 1; i < n; i++) s[i] = tolower(s[i]);
  return s;
}

string format_date(string s) {
  if (s.size() < 2) s.insert(0, "0");
  return s;
}

int main() {
  faster();
  string s, t, w;
  getline(cin, s); getline(cin, t);
  stringstream ss(s);
  while (ss >> w) {
    cout << to_upper(w) << " ";
  }
  cout << endl;
  ss.str(t);
  ss.clear();
  bool check = false;
  while (getline(ss, w, '/')) {
    if (check) cout << "/";
    cout << format_date(w);
    check = true;
  }
  return 0;
}
```

## Chuẩn hóa tên 2

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

string hoa_dau(string s) {
  s[0] = toupper(s[0]);
  int n = s.size();
  for (int i = 1; i < n; i++) s[i] = tolower(s[i]);
  return s;
}

string to_upper(string s) {
  int n = s.size();
  for (int i = 0; i < n; i++) s[i] = toupper(s[i]);
  return s;
}

int main() {
  faster();
  string s, w; getline(cin, s);
  stringstream ss(s);
  vector<string> ve;
  while (ss >> w) {
    ve.push_back(hoa_dau(w));
  }
  int n = ve.size();
  ve[n - 1] = to_upper(ve[n - 1]);
  for (int i = 0; i < n; i++) {
    cout << ve[i];
    if (i != n - 2) cout << " ";
    else cout << ", ";
  }
  cout << endl;
  cout << ve[n - 1] << ", ";
  for (int i = 0; i < n - 1; i++) cout << ve[i] << " ";
  return 0;
}
```

## Tạo email và mật khẩu

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

string to_lower(string s) {
  for (char &c : s) c = tolower(c);
  return s;
}

string make_email(const vector<string>& v, string domain = "@xyz.edu.vn") {
  int n = v.size() - 1;
  if (n < 1) return "Invalid name!";
  string s = v[n - 1];
  for (int i = 0; i < n - 1; i++) {
    s.push_back(v[i][0]);
  }
  return s + domain;
}

string make_pw(const vector<string>& v) {
  int n = v.size();
  string pass = "";
  for (int i = 0; i < n; i++) {
    if (v[i][0] == '0') pass += v[i][1];
    else pass += v[i];
  }
  return pass;
}

int main() {
  faster();
  int t; cin >> t;
  cin.ignore();
  while (t--) {
    string s, w; getline(cin, s);
    stringstream ss(s);
    vector<string> db;
    while (ss >> w) {
      db.push_back(to_lower(w));
    }
    if (db.size() < 2) {
      cout << "Invalid input!\n";
      continue;
    }
    cout << make_email(db) << "\n";
    string s2 = db[db.size() - 1];
    ss.str(s2);
    ss.clear();
    vector<string> pw;
    while (getline(ss, w, '/')) {
      pw.push_back(w);
    }
    cout << make_pw(pw) << "\n";
  }
  return 0;
}
```

## Tạo email và mật khẩu 2

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

vector<string> email_list, pw_list;

string to_lower(string s) {
  for (char &c : s) c = tolower(c);
  return s;
}

string make_email(const vector<string>& v, string domain = "@xyz.edu.vn") {
  int n = v.size() - 1;
  if (n < 1) return "Invalid name!";
  string s = v[n - 1];
  for (int i = 0; i < n - 1; i++) {
    s.push_back(v[i][0]);
  }
  string email = s + domain;
  int cnt = count_if(email_list.begin(), email_list.end(), [&s](const string& email) {
    return email.find(s) != string::npos;
  });
  if (cnt)
    return s + to_string(cnt + 1) + domain;
  return s + domain;
}

string zero_rm(const string& s) {
  if (s[0] == '0') return s.substr(1);
  return s;
}

int main() {
  faster();
  int t; cin >> t;
  cin.ignore();
  while (t--) {
    string s, w; getline(cin, s);
    stringstream input_parts(s);
    vector<string> name_parts;
    while (input_parts >> w) {
      name_parts.push_back(to_lower(w));
    }
    if (name_parts.size() < 2) {
      cout << "Invalid input!\n";
      continue;
    }
    email_list.push_back(make_email(name_parts));
    string s2 = name_parts[name_parts.size() - 1];
    input_parts.str(s2);
    input_parts.clear();
    string pw;
    while (getline(input_parts, w, '/')) {
      pw += zero_rm(w);
    }
    pw_list.push_back(pw);
  }
  for (size_t i = 0; i < email_list.size(); i++) {
    cout << email_list[i] << endl << pw_list[i] << endl;
  }
  return 0;
}
```

## Ngôn ngữ lập trình Python

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s; getline(cin, s);
  string t = "python";
  int cnt = 0;
  for (size_t i = 0; i < s.length(); i++) {
    if (cnt >= 6) break;
    if (s[i] == t[cnt]) ++cnt;
  }
  if (cnt == 6) cout << "YES";
  else cout << "NO";
  return 0;
}
```

## Tập từ chung của 2 xâu

```c

```

## Tập từ riêng của 2 xâu

```c

```

## Ghép xâu

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  int t; cin >> t;
  vector<string> v;
  while (t--) {
    string s; cin >> s;
    v.push_back(s);
  }
  sort(v.begin(), v.end(), [](const string& a, const string& b)->bool {
    string ab = a + b;
    string ba = b + a;
    return ab > ba;
  });
  for (string s : v) cout << s;
  return 0;
}
```

## Xâu có đầu cuối giống nhau

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s; cin >> s;
  int cnt[256] = {0};
  for (char x : s) cnt[x]++;
  ll ans = s.size();
  for (int i = 0; i < 256; i++) {
    if (cnt[i] != 0) {
      ans += 1ll * cnt[i] * (cnt[i] - 1) / 2;
    }
  }
  cout << ans;
  return 0;
}
```

## Số lớn nhất, nhỏ nhất

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

void find_max(int m, int s) {
  string res = "";
  while (m--) {
    if (s >= 9) {
      res += to_string(9);
      s -= 9;
    } else {
      res += to_string(s);
      s = 0;
    }
  }
  cout << res;
}

void find_min(int m, int s) {
  string res = "";
  m--; s--;
  while (m--) {
    if (s >= 9) {
      res += to_string(9);
      s -= 9;
    }
    else {
      res += to_string(s) + res;
      s = 0;
    }
  }
  ++s;
  res = to_string(s) + res;
  cout << res;
}

int main() {
  faster();
  int m, s; cin >> m >> s;
  if (m * 9 < s || (s == 0 && m > 1)) cout << "NOT FOUND";
  else {
    find_min(m, s);
    cout << endl;
    find_max(m, s);
  }
  return 0;
}
```

## Xâu con liên tiếp các kí tự giống nhau

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s; cin >> s;
  s += '@';
  int cnt = 1, res = 1;
  char ans = s[0];
  for (int i = 1; i < s.size(); i++) {
    if (s[i] == s[i - 1]) {
      ++cnt;
    } else {
      if (cnt > res) {
        res = cnt;
        ans = s[i - 1];
      } else if (cnt == res) {
        ans = max(ans, s[i - 1]);
      }
      cnt = 1;
    }
  }
  string kq = string(res, ans);
  cout << kq;
  return 0;
}
```

## Xâu con liên tiếp các kí tự khác nhau

```c

```

## Số lớn nhất xuất hiện trong xâu

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

bool cmp(const string& a, const string& b) {
  if (a.size() != b.size()) return a.size() > b.size();
  return a > b;
}

int main() {
  faster();
  string s; cin >> s;
  s += '@';
  vector<string> num;
  string tmp = "";
  for (char c : s) {
    if (isdigit(c)) tmp += c;
    else {
      while (tmp.size() > 1 && tmp[0] == '0') tmp.erase(0, 1);
      if (tmp != "")
        num.push_back(tmp);
      tmp = "";
    }
  }
  sort(num.begin(), num.end(), cmp);
  cout << num[0];
  return 0;
}
```

## Tính tổng các số xuất hiện trong xâu

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s; cin >> s;
  s += '@';
  ll sum = 0, tmp = 0;
  for (char c : s) {
    if (isdigit(c)) tmp = tmp * 10 + (c - '0');
    else {
      sum += tmp;
      tmp = 0;
    }
  }
  cout << sum;
  return 0;
}
```

## Ghép số

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s; cin >> s;
  s += '@';
  vector<string> v;
  string temp = "";
  for (size_t i = 0; i < s.size(); i++) {
    if (isdigit(s[i])) temp += s[i];
    else {
      while (temp.size() > 1 && temp[0] == '0') temp.erase(0, 1);
      if (temp != "") v.push_back(temp);
      temp = "";
    }
  }
  sort(v.begin(), v.end(), [](const string& a, const string& b)->bool{
    return a + b > b + a;
  });
  for (string s : v) cout << s;
  return 0;
}
```

## Tổng chữ số của số nguyên

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {
  faster();
  string s; cin >> s;
  int sum = 0;
  for (size_t i = 0; i < s.length(); i++)
    sum += s[i] - '0';
  cout << sum;
  return 0;
}
```

## Số đẹp 1

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int ngto(int n) {
  for (int i = 2; i <= sqrt(n); i++)
    if (n % i == 0) return 0;
  return n > 1;
}

int check(string s) {
  int sum = 0;
  for (char c : s) {
    if (c != '2' && c != '3' && c != '5' && c != '7')
      return 0;
    sum += c - '0';
  }
  return ngto(sum);
}

int main() {
  faster();
  string s; cin >> s;
  if (check(s)) cout << "YES";
  else cout << "NO";
  return 0;
}
```

## Số đẹp 2

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int check(string s) {
  int l = 0, r = s.size() - 1, ok = 0;
  while (l <= r) {
    if (s[l] != s[r]) return 0;
    if (s[l] == '6') ok = 1;
    l++; r--;
  }
  return ok;
}

int main() {
  faster();
  string s; cin >> s;
  if (check(s)) cout << "YES";
  else cout << "NO";
  return 0;
}
```

## Số đẹp 3

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int tang(string s) {
  for (size_t i = 1; i < s.size(); i++)
    if (s[i] < s[i - 1]) return 0;
  return 1;
}

int giam(string s) {
  for (size_t i = 1; i < s.size(); i++)
    if (s[i] > s[i - 1]) return 0;
  return 1;
}

int main() {
  faster();
  string s; cin >> s;
  if (tang(s) || giam(s)) cout << "YES";
  else cout << "NO";
  return 0;
}
```

## Số chia hết cho 6

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

ll modCal(string s, int n) {
  ll mod = 0;
  for (size_t i = 0; i < s.size(); i++) {
    mod = (mod * 10 + s[i] - '0') % n;
  }
  return mod;
}

int main() {
  faster();
  string s;
  ll n = 6;
  cin >> s;
  if (modCal(s, n) == 0) cout << "YES";
  else cout << "NO";
  return 0;
}
```

## Số chia hết cho 4

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int check(string s) {
  int n = s.size();
  if (n == 1) {
    if (n == 1) {
      if ((s[n-1] - '0') % 4 == 0) return 1;
      return 0;
    }
  }
  string tmp = "";
  tmp += s[n-2];
  tmp += s[n-1];
  return (stoi(tmp) % 4 == 0);
}

int main() {
  faster();
  string s; cin >> s;
  if (check(s)) cout << "YES";
  else cout << "NO";
  return 0;
}
```

## Số chia hết cho 15

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int check(string s) {
  int n = s.size();
  int sum = 0;
  for (int i = 0; i < n; i++)
    sum += s[i] - '0';
  return (sum % 3 == 0 && (s[n-1] - '0') % 5 == 0);
}

int main() {
  faster();
  string s; cin >> s;
  if (check(s)) cout << "YES";
  else cout << "NO";
  return 0;
}
```

## Số chia hết cho 25

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s; cin >> s;
  int num = 0;
  if (s.size() == 1) {
    num = s[0] - '0';
  } else {
    num = (s[s.size() - 2] - '0') * 10 + (s.back() - '0');
  }
  if (num % 25 == 0) cout << "YES";
  else cout << "NO";
  return 0;
}
```

## Số chia hết cho 11

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int check(string s) {
  int s1 = 0, s2 = 0;
  for (int i = 0; i < s.size(); i++) {
    if (i % 2 == 0) s1 += s[i] - '0';
    else s2 += s[i] - '0';
  }
  int k = abs(s1 - s2);
  return k % 11 == 0;
}

int main() {
  faster();
  string s; cin >> s;
  if (check(s)) cout << "YES";
  else cout << "NO";
  return 0;
}
```

## Số nhị phân chia hết cho 5

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s; cin >> s;
  int n = s.size();
  ll so = 0, lt = 1;
  for (int i = n - 1; i >= 0; i--) {
    so += (s[i] - '0') * lt;
    so %= 5;
    lt *= 2;
    lt %= 5;
  }
  if (so == 0) cout << "YES";
  else cout << "NO";
  return 0;
}
```

## Số nhị phân chia hết cho 2^K

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s; cin >> s;
  int k; cin >> k;
  int cnt = 0;
  for (int i = s.size() - 1; i >= 0; i--) {
    if (s[i] == '0') ++cnt;
    else break;
  }
  if (cnt >= k) cout << "YES";
  else cout << "NO";
  return 0;
}
```

## Phép chia dư

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string n;
  ll m;
  cin >> n >> m;
  ll res = 0;
  for (int i = 0; i < n.size(); i++) {
    res = res * 10 + (n[i] - '0');
    res %= m;
  }
  cout << res;
  return 0;
}
```

## Ước chung lớn nhất 1

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

ll gcd(ll a, ll b) {
  while (b) {
    ll temp = a;
    a %= b;
    b = temp;
  }
  return a;
}

int main() {
  faster();
  string n;
  ll m;
  cin >> n >> m;
  ll res = 0;
  for (int i = 0; i < n.size(); i++) {
    res = res * 10 + (n[i] - '0');
    res %= m;
  }
  cout << gcd(m, res);
  return 0;
}
```

## Lũy thừa với cơ số lớn

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

ll pow_mod(ll a, ll b, ll c) {
  ll res = 1;
  while (b) {
    if (b % 2) {
      res *= a;
      res %= c;
    }
    a *= a;
    a %= c;
    b /= 2;
  }
  return res;
}

int main() {
  faster();
  string n;
  int mod = 1e9 + 7;
  ll m;
  cin >> n >> m;
  ll res = 0;
  for (int i = 0; i < n.size(); i++) {
    res = res * 10 + (n[i] - '0');
    res %= mod;
  }
  cout << pow_mod(res, m, mod);
  return 0;
}
```

## Chữ số cuối cùng

```c

```

## Tìm số dư

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  int n, mod = 5; cin >> n;
  ll res = 0;
  for (int i = 1; i <= 4; i++) {
    int ans = pow(i, n);
    res += ans % mod;
  }
  cout << res;
  return 0;
}
```

## Ước chung lớn nhất 2

```c

```

## Số may mắn

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s; cin >> s;
  int res = 0;
  for (char c : s) {
    res += c - '0';
  }
  while (res > 9) {
    int n = res;
    res = 0;
    while (n) {
      res += n % 10;
      n /= 10;
    }
  }
  if (res == 9) cout << "YES";
  else cout << "NO";
  return 0;
}
```

## Xóa cụm 111

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s, t = "111"; cin >> s;
  int pos = s.find(t);
  if (pos != string::npos) {
    s.erase(pos, t.size());
  }
  if (!s.empty()) cout << s;
  else cout << "EMPTY";
  return 0;
}
```

## Tích giai thừa các chữ số

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s; cin >> s;
  int len = s.size();
  string ans = "";
  for (int i = 0; i < len; i++) {
    if (s[i] == '0' || s[i] == '1') continue;
    else if (s[i] == '4') ans += "223";
    else if (s[i] == '6') ans += "35";
    else if (s[i] == '8') ans += "2227";
    else if (s[i] == '9') ans += "2337";
    else ans += s[i];
  }
  sort(ans.begin(), ans.end(), greater<char>());
  cout << ans;
  return 0;
}
```
