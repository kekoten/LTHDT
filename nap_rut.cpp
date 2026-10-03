void TaiKhoan::napTien(double tien) {
    if (tien > 0) {
        soDu = soDu + tien;
        cout << "Nap tien thanh cong!" << endl;
    }
    else {
        cout << "So tien nap khong hop le!" << endl;
    }
}


void TaiKhoan::rutTien(double tien) {
    if (tien <= 0) {
        cout << "So tien rut khong hop le!" << endl;
    }
    else if (tien > soDu) {
        cout << "Khong du so du de rut!" << endl;
    }
    else {
        soDu = soDu - tien;
        cout << "Rut tien thanh cong!" << endl;
    }
}
