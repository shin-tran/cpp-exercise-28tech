#include <iostream>
using namespace std;

int main() {
  int n, m, sumPrime = 0;

  cin >> m >> n;
  
  for (int i = m; i <= n; ++i) {
    bool laSoNguyenTo = true;
    if (i <= 1) {
    laSoNguyenTo = false;
  } else {
      for (int j = 2; j <= i / 2; ++j) {
        if (i % j == 0) {
          laSoNguyenTo = false;
          break;
        }
      }
    }
    if (laSoNguyenTo) {
      sumPrime += i;
    }
  }

  cout << sumPrime;

  return 0;
}