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
```
#### Bài 8. Tính tổng 1
Giải:
```c
#include <iostream>
using namespace std;

int main() {
  int n;
  long long sum = 0;

  cout << "Nhap gia tri n: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    sum += i;
  }

  cout << "Tong cac so tu 1 den " << n << " la: " << sum << endl;

  return 0;
}
```
#### Bài 9. Tính tổng 2
Giải:
```c
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  long long sum = 0;

  cout << "Nhap gia tri n: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    sum += pow(i, 2);
  }

  cout << "Tong cac so tu 1 den " << n << " la: " << sum << endl;

  return 0;
}
```
#### Bài 10. Tính tổng 3
Giải:
```c
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  int n;
  float sum = 0;

  cout << "Nhap gia tri n: ";
  cin >> n;

  cout << fixed << setprecision(2);
  for (int i = 1; i <= n; i++) {
    sum += 1.0 / (i * (i + 1));
  }

  cout << "Tong cac so tu 1 den " << n << " la: " << sum << endl;

  return 0;
}
```
#### Bài 11. Tính tổng 4
Giải:
```c
#include <iostream>
using namespace std;

int main() {
  int n;
  long long sum = 0;

  cout << "Nhap gia tri n: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    sum += 2 * i;
  }

  cout << "Tong cac so tu 1 den " << n << " la: " << sum << endl;

  return 0;
}
```
#### Bài 12. Tính tổng 5
Giải:
```c
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  long long sum = 0;

  cout << "Nhap gia tri n: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    sum += pow(-1, i) * i;
  }

  cout << "Tong cac so tu 1 den " << n << " la: " << sum << endl;

  return 0;
}
```
#### Bài 13. Số chia hết lớn nhất
Giải:
```c
#include <iostream>
using namespace std;

int main() {
  int a, b;

  cout << "Nhap so nguyen duong a: ";
  cin >> a;
  cout << "Nhap so nguyen duong b: ";
  cin >> b;

  // Tính số chia hết cho b lớn nhất không vượt quá a
  int result = (a / b) * b;

  cout << "So can tim la: " << result << endl;

  return 0;
}
```
#### Bài 14. Số chia hết nhỏ nhất
Giải:
```c
#include <iostream>
using namespace std;

int main() {
  int a, b;

  cout << "Nhap so nguyen duong a: ";
  cin >> a;
  cout << "Nhap so nguyen duong b: ";
  cin >> b;

  // Tính số chia hết cho b nhỏ nhất và lớn hơn hoặc bằng a
  int result = ((a + b - 1) / b) * b;

  cout << "So can tim la: " << result << endl;

  return 0;
}
```
#### Bài 15. Kiểm tra số chia hết cho 3 và 5
Giải:
```c
#include <iostream>
using namespace std;

int main() {
  int a;
  cout << "Nhap so nguyen duong a: ";
  cin >> a;

  // Tính số chia hết cho cả 3 và 5
  if ( a % 3 == 0 && a % 5 == 0) {
  	cout << "Ket qua la: " << true << endl;
  } else {
  	cout << "Ket qua la: " << false << endl;
  }

  return 0;
}
```
#### Bài 16. Kiểm tra năm nhuận
Giải:
```c
#include <iostream>
using namespace std;

int main() {
	int nam;
	
	cout << "Nhap so nam:  ";
	cin >> nam;
	
	if (nam <= 0) {
		cout << "INVALID";
	} else if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}
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
