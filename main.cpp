#include <iostream>
using namespace std;

struct PhanSo {
    int tu, mau;
};
PhanSo cong(PhanSo a, PhanSo b) {
    return {a.tu*b.mau + b.tu*a.mau, a.mau*b.mau};
}
PhanSo tru(PhanSo a, PhanSo b) {
    return {a.tu*b.mau - b.tu*a.mau, a.mau*b.mau};
}
PhanSo nhan(PhanSo a, PhanSo b) {
    return {a.tu*b.tu, a.mau*b.mau};
}
PhanSo chia(PhanSo a, PhanSo b) {
    return {a.tu*b.mau, a.mau*b.tu};
}
void xuat(PhanSo ps) {
    cout << ps.tu << "/" << ps.mau << endl;
}
int main() {
    PhanSo a, b;
    cout << "Nhap 2 phan so:";
    cin >> a.tu >> a.mau;
    cin >> b.tu >> b.mau;
    cout << "Tong: ";
    xuat(cong(a,b));
    cout << "Hieu: ";
    xuat(tru(a,b));
    cout << "Tich: ";
    xuat(nhan(a,b));
    cout << "Thuong: ";
    xuat(chia(a,b));
    return 0;
}
