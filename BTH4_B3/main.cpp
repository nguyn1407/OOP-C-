#include <bits/stdc++.h>

using namespace std;

class DATE{
    int d, m, y;
    friend class HANG;
};

class HANG{
    char Mahang[30];
    char Tenhang[30];
    DATE ngaysx;
public:
    void nhap();
    void xuat();
};

void HANG::nhap()
{
    cout<<"Ma hang: "; fflush(stdin);  gets(Mahang);
    cout<<"Ten hang: "; fflush(stdin); gets(Tenhang);
    cout<<"Ngay sx: "; cin>>ngaysx.d;
    cout<<"Thang sx: "; cin>>ngaysx.m;
    cout<<"Nam sx: "; cin>>ngaysx.y;
}

void HANG::xuat()
{
    cout<<"Ma hang: "<<Mahang<<endl;
    cout<<"Ten hang: "<<Tenhang<<endl;
    cout<<"Ngay sx: "<<ngaysx.d<<" /"<<ngaysx.m<<" /"<<ngaysx.y;
}

int main()
{
    HANG H;
    H.nhap();
    H.xuat();
}
