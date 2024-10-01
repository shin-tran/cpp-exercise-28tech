#### Bài 1

```c
#include <iostream>
using namespace std;

bool isPrime(int n) {
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (n % 2 == 0 || n % 3 == 0) return false;
  for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) return false;
  }
  return true;
}

bool checkPrimeEachDigit (int n) {
  while (n > 0) {
    if (!isPrime(n % 10)) return false;
    n /= 10;
  }
  return true;
}

bool isPurePrime(int n) {
  if (!isPrime(n)) return false;
  if (!checkPrimeEachDigit(n)) return false;

  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return isPrime(sum);
}

int main() {
  int start, end, count = 0;
  cin >> start >> end;
  for (int i = start; i <= end; i++) {
    if (isPurePrime(i)) {
      count++;
    }
  }
  cout << count;

  return 0;
}
```

#### Bài 2

```c
#include <iostream>
using namespace std;

bool isPerfectNumber (int n) {
  int sum = 0;
  for (int i = 1; i <= n / 2; i++) {
    if (n % i == 0) sum += i;
  }
  return sum == n;
}

int main() {
  int start, end;
  cin >> start >> end;
  for (int i = start; i <= end; i++) {
    if (isPerfectNumber(i)) cout << i << " ";
    else cout << "0";
  }

  return 0;
}
```

#### Bài 3

```c
#include <iostream>

using namespace std;

bool isPrime(int n) {
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (n % 2 == 0 || n % 3 == 0) return false;
  for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) return false;
  }
  return true;
}

bool isIncreasingDecreasing(int n) {
  int lastDigit = n % 10;
  n /= 10;
  bool increasing = true;
  bool decreasing = true;
  while (n > 0) {
    int digit = n % 10;
    if (digit >= lastDigit) decreasing = false;
    if (digit <= lastDigit) increasing = false;
    lastDigit = digit;
    n /= 10;
  }
  return increasing || decreasing;
}

int countPrimeIncreasingDecreasing(int digits) {
  int count = 0;
  int start = pow(10, digits - 1);
  int end = pow(10, digits) - 1;
  for (int i = start; i <= end; i++) {
    if (isPrime(i) && isIncreasingDecreasing(i)) {
      count++;
    }
  }
  return count;
}

int main() {
  int digits;
  cin >> digits;
  int result = countPrimeIncreasingDecreasing(digits);
  cout << result;
  return 0;
}
```

#### Bài 4

```c
#include <iostream>

using namespace std;

bool isPrime(int n) {
  if (n <= 1) return false; // 0 and 1 are not prime numbers
  if (n <= 3) return true; // 2 and 3 are prime numbers
  if (n % 2 == 0 || n % 3 == 0) return false; // multiples of 2 and 3 are not prime numbers
  for (int i = 5; i * i <= n; i += 6) { // prime numbers are in the form of 6k +/- 1
    if (n % i == 0 || n % (i + 2) == 0) return false; // multiples of i and i + 2 are not prime numbers
  }
  return true;
}

int sumDigits(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

bool isFibonacci (int n) {
  if (n == 0 || n == 1) return true;
  int a = 0, b = 1;
  while (b < n) {
    int c = a + b;
    a = b;
    b = c;
  }
  return b == n;
}

bool isBeautifulNumber(int n) {
  return isPrime(n) && isFibonacci(sumDigits(n));
}

int main() {
  int start, end;
  cin >> start >> end;
  for (int i = start; i <= end; ++i) {
    if (isBeautifulNumber(i)) cout << i << " ";
  }
  return 0;
}
```

#### Bài 5

```c
#include <iostream>

using namespace std;

int main() {
  int start;
  cin >> start;
  if (start < 2 || start > 92) {
    cout << "Dau vao khong hop le.";
    return 1;
  }
  long long a = 0, b = 1; 

  for (int i = 0; i < start; i++) {
    if (i <= 1) {
      cout << i << " "; 
    } else {
      long long c = a + b;
      cout << c << " ";
      a = b;
      b = c;
    }
  }
  return 0;
}
```

#### Bài 6

```c
```

#### Bài 7

```c
```

#### Bài 8

```c
```

#### Bài 9

```c
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

#### Bài 20

```c
```
