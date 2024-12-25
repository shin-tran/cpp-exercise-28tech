# Buổi 3

## Bài 1

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

## Bài 2

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

## Bài 3

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

## Bài 4

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

## Bài 5

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

## Bài 6

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

## Bài 7

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

## Bài 8

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

## Bài 9

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

## Bài 10

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

## Bài 11

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

## Bài 12

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

## Bài 13

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

## Bài 14

```c
#include <iostream>

using namespace std;

int main() {
  int n, sumChan = 0, sumLe = 0;

  cin >> n;

  while (n > 0) {
    int temp = n % 10; // lay chu so cuoi
    if (temp % 2 == 0) {
      sumChan += temp;
    } else {
      sumLe += temp;
    }
    n /= 10; // xoa chu so cuoi
  }

  cout << sumChan << " " << sumLe;

  return 0;
}
```

## Bài 15

```c
#include <iostream>

using namespace std;

int main() {
  int n, countChan = 0, countLe = 0;

  cin >> n;

  while (n > 0) {
    int temp = n % 10; // lay chu so cuoi
    if (temp % 2 == 0) {
      countChan++;
    } else {
      countLe++;
    }
    n /= 10; // xoa chu so cuoi
  }

  cout << countChan << " " << countLe;

  return 0;
}
```

## Bài 16

```c
#include <iostream>

using namespace std;

bool isPrime(int num) {
  if (num <= 1) return false;
  if (num == 2 || num == 3) return true;
  if (num % 2 == 0 || num % 3 == 0) return false;
  for (int i = 5; i * i <= num; i += 6) {
    if (num % i == 0 || num % (i + 2) == 0) return false;
  }
  return true;
}

int main() {
  int n, countPrime = 0, countNonPrime = 0;

  cin >> n;

  while (n > 0) {
    int temp = n % 10; // lay chu so cuoi
    if (isPrime(temp)) {
      countPrime++;
    } else {
      countNonPrime++;
    }
    n /= 10; // xoa chu so cuoi
  }

  cout << countPrime << " " << countNonPrime;

  return 0;
}
```

## Bài 17

```c
#include <iostream>

using namespace std;

int main() {
  int n, countChan = 0, countLe = 0;

  cin >> n;

  while (n > 0) {
    int temp = n % 10; // lay chu so cuoi
    if (temp % 2 == 0) {
      countChan++;
    } else {
      countLe++;
    }
    n /= 10; // xoa chu so cuoi
  }

  if (countChan == countLe) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}
```

## Bài 18

```c
```

## Bài 19

```c
```

## Bài 20

```c
```

## Bài 21

```c
```

## Bài 22

```c
```

## Bài 23

```c
```

## Bài 24

```c
```

## Bài 25

```c
```
