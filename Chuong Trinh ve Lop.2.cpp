#include <iostream>
#include <iomanip>
#include <cmath>
#define MAX 100
using namespace std;

class SinhVien{
    friend class GV;
private:
    string id, ten, ngaysinh;
    double GPA;
public:
 void Nhap();
 void Xuat();
 friend void inthongtin(SinhVien);
 friend istream& operator >> (istream &in, SinhVien& a);
 friend ostream& operator << (ostream &out, SinhVien a);
 //bool operator < (SinhVien a);
 friend bool operator < (SinhVien a, SinhVien b);
};

/*bool SinhVien::operator < (SinhVien a){
return this->GPA <a.GPA;
}
*/

bool operator <(SinhVien a, SinhVien b){
return a.GPA <b.GPA;
}

istream& operator >> (istream &in, SinhVien &a){
cout<<"Nhap cac thong tin."<<endl;
in>>a.id;
in.ignore();
getline(in, a.ten);
in>>a.ngaysinh;
in>>a.GPA;
return in;
}

ostream& operator << (ostream &out, SinhVien a){
out<<a.id<<endl;
out<<a.ten<<endl;
out<<a.ngaysinh<<endl;
out<<a.GPA<<endl;
return out;
}

class GV{
public:
    void fix(SinhVien&);
};
void GV::fix(SinhVien &a){
a.GPA = 9.0;
}

void inthongtin(SinhVien a){
cout<<a.GPA<<" "<<a.ngaysinh<<endl;
}

void SinhVien::Nhap(){
getline(cin,ten);
cin>>ngaysinh;
cin>>GPA;
}

void SinhVien::Xuat(){
cout<<ten<<endl;
cout<<GPA<<endl;
}

int main(){
SinhVien x,y;
cin>>x>>y;
if(x<y) cout<<"YES"<<endl;
else cout<<"NO";
}
