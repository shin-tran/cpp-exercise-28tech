#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define PI 3.14 
//chu vi hinh tron C = 2πr
//dien tich hinh tron S = πr^2

int main() {
  int r;

  cout << "Nhap ban kinh r: ";
  cin >> r;

  cout << fixed << setprecision(2);
  cout << "Chu vi hinh tron C = " << 2 * PI * r << endl;
  cout << "Dien tich hinh tron S = " << PI * pow(r, 2) << endl;

  return 0;
}