#include <bits/stdc++.h>

using namespace std;

class SINHVIEN
{
    char MASV[30];
    char TENSV[30];
    int TUOI;
public:
    void nhap();
    void xuat();
};

void SINHVIEN::nhap()
{
    cout<<"Ma SV : "; fflush(stdin); gets(MASV);
    cout<<"Ten SV: "; fflush(stdin); gets(TENSV);
    cout<<"Tuoi  : "; cin>>TUOI;
}

void SINHVIEN::xuat()
{
    cout<<setw(15)<<MASV<<setw(20)<<TENSV<<setw(15)<<TUOI<<endl;
}

class LOPHOC
{
    char MALP[30];
    char PHONG[30];
    SINHVIEN *x;
    int n;
public:
    void nhap();
    void xuat();
};

void LOPHOC::nhap()
{
    cout<<"Ma LP: "; fflush(stdin); gets(MALP);
    cout<<"Phong: "; fflush(stdin); gets(PHONG);
    cout<<"n = "; cin>>n;
    x = new SINHVIEN[n];
    for(int i=0;i<n;i++)
        x[i].nhap();
}

void LOPHOC::xuat()
{
    cout<<"Ma LP: "<<MALP<<endl;
    cout<<"Phong: "<<PHONG<<endl;

    cout<<setw(15)<<"Ma SV"<<setw(20)<<"Ten SV"<<setw(15)<<"Tuoi"<<endl;
    for(int i=0;i<n;i++)
        x[i].xuat();
}

int main()
{
    LOPHOC L;
    L.nhap();
    L.xuat();
}
