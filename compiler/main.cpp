#include <iostream>
#include <cmath>

using namespace std;

bool laSoThuanNghich(int n) {
  int temp = n;
  int soDao = 0;
  while (temp > 0) {
    soDao = soDao * 10 + temp % 10;
    temp /= 10;
  }
  return n == soDao;
}

int demUocSoNguyenTo(int n) {
  int uocSo[100] = {0}; // Giả sử số lượng ước số nguyên tố không quá 100
  int soUoc = 0;
  for (int i = 2; i <= sqrt(n); i++) {
    while (n % i == 0) {
      bool daTonTai = false;
      for (int j = 0; j < soUoc; j++) {
        if (uocSo[j] == i) {
          daTonTai = true;
          break;
        }
      }
      if (!daTonTai) {
        uocSo[soUoc++] = i;
      }
      n /= i;
    }
  }
  if (n > 1) {
    bool daTonTai = false;
    for (int j = 0; j < soUoc; j++) {
      if (uocSo[j] == n) {
        daTonTai = true;
        break;
      }
    }
    if (!daTonTai) {
      uocSo[soUoc++] = n;
    }
  }
  return soUoc;
}

int main() {
  int a, b;
  cin >> a >> b;

  for (int i = a; i <= b; i++) {
    if (laSoThuanNghich(i) && demUocSoNguyenTo(i) >= 3) {
      cout << i << " ";
    }
  }

  return 0;
}