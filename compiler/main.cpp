#include <iostream>

using namespace std;

int main() {
  int h;
  cin >> h;

  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= h - i; j++) cout << " ";
    for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
    cout << endl;
  }

  for (int i = h - 1; i >= 1; i--) {
    for (int j = i; j <= h - 1; j++) cout << " ";
    for (int j = 2 * i - 1; j >= 1; j--) cout << "*";
    cout << endl;
  }

  return 0;
}