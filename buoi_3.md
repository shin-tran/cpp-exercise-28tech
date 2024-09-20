#### Bài 1

```c
#include <iostream>
using namespace std;

int main() {
  int n, sum;

  cout << "Enter a number: ";
  cin >> n;
  
  for (int i = 1; i <= n; ++i) {
    sum += i;
  }
  
  cout << "Sum = " << sum << endl;

  return 0;
}
```

#### Bài 2

```c
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n, sum;

  cin >> n;

  for (int i = 1; i <= n; ++i) {
    sum += pow(i, 2);
  }

  cout << sum << endl;

  return 0;
}
```

#### Bài 3

```c
#include <iostream>

using namespace std;

int main() {
  int n, sum;

  cin >> n;

  for (int i = 1; i <= n; ++i) {
    if (i % 3 == 0) {
      sum += i;
    }
  }

  cout << sum << endl;

  return 0;
}
```

#### Bài 4

```c
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n;
  float sum;

  cout << "Enter a number: ";
  cin >> n;
  
  for (int i = 1; i <= n; ++i) {
    sum += 1 / (float)i;
  }

  cout << fixed << setprecision(3);
  cout << "Sum = " << sum << endl;

  return 0;
}
```

#### Bài 5

```c
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n;
  float sum;

  cout << "Enter a number: ";
  cin >> n;
  
  for (int i = 1; i <= n; ++i) {
    sum += 1 / (2 * (float)i);
  }
  
  cout << fixed << setprecision(2);
  cout << "Sum = " << sum << endl;

  return 0;
}
```

#### Bài 6

```c
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n, sum;

  cin >> n;

  for (int i = 1; i <= n; ++i) {
    sum += pow(-1, i * i);
  }

  cout << sum << endl;

  return 0;
}
```

#### Bài 7

```c
#include <iostream>

using namespace std;

int main() {
  int n, sum;

  cin >> n;

  for (int i = 1; i <= n; ++i) {
    sum += 2 * i;
  }

  cout << sum << endl;

  return 0;
}
```

#### Bài 8

```c
#include <iostream>

using namespace std;

int main() {
  int n, sum;

  cin >> n;

  for (int i = 1; i <= n; ++i) {
    sum += 2 * (i - 1);
  }

  cout << sum << endl;

  return 0;
}
```

#### Bài 9

```c
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n, sum;

  cin >> n;

  for (int i = 1; i <= n; ++i) {
    sum += pow(i, 3);
  }

  cout << sum << endl;

  return 0;
}
```

#### Bài 10

```c
#include <iostream>

using namespace std;

int main() {
  int n, sum;

  cin >> n;

  for (int i = 1; i <= n; ++i) {
    sum *= i;
  }

  cout << sum << endl;

  return 0;
}
```

#### Bài 11

```c
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int x, y;

  cin >> x >> y;

  int powNum = pow(x, y);

  cout << powNum << endl;

  return 0;
}
```

#### Bài 12

```c
#include <iostream>

using namespace std;

int main() {
  long long n;
  int count = 0;

  cin >> n;

  if (n == 0) {
    count = 1;
  } else {
    while (n > 0) {
      n /= 10;
      count++;
    }
  }

  cout << count << endl;

  return 0;
}
```

#### Bài 13

```c
#include <iostream>

using namespace std;

int main() {
  long long n;
  int sum = 0;

  cin >> n;

  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }

  cout << sum << endl;

  return 0;
}
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

#### Bài 20

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
