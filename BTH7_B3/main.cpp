#include <bits/stdc++.h>
using namespace std;

class KHOA{
    char MaKhoa[30];
    char TenKhoa[30];
    char TruongKhoa[30];
    friend class TRUONGDH;
};

class BAN{
    char MaBan[30];
    char TenBan[30];
    char Ngay[30];
    friend class TRUONGDH;
};

class TRUONGDH{
protected:
    KHOA *x;
    int n;
    BAN *y;
    int m;
public:
    void nhap();
    void xuat();
};


void TRUONGDH::nhap(){
    cout<<"So luong khoa: "; cin>>n;
    x = new KHOA[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap khoa thu: " <<i+1<<": "<<endl;
        cout<<"Ma khoa: "; fflush(stdin); gets(x[i].MaKhoa);
        cout<<"Ten khoa: "; fflush(stdin); gets(x[i].TenKhoa);
        cout<<"Truong khoa: "; fflush(stdin); gets(x[i].TruongKhoa);
    }
    cout<<endl;
    cout<<"So luong ban: "; cin>>m;
    y = new BAN[m];
    for(int i=0;i<m;i++)
    {
         cout<<"Nhap ban thu: " <<i+1<<": "<<endl;
         cout<<"Ma ban: "; fflush(stdin); gets(y[i].MaBan);
         cout<<"Ten ban: "; fflush(stdin); gets(y[i].TenBan);
         cout<<"Ngay thanh lap: "; fflush(stdin); gets(y[i].Ngay);
    }
}

void TRUONGDH::xuat()
{
    cout<<setw(15)<<"Ma khoa"<<setw(15)<<"Ten khoa"<<setw(15)<<"Truong khoa"<<endl;
    for(int i=0;i<n;i++)
        cout<<setw(15)<<x[i].MaKhoa<<setw(15)<<x[i].TenKhoa<<setw(15)<<x[i].TruongKhoa<<endl;

    cout<<endl;
    cout<<setw(15)<<"Ma ban"<<setw(15)<<"Ten ban"<<setw(15)<<"Ngay lap"<<endl;
    for(int i=0;i<m;i++)
        cout<<setw(15)<<y[i].MaBan<<setw(15)<<y[i].TenBan<<setw(15)<<y[i].Ngay<<endl;

    cout<<endl;
}

class TRUONG : public TRUONGDH{
    char MaTruong[30];
    char TenTruong[30];
    char DiaChi[30];
public:
    void nhap();
    void xuat();

};

void TRUONG::nhap()
{
    cout<<"Ma truong: "; fflush(stdin); gets(MaTruong);
    cout<<"Ten truong: "; fflush(stdin); gets(TenTruong);
    cout<<"Dia chi: "; fflush(stdin); gets(DiaChi);
    TRUONGDH::nhap();
}

void TRUONG::xuat()
{
    cout<<"Ma truong: "<<MaTruong<<endl;
    cout<<"Ten truong: "<<TenTruong<<endl;
    cout<<"Dia chi: "<<DiaChi<<endl;
    TRUONGDH::xuat();
}

int main()
{
    TRUONG T;
    T.nhap();
    cout<<endl;
    T.xuat();
}
