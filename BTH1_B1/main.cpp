#include <bits/stdc++.h>

using namespace std;

class SINHVIEN{
    char Masv[30];
    char Hoten[30];
    int Tuoi;
    float Diem;
public:
    void NHAP();
    void XUAT();
};

void SINHVIEN::NHAP()
{
    cout<<"Ma sv: "; fflush(stdin); gets(Masv);
    cout<<"Ho ten: "; fflush(stdin); gets(Hoten);
    cout<<"Tuoi: "; cin>>Tuoi;
    cout<<"Diem: "; cin>>Diem;
}

void SINHVIEN::XUAT()
{
    cout<<setw(15)<<"Ma sv"<<setw(15)<<"Ho ten"<<setw(15)<<"Tuoi"<<setw(15)<<"Diem"<<endl;
    cout<<setw(15)<<Masv<<setw(15)<<Hoten<<setw(15)<<Tuoi<<setw(15)<<Diem<<endl;
}
int main()
{
    SINHVIEN a,b;
    a.NHAP();
    b.NHAP();
    a.XUAT();
    b.XUAT();
}
