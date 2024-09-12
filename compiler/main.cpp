#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  long long a, b, c, d, e;

  // Nhập năm số nguyên 64 bit
  cin >> a >> b >> c >> d >> e;

  // Tìm số nhỏ thứ nhì
  long long min1 = min({a, b, c, d, e}); // Tìm số nhỏ nhất
  long long min2 = 1e18; // Khởi tạo số nhỏ thứ nhì với giá trị rất lớn

  // Duyệt qua 5 số để tìm số nhỏ thứ nhì
  if (a > min1 && a < min2) min2 = a;
  if (b > min1 && b < min2) min2 = b;
  if (c > min1 && c < min2) min2 = c;
  if (d > min1 && d < min2) min2 = d;
  if (e > min1 && e < min2) min2 = e;

  // In ra số nhỏ thứ nhì
  cout << min2 << endl;

  return 0;
}