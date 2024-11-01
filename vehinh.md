
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
#include <iostream>

using namespace std;

int main() {
  int h;
  cin >> h;

  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= h; j++) {
      if (i == 1 || i == h || j == 1 || j == h || i == j || j == h - i + 1) cout << "*";
      else cout << " ";
    }
    
    cout << endl;
  }

  return 0;
}
```

#### Bài 11

```c
#include <iostream>

using namespace std;

int main() {
  int h;
  cin >> h;

  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= h; j++) {
      if (i == j || j == h - i + 1) cout << "*";
      else cout << " ";
    }
    
    cout << endl;
  }

  return 0;
}
```

#### Bài 12

```c
#include <iostream>

using namespace std;

int main() {
  int h;
  cin >> h;

  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= h * 2; j++) {
      if (j <= i || j > h * 2 - i) cout << "*";
      else cout << " ";
    }
    cout << endl;
  }

  return 0;
}
```

#### Bài 13

```c
#include <iostream>

using namespace std;

int main() {
  int h;
  cin >> h;

  for (int i = 1; i < h * 2; i++) {
    for (int j = 1; j <= h * 2; j++) {
      if (j <= h - i + 1 || j <= i - h + 1 || j >= h + i || j >= h * 3 - i) {
        cout << "*";
      } else cout << " ";
    }
    cout << endl;
  }

  return 0;
}
```

#### Bài 14

```c
#include <iostream>

using namespace std;

int main() {
  int h;
  cin >> h;

  for (int i = 1; i < h * 2; i++) {
    for (int j = 1; j <= h; j++) {
      if (j <= h - i + 1 || j <= i - h + 1) {
        cout << "*";
      } else cout << " ";
    }
    cout << endl;
  }

  return 0;
}
```

#### Bài 15

```c
#include <iostream>

using namespace std;

int main() {
  int h;
  cin >> h;

  for (int i = 1; i < h * 2; i++) {
    for (int j = 1; j <= h; j++) {
      if (i == 1 || i == h * 2 - 1 || j == 1 || j == h - i + 1 || j == i - h + 1) {
        cout << "*";
      } else cout << " ";
    }
    cout << endl;
  }

  return 0;
}
```

#### Bài 16

```c
#include <iostream>

using namespace std;

int main() {
  int h;
  cin >> h;

  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= h; j++) {
      cout << i;
    }
    cout << endl;
  }

  return 0;
}
```

#### Bài 17

```c
#include <iostream>

using namespace std;

int main() {
  int h;
  cin >> h;

  for (int i = 1; i <= h; i++) {
    for (int j = i; j < i + h; j++) {
      cout << j;
    }
    cout << endl;
  }

  return 0;
}
```

#### Bài 18

```c
#include <iostream>

using namespace std;

int main() {
  int h;
  cin >> h;

  for (int i = 1; i <= h; i++) {
    int num = i; int gap = h;
    for (int j = 1; j <= h; j++) {
      if (j <= i) {
        cout << num << " ";
        num += gap; gap--;
      }
    }
    cout << endl;
  }

  return 0;
}
```

#### Bài 19

```c
#include <iostream>

using namespace std;

int main() {
  int h;
  cin >> h;

  for (int i = 1; i < h * 2; i++) {
    for (int j = 1; j < h * 2; j++) {
      int num = h - min(min(i - 1, j - 1), min((h * 2 - 1) - i, (h * 2 - 1) - j));
      cout << num << " ";
    }
    cout << endl;
  }

  return 0;
}
```

#### Bài 20

```c
#include <iostream>

using namespace std;

int main() {
  int n = 5;

  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n + i - 1; j++) {
      if (j <= 5) cout << j << " ";
      else cout << "5 ";
    }
    cout << endl;
  }
  return 0;
}
```

#### Bài 21

```c
#include <iostream>

using namespace std;

int main() {
  int n = 5;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) cout << "~";
    int num = 2;
    for (int j = 1; j < 2 * i; j++) {
      if (j < i) {
        cout << num; num += 2;
      }
      else {
        cout << num; num -= 2;
      }
    }
    cout << endl;
  }
  return 0;
}
```

#### Bài 22

```c
#include <iostream>

using namespace std;

int main() {
  int n = 5, num = 1, count = 0;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      num += count;
      cout << num << " ";
      count++;
    }
    cout << endl;
  }
  return 0;
}
```

#### Bài 23

```c
#include <iostream>

using namespace std;

int main() {
  int n = 5;
  char kyTu = 'A';

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << kyTu;
    }
    kyTu++;
    cout << endl;
  }
  return 0;
}
```

#### Bài 24

```c
#include <iostream>

using namespace std;

int main() {
  int n = 5;
  char kyTu = 'A';

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < n; j++) {
      char inKyTu = kyTu + j;
      cout << inKyTu;
    }
    kyTu++;
    cout << endl;
  }
  return 0;
}
```

#### Bài 25

```c
#include <iostream>

using namespace std;

int main() {
  int n = 5;
  char kyTu = 'A';

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << kyTu << " ";
      kyTu++;
    }
    cout << endl;
  }
  return 0;
}
```

#### Bài 26

```c
#include <iostream>

using namespace std;

int main() {
  int n = 5;
  char kyTu = 'A';

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < n;j++) {
      if (i % 2 == 0) {
        char kyTuThuong = kyTu + 32 + j;
        cout << kyTuThuong << " ";
      }
      else {
        char kyTuHoa = kyTu + j;
        cout << kyTuHoa << " ";
      }
    }
    kyTu++;
    cout << endl;
  }
  return 0;
}
```

#### Bài 27

```c
#include <iostream>

using namespace std;

int main() {
  int n = 5;

  for (int i = 1; i <= n; i++) {
    char kyTu = 'A';
    for (int j = 1; j < i * 2;j++) {
      if (j < i) {
        cout << kyTu;
        kyTu += 2;
      } else {
        cout << kyTu;
        kyTu -= 2;
      }
    }
    cout << endl;
  }
  return 0;
}
```

#### Bài 28

```c
#include <iostream>

using namespace std;

int main() {
  int n = 5;
  char kyTu = 'a';

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << kyTu << " ";
      kyTu++;
    }
    cout << endl;
  }
  return 0;
}
```
