#include <iostream>
using namespace std;

// Khai báo lớp TaiKhoan để chương trình có thể chạy được
class TaiKhoan {
private:
    double soDu;

public:
    // Constructor khởi tạo số dư
    TaiKhoan(double soDuBanDau = 0) {
        soDu = soDuBanDau;
    }

    // Khai báo hai hàm bạn đã cung cấp
    void napTien(double tien);
    void rutTien(double tien);

    // Hàm phụ trợ để in số dư ra màn hình
    void xemSoDu() {
        cout << "So du hien tai: " << soDu << endl;
    }
};

void DanhSachTaiKhoan::sapXep() {

    for (int i = 0; i < n - 1; i++) {

        for (int j = i + 1; j < n; j++) {

            if (a[i].getSoDu() < a[j].getSoDu()) {

                TaiKhoan tam = a[i];

                a[i] = a[j];

                a[j] = tam;
            }
        }
    }
}


// Hàm main để chạy thử nghiệm
int main() {
    // Tạo một tài khoản mới với số dư ban đầu là 1000
    TaiKhoan tk(1000);
    tk.xemSoDu();

    cout << "\n--- Kiem tra chuc nang NAP TIEN ---" << endl;
    tk.napTien(500);   // Hợp lệ: số dư sẽ lên 1500
    tk.napTien(-200);  // Không hợp lệ
    tk.xemSoDu();

    cout << "\n--- Kiem tra chuc nang RUT TIEN ---" << endl;
    tk.rutTien(300);   // Hợp lệ: số dư còn 1200
    tk.rutTien(5000);  // Không đủ số dư (1200 < 5000)
    tk.rutTien(-50);   // Số tiền rút âm, không hợp lệ
    tk.xemSoDu();

    return 0;
}
