#include <bits/stdc++.h>

using namespace std;

class NSX{
    char Mansx[30];
    char Tennsx[30];
    char Dcnsx[30];
    friend class HANG;
};

class HANG{
    char Mahang[30];
    char Tenhang[30];
    float Dongia;
    float Trongluong;
    NSX x;
public:
    void nhap();
    void xuat();
};

void HANG::nhap()
{
    cout<<"Ma hang: "; fflush(stdin); gets(Mahang);
    cout<<"Ten hang: "; fflush(stdin); gets(Tenhang);
    cout<<"Don gia: "; cin>>Dongia;
    cout<<"Trong luong: "; cin>>Trongluong;
    cout<<"Ma nsx: "; fflush(stdin); gets(x.Mansx);
    cout<<"Ten nsx: "; fflush(stdin); gets(x.Tennsx);
    cout<<"Dia chi nsx: "; fflush(stdin); gets(x.Dcnsx);
}

void HANG::xuat()
{
    cout<<"Ma hang: "<<Mahang<<endl;
    cout<<"Ten hang: "<<Tenhang<<endl;
    cout<<"Don gia: "<<Dongia<<endl;
    cout<<"Trong luong: "<<Trongluong<<endl;
    cout<<"Ma nsx: "<<x.Mansx<<endl;
    cout<<"Ten nsx: "<<x.Tennsx<<endl;
    cout<<"Dia chi nsx: "<<x.Dcnsx<<endl;
}

int main()
{
    HANG H;
    H.nhap();
    H.xuat();
}
