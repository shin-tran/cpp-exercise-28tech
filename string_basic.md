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

```

## Chèn dấu phẩy

```c

```

## Sắp xếp chữ số

```c

```

## In ra chữ số

```c

```

## 28tech và Tèo

```c

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
