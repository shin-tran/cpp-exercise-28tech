#include <iostream>

using namespace std;

int main() {
  int h;
  cin >> h;

  for (int i = 1; i < h * 2; i++) {
    for (int j = 1; j < h * 2; j++) {
      int num = h - min(min(i - 1, j - 1), min((h * 2 - 1) - i, (h * 2 - 1) - j));
      cout << num << " ";
    }
    cout << endl;
  }

  return 0;
}