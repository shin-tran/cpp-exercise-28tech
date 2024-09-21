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