# String basic | Phụ 18 | Chính 17

## Chữ số đứng giữa

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s;
  getline(cin, s);
  int size = s.size();
  if (size % 2 == 0) cout << "NOT FOUND";
  else cout << s[size / 2];
  return 0;
}
```

## In lật ngược, in hoa, in thường

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

void to_lower(string &s) {
  for (int i = 0; i < s.size(); i++) {
    s[i] = tolower(s[i]);
  }
}

void to_upper(string &s) {
  for (int i = 0; i < s.size(); i++) {
    s[i] = toupper(s[i]);
  }
}

int main() {
  faster();
  string s;
  getline(cin, s);
  int size = s.size();
  for (int i = size - 1; i >= 0; i--) cout << s[i];
  to_lower(s);
  cout << endl;
  for (int i = 0; i < size; i++) cout << s[i];
  to_upper(s);
  cout << endl;
  for (int i = 0; i < size; i++) cout << s[i];
  return 0;
}
```

## Kí tự trong đoạn

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s;
  getline(cin, s);
  int sum = 0;
  for (int i = 0; i < s.size(); i++) {
    if (isdigit(s[i])) sum += s[i] - '0';
  }
  cout << sum;
  return 0;
}
```

## Số đẹp

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s;
  getline(cin, s);
  for (string::size_type i = 1; i < s.size() - 1; i++) {
    if (s[i - 1] != s[i] - 1 && s[i + 1] != s[i] + 1) {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  return 0;
}
```

## Chèn dấu phẩy

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s, result;
  getline(cin, s);
  int size = s.size(), cnt = 0;
  for (int i = size - 1; i >= 0; i--) {
    cnt++;
    result.push_back(s[i]);
    if (cnt == 3 && i != 0) {
      result.push_back(',');
      cnt = 0;
    }
  }

  reverse(result.begin(), result.end());
  cout << result << endl;
  return 0;
}
```

## Sắp xếp chữ số

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s; getline(cin, s);
  int n = s.size();
  sort(s.begin(), s.end());
  auto non_zero = s.find_first_not_of('0');
  for (int i = non_zero; i < n; i++) cout << s[i];
  return 0;
}
```

## In ra chữ số

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s, so, chuCai; getline(cin, s);
  int n = s.size();
  for (int i = 0; i < n; i++) {
    if (isdigit(s[i])) so.push_back(s[i]);
    else chuCai.push_back(s[i]);
  }
  for (char x : so) cout << x;
  cout << endl;
  for (char x : chuCai) cout << x;
  return 0;
}
```

## 28tech và Tèo

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main() {
  faster();
  string s, r = "28tech", result; getline(cin, s);
  set<char> se(r.begin(), r.end());
  for (char c : s) {
    if (se.find(c) == se.end()) result += c;
  }
  if (result.empty()) cout << "EMPTY";
  else cout << result;
  return 0;
}
```

## Chèn

```c

```

## Kí tự lặp lại đầu tiên

```c

```

## Ngày sinh

```c

```

## Đếm từ in hoa

```c

```

## Liệt kê từ

```c

```

## Tí và 28tech

```c

```

## Từ chẵn lẻ

```c

```

## Sắp xếp kí tự

```c

```

## Sắp xếp các từ

```c

```

## Sắp xếp theo chiều dài

```c

```

## Đếm số lượng từ khác nhau trong xâu

```c

```

## Các từ thuận nghịch

```c

```
