#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Khai báo các biến lưu tọa độ của các điểm A, B, C
    double x1, y1, x2, y2, x3, y3;

    // Nhập tọa độ của các điểm
    cout << "Nhap toa do diem A (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Nhap toa do diem B (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Nhap toa do diem C (x3, y3): ";
    cin >> x3 >> y3;

    // Tính độ dài các cạnh AB, BC, CA của tam giác bằng công thức khoảng cách giữa hai điểm.
    double AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double BC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double CA = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    // Kiểm tra xem ba điểm có tạo thành một tam giác không bằng cách kiểm tra điều kiện tổng độ dài hai cạnh bất kỳ luôn lớn hơn độ dài cạnh còn lại.
    if (AB + BC > CA && AB + CA > BC && BC + CA > AB) {
        // Xác định loại tam giác
        if (AB == BC && BC == CA) {
            cout << "Ba diem tao thanh mot tam giac deu." << endl; //Tam giác đều: Cả ba cạnh bằng nhau.
        } else if (AB == BC || BC == CA || CA == AB) {
            cout << "Ba diem tao thanh mot tam giac can." << endl; //Tam giác cân: Có hai cạnh bằng nhau.
        } else {
            cout << "Ba diem tao thanh mot tam giac thuong." << endl; //Tam giác thường: Không có cạnh nào bằng nhau.
        }

        // Tính diện tích tam giác bằng công thức Heron
        double s = (AB + BC + CA) / 2; // Nửa chu vi của tam giác
        double area = sqrt(s * (s - AB) * (s - BC) * (s - CA)); // Diện tích tam giác
        cout << "Dien tich tam giac la: " << area << endl;
    } else {
        cout << "Ba diem khong tao thanh mot tam giac." << endl;
    }

    return 0;
}