#include <iostream>

using namespace std;

int main() {
  int start;
  cin >> start;
  if (start < 2 || start > 92) {
    cout << "Dau vao khong hop le.";
    return 1;
  }
  long long a = 0, b = 1; 

  for (int i = 0; i < start; i++) {
    if (i <= 1) {
      cout << i << " "; 
    } else {
      long long c = a + b;
      cout << c << " ";
      a = b;
      b = c;
    }
  }
  return 0;
}