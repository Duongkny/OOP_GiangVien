#include <iostream>
#include <cstring>

using namespace std;

class PERSON {
protected:
    char hoTen[50];
    char ngaySinh[12];
    char queQuan[100];
    
public:
    PERSON() {
        strcpy(hoTen, "");
        strcpy(ngaySinh, "");
        strcpy(queQuan, "");
    }
    
    void nhap() {
        cout << "Nhap ho ten: ";
        cin.getline(hoTen, 50);
        cout << "Nhap ngay sinh (dd/mm/yyyy): ";
        cin.getline(ngaySinh, 12);
        cout << "Nhap que quan: ";
        cin.getline(queQuan, 100);
    }

    void xuat() {
        cout << "Ho ten: " << hoTen << endl;
        cout << "Ngay sinh: " << ngaySinh << endl;
        cout << "Que quan: " << queQuan << endl;
    }
};

class DIEM {
protected:
    int diemToan;
    int diemLy;
    int diemHoa;
    
public:
    DIEM() {
        diemToan = 0;
        diemLy = 0;
        diemHoa = 0;
    }
    
    void nhapDiem() {
        cout << "Nhap diem Toan: ";
        cin >> diemToan;
        cout << "Nhap diem Ly: ";
        cin >> diemLy;
        cout << "Nhap diem Hoa: ";
        cin >> diemHoa;
    }

    void xuatDiem() {
        cout << "Diem Toan: " << diemToan << endl;
        cout << "Diem Ly: " << diemLy << endl;
        cout << "Diem Hoa: " << diemHoa << endl;
    }

    int tinhTongDiem() {
        return diemToan + diemLy + diemHoa;
    }
};

class HOCSINH : public PERSON, public DIEM {
private:
    char lop[30];
    int tongDiem;
    
public:
    HOCSINH() : PERSON(), DIEM() {
        strcpy(lop, "");
        tongDiem = 0;
    }

    void nhap() {
        cin.ignore();
        PERSON::nhap();
        DIEM::nhapDiem();
        cin.ignore();
        cout << "Nhap lop: ";
        cin.getline(lop, 30);
        tongDiem = DIEM::tinhTongDiem();
    }

    void xuat() {
        PERSON::xuat();
        DIEM::xuatDiem();
        cout << "Lop: " << lop << endl;
        cout << "Tong diem: " << tongDiem << endl;
    }
};

int main() {
    HOCSINH hs;
    
    cout << "Nhap thong tin hoc sinh: " << endl;
    hs.nhap();
    
    cout << "\nThong tin hoc sinh vua nhap: " << endl;
    hs.xuat();
    
    return 0;
}