//Danh sách quản lý điểm của 1 sinh viên.
#include <iostream>
#include <iomanip>
#include <cmath>
#define MAX 100
using namespace std;

class HocSinh{
private:
int mssv;
string hoTen;
double diemGiaiTich;
double diemDaiSoTuyenTinh;
double diemAnh;
double diemNMLT;

double diemTB;
void XuLy();

public:
    void Nhap();
    void Xuat();
    double getDiemToan();
    double setDiemToan(double);
};
void HocSinh::XuLy() {
diemTB = (diemGiaiTich + diemDaiSoTuyenTinh + diemAnh + diemNMLT)/ 4;
}
void HocSinh::Nhap() {
cout << "Nhap MSSV: ";
cin >> mssv;
cout << "Nhap ho ten: ";
cin.ignore();
getline(cin, hoTen);
cout << "Nhap diem Giai Tich: ";
cin >> diemGiaiTich;
cout << "Nhap diem Dai So Tuyen Tinh: ";
cin >> diemDaiSoTuyenTinh;
cout << "Nhap diem Anh Van 2: ";
cin >> diemAnh;
cout << "Nhap diem Nhap Mon Lap Trinh: ";
cin >> diemNMLT;
XuLy();
}
void HocSinh::Xuat(){
cout<<endl;
cout<<"Thong Tin Sinh Vien"<<endl;
cout<<"MSSV: "<<mssv<<endl;
cout<<"Ho Ten: "<<hoTen<<endl;
cout<<"Diem TB: "<<fixed<<setprecision(3)<<diemTB<<endl;
}
double HocSinh::getDiemToan(){
return diemGiaiTich;
}

double HocSinh::setDiemToan(double toan){
if(toan>10||toan<0){
    cout<<"Diem Toan Khong Hop Le"<<endl;
    return this->diemGiaiTich;
}
this->diemGiaiTich = toan;
this->XuLy();
return this->diemGiaiTich;
}

int main(){
HocSinh hs;
HocSinh *hocsinh = &hs;
hocsinh->Nhap();
hocsinh->Xuat();

cout<<endl;
cout<<"Diem Giai Tich: "<<hocsinh->getDiemToan()<<endl;
cout<<"Nhap Diem Giai Tich moi: "<<endl;
double diem;
cin>>diem;
hocsinh->setDiemToan(diem);
cout<<endl;
cout<<"Cap Nhat Lai Thong Tin "<<endl;
hocsinh->Xuat();
}
