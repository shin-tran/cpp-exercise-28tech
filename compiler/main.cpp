#include <iostream>

using namespace std;

int main() {
  int a,b,c;

  cout << "Nhap do dai 3 canh cua tam giac a, b, c: ";
  cin >> a >> b >> c;

  if (a,b,c > 0) {
    if (a + b > c && a + c > b && b + c > a) {
      if (a == b && b == c) {
        cout << "1" << endl;
      } else if (a == b || a == c || b == c) {
        cout << "2" << endl;
      } else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
        cout << "3" << endl;
      } else {
        cout << "4" << endl;
      }
    } else {
      cout << "INVALID" << endl;
    }
  } else {
    cout << "INVALID" << endl;
  }

  return 0;
}