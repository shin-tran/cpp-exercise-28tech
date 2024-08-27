## Giải cách bài tập C++ của 28Tech
[Link bài tập](https://drive.google.com/drive/folders/1hEFjBBe-KM7ZQNqE0dXOMFygeApnZ5CJ)
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
