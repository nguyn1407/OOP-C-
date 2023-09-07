#include <bits/stdc++.h>

using namespace std;

class HANG{
    char Mahang[30];
    char Tenhang[30];
    float Dongia;
    int Soluong;
public:
    void NHAP();
    void XUAT();
};

void HANG::NHAP()
{
    cout<<"Ma hang: "; fflush(stdin); gets(Mahang);
    cout<<"Ten hang: "; fflush(stdin); gets(Tenhang);
    cout<<"Don gia: "; cin>>Dongia;
    cout<<"So luong: "; cin>>Soluong;
}

void HANG::XUAT()
{
    cout<<setw(15)<<"Ma hang"<<setw(15)<<"Ten hang"<<setw(15)<<"Don gia"<<setw(15)<<"So luong"<<setw(15)<<"Thanh tien"<<endl;
    cout<<setw(15)<<Mahang<<setw(15)<<Tenhang<<setw(15)<<Dongia<<setw(15)<<Soluong<<setw(15)<<Dongia*Soluong<<endl;
}

int main()
{
    int n;
    cout<<"n = "; cin>>n;
    HANG *x;
    x = new HANG[n];
    for(int i=0;i<n;i++)
        x[i].NHAP();
    for(int i=0;i<n;i++)
        x[i].XUAT();
}
