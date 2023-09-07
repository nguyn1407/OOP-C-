#include<bits/stdc++.h>
using namespace std;

class GIAMDOC
{
    char HOTEN[30];
    int TUOI;
    char SDT[30];
public:
    void nhap();
    void xuat();
};

void GIAMDOC::nhap()
{
    cout<<"Ho ten : "; fflush(stdin); gets(HOTEN);
    cout<<"Tuoi   : "; cin>>TUOI;
    cout<<"SDT    : "; fflush(stdin); gets(SDT);
}

void GIAMDOC::xuat()
{
    cout<<"Ho ten : "<<HOTEN<<endl;
    cout<<"Tuoi   : "<<TUOI<<endl;
    cout<<"SDT    : "<<SDT<<endl;
}


class CONGTY
{
    char TENCT[30];
    char DIACHI[30];
    GIAMDOC x;
public:
    void nhap();
    void xuat();
};

void CONGTY::nhap()
{
    cout<<"Ten CT : "; fflush(stdin);  gets(TENCT);
    cout<<"Dia chi: "; fflush(stdin); gets(DIACHI);
    x.nhap();
}

void CONGTY::xuat()
{
    cout<<"Ten CT : "<<TENCT<<endl;
    cout<<"Dia chi: "<<DIACHI<<endl;
    x.xuat();
}

int main()
{
    CONGTY C;
    C.nhap();
    C.xuat();
}

