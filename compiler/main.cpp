#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int C;

  cout << "Chuyen don vi do C sang F\n";
  cout << "Vui long nhap do C: ";
  cin >> C;

  float F = (C * 1.8) + 32;
  cout << fixed << setprecision(2);
  cout << "Do F la: " << F << endl;

  return 0;
}