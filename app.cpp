#include <iostream>
#include <cmath>

using namespace std;

double tinhKhoangCach(double x1, double y1, double x2, double y2) {
    double khoangCach = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return khoangCach;
}

double tinhChuViTamGiac(double x1, double y1, double x2, double y2, double x3, double y3) {
    double AB = tinhKhoangCach(x1, y1, x2, y2);
    double BC = tinhKhoangCach(x2, y2, x3, y3);
    double AC = tinhKhoangCach(x1, y1, x3, y3);

    double chuVi = AB + BC + AC;
    return chuVi;
}

double tinhDienTichTamGiac(double x1, double y1, double x2, double y2, double x3, double y3) {
    double dienTich = 0.5 * abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)));
    return dienTich;
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    cout << "Nhap toa do diem A(x1, y1): ";
    cin >> x1 >> y1;
    cout << "Nhap toa do diem B(x2, y2): ";
    cin >> x2 >> y2;
    cout << "Nhap toa do diem C(x3, y3): ";
    cin >> x3 >> y3;

    double chuVi = tinhChuViTamGiac(x1, y1, x2, y2, x3, y3);
    double dienTich = tinhDienTichTamGiac(x1, y1, x2, y2, x3, y3);

    cout << "Chu vi tam giac ABC la: " << chuVi << endl;
    cout << "Dien tich tam giac ABC la: " << dienTich << endl;

    return 0;
}

