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