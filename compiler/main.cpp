#include <iostream>
using namespace std;

int main() {
  int so_luong;
  float don_gia;
  char san_pham[100];

  cout << "Vui long nhap san pham: ";
  cin.get(san_pham, 100, '\n');

  cout << "Vui long nhap so luong: ";
  cin >> so_luong;

  cout << "Vui long nhap don gia: ";
  cin >> don_gia;

  int tien = so_luong * don_gia;
  int thue = tien * 10 / 100;

  cout << "======HOA DON======" << endl;
  cout << "San pham: " << san_pham << endl;
  cout << "So luong: " << so_luong << endl;
  cout << "Don gia: " << don_gia << endl;
  cout << "Tien: " << tien << endl;
  cout << "Thue: " << thue << endl;
  cout << "Tong tien: " << tien + thue << endl;

  return 0;
}