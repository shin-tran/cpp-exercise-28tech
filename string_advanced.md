# String advanced | Phụ 18 | Chính 17

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

```

## Sắp xếp các từ trong xâu 2

```c

```

## Tần suất các từ xuất hiện trong xâu

```c

```

## Từ xuất hiện nhiều nhất, ít nhất

```c

```

## Kiểm tra xâu con

```c

```

## Chuẩn hóa tên 1

```c

```

## Chuẩn hóa tên 2

```c

```

## Tạo email và mật khẩu

```c

```

## Tạo email và mật khẩu 2

```c

```

## Ngôn ngữ lập trình Python

```c

```

## Tập từ chung của 2 xâu

```c

```

## Tập từ riêng của 2 xâu

```c

```

## Ghép xâu

```c

```

## Xâu có đầu cuối giống nhau

```c

```

## Số lớn nhất, nhỏ nhất

```c

```

## Xâu con liên tiếp các kí tự giống nhau

```c

```

## Xâu con liên tiếp các kí tự khác nhau

```c

```

## Số lớn nhất xuất hiện trong xâu

```c

```

## Tính tổng các số xuất hiện trong xâu

```c

```

## Ghép số

```c

```

## Tổng chữ số của số nguyên

```c

```

## Số đẹp 1

```c

```

## Số đẹp 2

```c

```

## Số đẹp 3

```c

```

## Số chia hết cho 6

```c

```

## Số chia hết cho 4

```c

```

## Số chia hết cho 15

```c

```

## Số chia hết cho 25

```c

```

## Số chia hết cho 11

```c

```

## Số nhị phân chia hết cho 5

```c

```

## Số nhị phân chia hết cho 2^K

```c

```

## Phép chia dư

```c

```

## Ước chung lớn nhất 1

```c

```

## Lũy thừa với cơ số lớn

```c

```

## Chữ số cuối cùng

```c

```

## Tìm số dư

```c

```

## Ước chung lớn nhất 2

```c

```

## Số may mắn

```c

```

## Xóa cụm 111

```c

```

## Tích giai thừa các chữ số

```c

```
