#include <bits/stdc++.h>

using namespace std;


class NSX{
    char Mansx[30];
    char Tennsx[30];
    char Dcnsx[30];
public:
    void nhap();
    void xuat();
};

void NSX::nhap()
{
    cout<<"Ma nsx: "; fflush(stdin); gets(Mansx);
    cout<<"Ten nsx: "; fflush(stdin); gets(Tennsx);
    cout<<"Dia chi nsx: "; fflush(stdin); gets(Dcnsx);
}

void NSX::xuat()
{
    cout<<"Ma nsx: "<<Mansx<<endl;
    cout<<"Ten nsx: "<<Tennsx<<endl;
    cout<<"Dia chi nsx: "<<Dcnsx<<endl;
}

class HANG{
    char Mahang[30];
    char Tenhang[30];
    NSX x;
public:
    void nhap();
    void xuat();
};

void HANG::nhap()
{
    cout<<"Ma hang: "; fflush(stdin); gets(Mahang);
    cout<<"Ten hang: "; fflush(stdin); gets(Tenhang);
    x.nhap();
}

void HANG::xuat()
{
    cout<<"Ma hang: "<<Mahang<<endl;
    cout<<"Ten hang: "<<Tenhang<<endl;
    x.xuat();
}

int main()
{

    HANG H;
    H.nhap();
    H.xuat();
}
