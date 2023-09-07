#include <bits/stdc++.h>

using namespace std;

class HANG{
    char Mahang[30];
    char Tenhang[30];
    float Dongia;
public:
    void nhap();
    void xuat();
};

void HANG::nhap()
{
    cout<<"Ma hang: "; fflush(stdin); gets(Mahang);
    cout<<"Ten hang: "; fflush(stdin); gets(Tenhang);
    cout<<"Don gia: "; cin>>Dongia;
}

void HANG::xuat()
{
    cout<<setw(15)<<Mahang<<setw(15)<<Tenhang<<setw(15)<<Dongia<<endl;
}

class PHIEU{
    char Maphieu[30];
    HANG *x;
    int n;
public:
    void nhap();
    void xuat();
};

void PHIEU::nhap()
{
    cout<<"Ma phieu: "; fflush(stdin); gets(Maphieu);
    cout<<"So luong hang n= "; cin>>n;
    x = new HANG[n];
    for(int i=0;i<n;i++)
        x[i].nhap();
}

void PHIEU::xuat()
{
    cout<<"Ma phieu: "<<Maphieu<<endl;
    cout<<setw(15)<<"Ma hang"<<setw(15)<<"Ten hang"<<setw(15)<<"Don gia"<<endl;
    for(int i=0;i<n;i++)
        x[i].xuat();
}

int main()
{
    PHIEU P;
    P.nhap();
    cout<<endl;
    P.xuat();
}
