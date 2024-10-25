
# Giải bài vẽ hình

#### Bài 1

```c
#include <iostream>

using namespace std;

int main() {
  int w, h;
  cin >> h >> w;

  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) cout << "*";
    cout << endl;
  }

  return 0;
}
```

#### Bài 2

```c
#include <iostream>

using namespace std;

int main() {
  int w, h;
  cin >> h >> w;

  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      if (i == 1 || i == h) cout << "*";
      else if (j == 1 || j == w) cout << "*";
      else cout << " ";
    }
    cout << endl;
  }

  return 0;
}
```

#### Bài 3

```c
#include <iostream>

using namespace std;

int main() {
  int h;
  cin >> h;

  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= i; j++) cout << "*";
    cout << endl;
  }

  return 0;
}
```

#### Bài 4

```c
#include <iostream>

using namespace std;

int main() {
  int h;
  cin >> h;

  for (int i = h; i >= 1; i--) {
    for (int j = i; j >= 1; j--) cout << "*";
    cout << endl;
  }

  return 0;
}
```

#### Bài 5

```c
#include <iostream>

using namespace std;

int main() {
  int h;
  cin >> h;

  for (int i = 1; i <= h; i++) {
    int count = i - 2;
    for (int j = 1; j <= i; j++) {
      if (i == 1 || i == h) cout << "*";
      else if (j == 1 || j == i) cout << "*";
      while (count >= 1) {
        if (i != h) cout << " ";
        count--;
      }
    }
    cout << endl;
  }

  return 0;
}
```

#### Bài 6

```c
#include <iostream>

using namespace std;

int main() {
  int h;
  cin >> h;

  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= h - i; j++) cout << " ";
    for (int k = 1; k <= i; k++) cout << "*";
    cout << endl;
  }

  return 0;
}
```

#### Bài 7

```c
#include <iostream>

using namespace std;

int main() {
  int h;
  cin >> h;

  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= h - i; j++) cout << " ";
    for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
    cout << endl;
  }

  return 0;
}
```

#### Bài 8

```c
#include <iostream>

using namespace std;

int main() {
  int h;
  cin >> h;

  for (int i = h; i >= 1; i--) {
    for (int j = i - 1; j <= h - 1; j++) cout << " ";
    for (int j = 2 * i - 1; j >= 1; j--) cout << "*";
    cout << endl;
  }

  return 0;
}
```

#### Bài 9

```c
#include <iostream>

using namespace std;

int main() {
  int h;
  cin >> h;

  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= h - i; j++) cout << " ";
    for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
    cout << endl;
  }

  for (int i = h - 1; i >= 1; i--) {
    for (int j = i; j <= h - 1; j++) cout << " ";
    for (int j = 2 * i - 1; j >= 1; j--) cout << "*";
    cout << endl;
  }

  return 0;
}
```

#### Bài 10

```c
```

#### Bài 11

```c
```

#### Bài 12

```c
```

#### Bài 13

```c
```

#### Bài 14

```c
```

#### Bài 15

```c
```

#### Bài 16

```c
```

#### Bài 17

```c
```

#### Bài 18

```c
```

#### Bài 19

```c
```

#### Bài 21

```c
```

#### Bài 22

```c
```

#### Bài 23

```c
```

#### Bài 24

```c
```

#### Bài 25

```c
```

#### Bài 26

```c
```

#### Bài 27

```c
```

#### Bài 28

```c
```

#### Bài 29

```c
```
