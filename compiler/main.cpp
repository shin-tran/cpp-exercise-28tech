#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  long long sum = 0;

  cout << "Nhap gia tri n: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    sum += pow(-1, i) * i;
  }

  cout << "Tong cac so tu 1 den " << n << " la: " << sum << endl;

  return 0;
}