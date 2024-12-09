#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

//others
const int SIZE = 1005;
int cntChan = 0, cntLe = 0;
const int num7 = 1e7;
int nt[num7+1];
void sieve() {
  for (int &x : nt) x = 1;
  nt[0] = nt[1] = 0;
  for (int i = 2; i <= sqrt(num7); ++i) {
    if (nt[i]) {
      for (int j = i * i; j <= num7; j += i) nt[j] = 0;
    }
  }
}

//1
void nhap(int a[], int n) {
  for (int i = 0; i < n; ++i) cin >> a[i];
}

//2
void xuat(int a[], int n) {
  for (int i = 0; i < n; ++i) cout << a[i] << " ";
}

//3
int tong(int a[], int n) {
  int s = 0;
  for (int i = 0; i < n; ++i) s += a[i];
  return s;
}

//4
int tongLe(int a[], int n) {
  int s = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] % 2) s += a[i];
  }
  return s;
}

//5
int demChan(int a[], int n) {
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] % 2 == 0) ++cnt;
  }
  return cnt;
}

//6
bool checkSoGanh(int a[], int n) {
  for (int i = 0; i < n; ++i) {
    if (a[i] < 100) continue;
    int temp = a[i], reverse = 0;
    while (temp > 0) {
      reverse = reverse * 10 + (temp % 10);
      temp /= 10;
    }
    if (reverse == a[i]) return true;
  }
  return false;
}

//7
void listNT(int a[], int n) {
  for (int i = 0; i < n; ++i) {
    if (nt[a[i]]) cout << a[i] << " ";
  }
}

//8
void demChuSo(int a[], int n) {
  for (int i = 0; i < n; ++i) {
    int temp = a[i], cnt = 0;
    while (temp > 0) {
      ++cnt;
      temp /= 10;
    }
    cout << cnt << " ";
  }
}

//9
int findMax(int a[], int n) {
  int max = -1e9;
  for (int i = 0; i < n; ++i) {
    if (a[i] > max) max = a[i];
  }
  return max;
}

//10
int findMin(int a[], int n) {
  int min = 1e9;
  for (int i = 0; i < n; ++i) {
    if (a[i] < min) min = a[i];
  }
  return min;
}

//11
int findMaxChan(int a[], int n) {
  int max = -1e9;
  for (int i = 0; i < n; ++i) {
    if (a[i] > max && a[i] % 2 == 0) max = a[i];
  }
  return max;
}

//12
void tangDan(int a[], int n) {
  for (int i = 0; i < n - 1; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (a[i] > a[j]) swap(a[i], a[j]);
    }
  }
}

//13
void giamDanChuSo(int a[], int n) {
  for (int i = 0; i < n - 1; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (a[i] % 10 < a[j] % 10) swap(a[i], a[j]);
    }
  }
}

//14
void tachChanLe(int a[], int chan[], int le[], int n) {
  for (int i = 0; i < n; ++i) {
    if (a[i] % 2) le[cntLe++] = a[i];
    else chan[cntChan++] = a[i];
  }
}

//15
void themGiaTri(int a[], int n) {
  int value, x; cin >> value >> x;
  for (int i = n + 1; i > x; --i) a[i] = a[i - 1];
  a[x] = value;
}

//16
void themGiaTriTangDan(int a[], int n) {
  int value; cin >> value;
  for (int i = 1; i < n + 1; ++i) {
    if (value >= a[i - 1] && value <= a[i]) {
      for (int j = n + 1; j > i; --j) a[j] = a[j - 1];
      a[i] = value;
      break;
    }
  }
}

int main() {
  //faster();
  sieve();
  
  bool checkNhap = false;
  int choose, n;
  int a[SIZE], chan[SIZE], le[SIZE];
  
  do {
    system("cls");
    cout << "===== MENU =====\n";
    cout << "1. Nhập mảng các số nguyên\n";
    cout << "2. Xuất mảng các số nguyên\n";
    cout << "3. Tính tổng các phần tử trong mảng\n";
    cout << "4. Tính tổng các phần tử là số lẻ\n";
    cout << "5. Đếm các phần tử là số chẵn\n";
    cout << "6. Kiểm tra trong mảng có tồn tại số gánh nào hay không?\n";
    cout << "7. Liệt kê các phần tử là số nguyên tố\n";
    cout << "8. Xuất ra số chữ số của mỗi phần tử\n";
    cout << "9. Tìm giá trị lớn nhất trong mảng\n";
    cout << "10. Tìm giá trị bé nhất trong mảng\n";
    cout << "11. Tìm giá trị chẵn lớn nhất trong mảng\n";
    cout << "12. Sắp xếp mảng tăng dần\n";
    cout << "13. Sắp xếp mảng giảm dần theo chữ số hàng đơn vị của mỗi số\n";
    cout << "14. Tách mảng thành 1 mảng số chẵn và 1 mảng số lẻ\n";
    cout << "15. Thêm một giá trị vào vị trí bất kỳ trong mảng\n";
    cout << "16. Thêm một giá trị vào trong mảng đã sắp xếp tăng dần mà mảng vẫn tăng dần\n";
    cout << "0. Thoát\n";
    cout << "===== ===== =====\n";
    try_again:
    cout << "Chọn chức năng (1 - 16): "; cin >> choose;

    if (choose != 1 && checkNhap == false) {
      cout << "Vui lòng nhập mảng trước!\n";
      goto try_again;
    } else checkNhap = true;

    switch (choose) {
      case 0:
        cout << "Thoát chương trình.\n";
        break;
      case 1:
        cout << "Nhập số phần tử: "; cin >> n;
        nhap(a, n);
        break;
      case 2:
        system("cls");
        xuat(a, n);
        cout << "\nEnter de tiep tuc...\n";
        system("pause");
        break;
      case 3:
        cout << tong(a, n) << endl;
        break;
      case 4:
        cout << tongLe(a, n) << endl;
        break;
      case 5:
        cout << demChan(a, n) << endl;
        break;
      case 6:
        if (checkSoGanh(a, n)) cout << "YES\n";
        else cout << "NO\n";
        break;
      case 7:
        listNT(a, n);
        cout << endl;
        break;
      case 8:
        demChuSo(a, n);
        cout << endl;
        break;
      case 9:
        cout << findMax(a, n) << endl;
        break;
      case 10:
        cout << findMin(a, n) << endl;
        break;
      case 11:
        cout << findMaxChan(a, n) << endl;
        break;
      case 12:
        tangDan(a, n);
        cout << endl;
        break;
      case 13:
        giamDanChuSo(a, n);
        cout << endl;
        break;
      case 14:
        tachChanLe(a, chan, le, n);
        cout << "Mang chan: "; xuat(chan, cntChan); cout << endl;
        cout << "Mang le: "; xuat(le, cntLe); cout << endl;
        cntChan = cntLe = 0;
        break;
      case 15:
        themGiaTri(a, n);
        n++;
        cout << endl;
        break;
      case 16:
        themGiaTriTangDan(a, n);
        n++;
        cout << endl;
        break;
      default:
        cout << "Lựa chọn không hợp lệ!\n";
    }
  } while (choose != 0);
  return 0;
}