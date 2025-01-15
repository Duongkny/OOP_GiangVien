#include<bits/stdc++.h>
using namespace std;
class Person{
    private:
    string hoten,ngaysinh,quequan;  
    public:
    Person(){
        hoten ="";
        ngaysinh ="";
        quequan = "";
    }
    // string getHoten(){
    //     return hoten;
    // } 
    // string getNgaySinh(){
    //     return ngaysinh;
    // }
    // string getQueqQuan(){
    //     return quequan;
    // }
    void nhap(){
        cout<<"Nhap ho ten : "; fflush(stdin);
        getline(cin,hoten); fflush(stdin);
        cout<<"Nhap ngay sinh : "; fflush(stdin);
        getline(cin,ngaysinh); fflush(stdin);
        cout<<"Nhap que quan : "; fflush(stdin);
        getline(cin,quequan);  fflush(stdin);
    }
    void xuat(){
        cout<<"Ho va ten : "<<hoten<<" | "<<"Ngay sinh : "<<ngaysinh<<" | "<<"Que quan : "<<quequan<<" | ";
    }
};
class Diem{
    private:
    int diemToan,diemLy,diemHoa;
    public:
    Diem(){
        diemToan=0;
        diemLy=0;
        diemHoa=0;
    }
    int getDiemToan(){
        return diemToan;
    }
    int getDiemLy(){
        return diemLy;
    }
    int getDiemHoa(){
        return diemHoa;
    }
    void nhap(){
        cout<<"Nhap diem toan : "; fflush(stdin);
        cin>>diemToan; fflush(stdin);
        cout<<"Nhap diem ly : ";  fflush(stdin);
        cin>>diemLy; fflush(stdin);
        cout<<"Nhap diem hoa : "; fflush(stdin);
        cin>>diemHoa; fflush(stdin);
    }
    int tinhTongDiem(){
        return diemToan + diemLy + diemHoa;
    }
    void xuat(){
        cout<<"Diem toan  : "<<diemToan<<" | "<<"Diem ly : "<<diemLy<<" | "<<"Diem hoa : "<<diemHoa<<" | ";
    }
};
class HocSinh : public Person,public Diem{
    private:
    string lop;
    int tongDiem;
    public:
    HocSinh():Person(),Diem(){
        lop="";
        tongDiem=0;
    }
    void nhap(){
       Person::nhap();
       Diem::nhap();
       cout<<"Nhap lop : "; fflush(stdin);
       getline(cin,lop);  fflush(stdin);
       tongDiem=Diem::tinhTongDiem();
    }
    void xuat(){
        Person::xuat();
        Diem::xuat();
        cout<<"Lop : "<<lop<<" | "<<"Tong diem : "<<tongDiem<<endl;
    }

};
int main(){
    int n;
    cout<<"Nhap so luong Hoc Sinh : ";
    cin>>n;
    HocSinh hs[n];
    for(int i=0;i<n;i++){
        cout<<"Nhap thong tin hoc sinh thu "<<i+1<<endl;
        hs[i].nhap(); fflush(stdin);
    }
    for(int i=0;i<n;i++){
        hs[i].xuat(); 
    }
}