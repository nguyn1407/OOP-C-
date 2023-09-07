#include <bits/stdc++.h>
using namespace std;


class NSX{
    char NSX[30];
    char DiaChi[30];
    friend class HANG;
public:
    void nhap();
    void xuat();

};

void NSX::nhap()
{
    cout<<"NSX: "; fflush(stdin); gets(NSX);
    cout<<"Dia chi: "; fflush(stdin); gets(DiaChi);
}

void NSX::xuat()
{
    cout<<"NSX: "<<NSX<<endl;
    cout<<"Dia chi: "<<DiaChi<<endl;
}


class HANG{
    char Tenhang[30];
    NSX x;
    float Dongia;
public:
    void nhap();
    void xuat();
    HANG();
};

HANG::HANG()
{
    strcpy(Tenhang, "");
    strcpy(x.NSX, "");
    strcpy(x.DiaChi, "");
    Dongia = 0;
}

void HANG::nhap()
{
    cout<<"Ten hang: "; fflush(stdin); gets(Tenhang);
    x.nhap();
    cout<<"Don gia: "; cin>>Dongia;
}


void HANG::xuat()
{
    cout<<"Ten hang: "<<Tenhang<<endl;
    x.xuat();
    cout<<"Don gia: "<<Dongia<<endl;
}

class DATE{
    int D, M, Y;
    friend class TIVI;
public:
    void nhap();
    void xuat();

};

void DATE::nhap()
{
    cout<<"Day: "; cin>>D;
    cout<<"Month: "; cin>>M;
    cout<<"Year: "; cin>>Y;
}

void DATE::xuat()
{
    cout<<"Ngay nhap: "<<D<<"/ "<<M<<"/ "<<Y<<endl;
}

class TIVI : public HANG{
    float Kichthuoc;
    DATE Ngaynhap;
public:
    void nhap();
    void xuat();
    TIVI();
};

TIVI::TIVI()
{
    Kichthuoc = 0;
    Ngaynhap.D = Ngaynhap.M = Ngaynhap.Y = 0;
}

void TIVI::nhap()
{
    cout<<"Kich thuoc: "; cin>>Kichthuoc;
    Ngaynhap.nhap();
    HANG::nhap();
}

void TIVI::xuat()
{
    cout<<"Kich thuoc: "<<Kichthuoc<<endl;
    Ngaynhap.xuat();
    HANG::xuat();
}

int main()
{
   TIVI T;
   T.nhap();
   cout<<endl;
   T.xuat();
}
