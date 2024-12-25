# Buổi 5

## Bài 1

```c
#include <iostream>

using namespace std;

int factorial (int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  int n, sum = 0;
  cin >> n;
  int original = n;
  while (n != 0) {
    int temp = n % 10;
    sum += factorial(temp);
    n /= 10;
  }
  if (sum == original) {
    cout << "1";
  } else {
    cout << "0";
  }
  return 0;
}
```

## Bài 2

```c
#include <iostream>

using namespace std;

long long getStartNumber(long long n) {
  while (n >= 10) {
    n /= 10;
  }
  return n;
}

int main() {
  long long n;
  cin >> n;
  long long endNumber = n % 10, startNumber = getStartNumber(n);
  cout << startNumber << " " << endNumber << endl;
  return 0;
}
```

## Bài 3

```c
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int sum = 0;
  while (n != 0) {
    int temp = n % 10;
    sum += temp;
    n /= 10;
  }
  cout << sum << endl;
  return 0;
}
```

## Bài 4

```c
#include <iostream>
using namespace std;

bool isPrime (int n) {
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (n % 2 == 0 || n % 3 == 0) return false;
  for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % i + 2 == 0) return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  if (isPrime(n)) {
    cout << "1\n";
  } else {
    cout << "0\n";
  }
  return 0;
}
```

## Bài 5

```c
#include <iostream>
using namespace std;

int factorial (int n) {
  if (n == 0 || n == 1) return 1;// dkien ket thuc de quy base case
  else return n * factorial(n - 1); // recursive case truong hop de quy
}

int main() {
  int n;
  cin >> n;
  cout << factorial(n) << endl;
  return 0;
}
```

## Bài 6

```c
#include <iostream>
using namespace std;

int sumDivisor(int n) {
  if (n == 1) return 1;
  int sum = 1;
  for (int i = 2; i * i < n; ++i) {
   if (n % i == 0) {
    sum += i;
    if (i != n / i) sum += n / i;
   }
  }
  return sum;
}

int main() {
  int n;
  cin >> n;
  for (int i = 2; i < n; i++) {
    if (sumDivisor(i) == i) cout << i << " ";
  }
  cout << endl;
  return 0;
}
```

## Bài 7

```c
#include <iostream>
#include <string>

using namespace std;

int main() {
    string n;
    cin >> n;

    int len = n.length();

    if (len > 1) {
        swap(n[0], n[len - 1]);
    }
    
    if (n[0] == '0') {
      n.erase(n.begin());
    }

    cout << n;
    return 0;
}
```

## Bài 8

```c
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = to_string(n).length();
    cout << count;
    return 0;
}
```

## Bài 9

```c
```

## Bài 10

```c
```

## Bài 11

```c
```

## Bài 12

```c
```

## Bài 13

```c
```

## Bài 14

```c
```

## Bài 15

```c
```

## Bài 16

```c
```

## Bài 17

```c
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
