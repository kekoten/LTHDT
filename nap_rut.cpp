#include <iostream>
#include <string>
using namespace std;

class TaiKhoan {
private:
    string soTK, hoTen, loaiTK;
    long long soDu;
    double laiSuat;

public:
    TaiKhoan();
    void nhap();
    void xuat();
    string getSoTK();
    long long getSoDu();
    void napTien(long long tien);
    void rutTien(long long tien);
    double tinhLai();
};

TaiKhoan::TaiKhoan() {
    soTK = "";
    hoTen = "";
    loaiTK = "";
    soDu = 0;
    laiSuat = 0;
}