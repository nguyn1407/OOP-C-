#include <bits/stdc++.h>

using namespace std;

class PHONGMAY;

class QUANLY{
    char Maql[30];
    char Hoten[30];
public:
    void nhap();
    void xuat();
};

void QUANLY::nhap()
{
    cout<<"Ma QL: "; fflush(stdin); gets(Maql);
    cout<<"Ho ten: "; fflush(stdin); gets(Hoten);
}

void QUANLY::xuat()
{
    cout<<"Ma QL: "<<Maql<<endl;
    cout<<"Ho ten: "<<Hoten<<endl;
}

class MAY{
    char Mamay[30];
    char Kieumay[30];
    char Tinhtrang[30];
    friend void suatinhtrang(PHONGMAY x);
public:
    void nhap();
    void xuat();
};

void MAY::nhap()
{
    cout<<"Ma may: "; fflush(stdin); gets(Mamay);
    cout<<"Kieu may: "; fflush(stdin); gets(Kieumay);
    cout<<"Tinh trang: "; fflush(stdin); gets(Tinhtrang);
 }

 void MAY::xuat()
 {
     cout<<setw(15)<<Mamay<<setw(15)<<Kieumay<<setw(15)<<Tinhtrang<<endl;
 }

 class PHONGMAY{
    char Maphong[30];
    char Tenphong[30];
    float Dientich;
    QUANLY x;
    MAY *y;
    int n;
    friend void suatinhtrang(PHONGMAY x);
    friend void suadientich(PHONGMAY& x);
public:
    void nhap();
    void xuat();
 };

void PHONGMAY::nhap()
{
    cout<<"Ma phong: "; fflush(stdin); gets(Maphong);
    cout<<"Ten phong: "; fflush(stdin); gets(Tenphong);
    cout<<"Dien tich: "; cin>>Dientich;
    x.nhap();
    cout<<"So luong may n= "; cin>>n;
    y = new MAY[n];
    for(int i=0;i<n;i++)
        y[i].nhap();
}

void PHONGMAY::xuat()
{
    cout<<"Ma phong: "<<Maphong<<endl;
    cout<<"Ten phong: "<<Tenphong<<endl;
    cout<<"Dien tich: "<<Dientich<<endl;
    x.xuat();
    cout<<setw(15)<<"Ma may"<<setw(15)<<"Kieu may"<<setw(15)<<"Tinh trang"<<endl;
    for(int i=0;i<n;i++)
        y[i].xuat();
}

void suadientich(PHONGMAY& x)
{
    x.Dientich = 50;
}

void suatinhtrang(PHONGMAY x)
{
    for(int i=0;i<x.n;i++)
    {
        if(strcmp(x.y[i].Kieumay, "MS01") == 0)
            strcpy(x.y[i].Tinhtrang, "tot");
    }
}

int main()
{
   PHONGMAY P;
   P.nhap();
   cout<<endl;

   suadientich(P);
   suatinhtrang(P);
   P.xuat();
}
