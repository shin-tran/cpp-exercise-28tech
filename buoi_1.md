## Buổi 1
#### Bài 1. Phần nguyên, phần dư
Giải:
```c
#include <iostream>

using namespace std;

int main() {
  int number_1;
  int number_2;
  
  cout << "Nhap so nguyen duong 1: ";
  cin >> number_1;
  cout << "Nhap so nguyen duong 2(khac 0): ";
  cin >> number_2;

  cout << "Phan nguyen: " << number_1 / number_2 << endl;
  cout << "Phan du: " << number_1 % number_2;

  return 0;
}
```
#### Bài 2. Tính toán giá trị biểu thức
Giải:
```c
#include <iostream>
#include <cmath>


using namespace std;

int main() {
  int x;
  
  cout << "Giai bieu thuc A(x) = x^3 + 3x^2 + x + 1\n";
  cout << "Nhap gia tri cua x: ";
  cin >> x;
  cout << "Dap an cua bieu thuc tren la: "<< pow(x, 3) + 3 * pow(x, 2) + x + 1; // ham pow(): tinh mu

  return 0;
}
```
#### Bài 3. Tính toán giá trị biểu thức 2
Giải:
```c
#include <iostream>
using namespace std;

int main() {
  int a, b, c;

  cout << "Tinh bieu thuc S = a*(b+c)+b*(a+c)\n";
  cout << "Nhap ba gia tri a, b, c(so nguyen duong): ";
  cin >> a >> b >> c;

  cout << "S = " << a * (b + c) + b * (a + c);

  return 0;
}
```
#### Bài 4. Tính tổng, hiệu, tích, thương
Giải:
```c
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int number_1;
  int number_2;

  cout << "Nhap hai so: ";
  cin >> number_1 >> number_2;
  cout << setprecision(2) << fixed;
  cout << "Tong cua hai so: " << number_1 + number_2 << endl;
  cout << "Hieu cua hai so: " << number_1 - number_2 << endl;
  cout << "Tich cua hai so: " <<(long long) number_1 * number_2 << endl;
  cout << "Thuong cua hai so: " << 1.0 * number_1 / number_2;

  return 0;
}
```
#### Bài 5. Tính chu vi, diện tích hình tròn
Giải:
```c
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
```
#### Bài 6. Tính khoảng cách
Giải:
```c
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  int x1, x2, y1, y2;
  float d_xy;
	
  cout << "Tinh khoang cach Euclid giua hai diem trong he truc toa do Oxy\n";
  cout << "Nhap toa do (x1, y1) va (x2, y2): ";
  cin >> x1 >> y1 >> x2 >> y2;
	
  cout << fixed << setprecision(2);
  d_xy = sqrt(pow((y1 - x1), 2) + pow((y2 - x2), 2));
  cout << "Khoang cach giua hai diem la: " << d_xy;
	}
  return 0;
```
#### Bài 7. Chuyển đơn vị đo C và F
Giải:
```c
```
#### Bài 8. Tính tổng 1
Giải:
```c
```
#### Bài 9. Tính tổng 2
Giải:
```c
```
#### Bài 10. Tính tổng 3
Giải:
```c
```
#### Bài 11. Tính tổng 4
Giải:
```c
```
#### Bài 12. Tính tổng 5
Giải:
```c
```
#### Bài 13. Số chia hết lớn nhất
Giải:
```c
```
#### Bài 14. Số chia hết nhỏ nhất
Giải:
```c
```
#### Bài 15. Kiểm tra số chia hết cho 3 và 5
Giải:
```c
```
#### Bài 16. Kiểm tra năm nhuận
Giải:
```c
```
#### Bài 17. In ra số ngày của tháng
Giải:
```c
```
#### Bài 18. Kiểm tra chữ in thường
Giải:
```c
```
#### Bài 19. Kiểm tra in hoa
Giải:
```c
```
#### Bài 20. Kiểm tra chữ cái
Giải:
```c
```
#### Bài 21. Kiểm tra chữ số
Giải:
```c
```
#### Bài 22. Chuyển ký tự hoa thành thường
Giải:
```c
```
#### Bài 23. Chuyển kí tự thường thành kí tự hoa
Giải:
```c
```
#### Bài 24. Chữ cái kế tiếp
Giải:
```c
```
#### Bài 25. Tam giác hợp lệ
Giải:
```c
```
#### Bài 26. Kiểm tra tam giác
Giải:
```c
```
#### Bài 27. Chuyển đổi ngày sang tháng, năm, ngày
Giải:
```c
```
