#include <bits/stdc++.h>

using namespace std;

class SACH{
    char Masach[30];
    char Tensach[30];
    char Nxb[30];
    int Sotrang;
    float Giatien;
public:
    void NHAP();
    void XUAT();
};

void SACH::NHAP()
{
    cout<<"Ma sach: "; fflush(stdin); gets(Masach);
    cout<<"Ten sach: "; fflush(stdin); gets(Tensach);
    cout<<"Nha xuat ban: "; fflush(stdin); gets(Nxb);
    cout<<"So trang: "; cin>>Sotrang;
    cout<<"Gia tien: "; cin>>Giatien;
}

void SACH::XUAT()
{
    cout<<setw(15)<<"Ma sach"<<setw(15)<<"Ten sach"<<setw(15)<<"Nha xuat ban"<<setw(15)<<"So trang"<<setw(15)<<"Gia tien"<<endl;
    cout<<setw(15)<<Masach<<setw(15)<<Tensach<<setw(15)<<Nxb<<setw(15)<<Sotrang<<setw(15)<<Giatien<<endl;
}

int main()
{
    int n;
    cout<<"n = "; cin>>n;
    SACH *s;
    s = new SACH[n];
    for(int i=0;i<n;i++)
        s[i].NHAP();
    for(int i=0;i<n;i++)
        s[i].XUAT();
}
