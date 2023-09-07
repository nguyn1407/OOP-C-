#include <bits/stdc++.h>

using namespace std;

class SINHVIEN{
    char Masv[30];
    char Hoten[30];
    float Diemtoan;
    float Diemly;
    float Diemhoa;
    friend void SAPXEP(SINHVIEN *x, int n);
public:
    void nhap();
    void xuat();
};

void SINHVIEN::nhap()
{
    cout<<"Ma sv: "; fflush(stdin); gets(Masv);
    cout<<"Ho ten: "; fflush(stdin); gets(Hoten);
    cout<<"Diem toan: "; cin>>Diemtoan;
    cout<<"Diem ly: "; cin>>Diemly;
    cout<<"Diem hoa: "; cin>>Diemhoa;
}

void SINHVIEN::xuat()
{
    cout<<setw(15)<<Masv<<setw(15)<<Hoten<<setw(15)<<Diemtoan<<setw(15)<<Diemly<<setw(15)<<Diemhoa<<setw(15)<<Diemhoa+Diemly+Diemtoan<<endl;
}

void SAPXEP(SINHVIEN *x, int n)
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(x[i].Diemhoa+x[i].Diemly+x[i].Diemtoan > x[j].Diemhoa+x[j].Diemly+x[j].Diemtoan)
                swap(x[i],x[j]);
}

int main()
{
    SINHVIEN *S;
    int n; cout<<"So luong sv n= "; cin>>n;
    S = new SINHVIEN[n];
    for(int i=0;i<n;i++)
        S[i].nhap();

    SAPXEP(S,n);
    cout<<setw(15)<<"Ma sv"<<setw(15)<<"Ho ten"<<setw(15)<<"Diem toan"<<setw(15)<<"Diem ly"<<setw(15)<<"Diem hoa"<<setw(15)<<"Tong diem"<<endl;
    for(int i=0;i<n;i++)
        S[i].xuat();
}
