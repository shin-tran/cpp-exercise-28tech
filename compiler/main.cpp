#include <iostream>

using namespace std;

int main() {
  while (true) {
    int i;
    cout << "Hay nhap so nguyen duong (-1 de ket thuc): ";
    cin >> i;
    if (i <= 0 ) {
      return 1;
    } else {
      for (int j = i; j != 0; j--) cout << "* ";
    }
    cout << endl;
  }

  return 0;
}