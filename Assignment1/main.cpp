#include <bits/stdc++.h>

using namespace std;

class PHIEU;
class DATE{
    int d, m, y;
    friend class PHIEU;
public:
    void nhap();
    void xuat();
};

void DATE::nhap()
{
    cout<<"Ngay: "; cin>>d;
    cout<<"Thang: "; cin>>m;
    cout<<"Nam: "; cin>>y;
}

void DATE::xuat()
{
    cout<<"Ngay lap: "<<d<<"/"<<m<<"/"<<y<<endl;
}

class CUNG{
    char MAC[30];
    char TEN[30];
    char DIACHI[30];
    char SDT[30];
    friend class PHIEU;
public:
    void nhap();
    void xuat();
};

void CUNG::nhap()
{
    cout<<"Ma nha cung cap: "; fflush(stdin); gets(MAC);
    cout<<"Ten nha cung cap: "; fflush(stdin); gets(TEN);
    cout<<"Dia chi: "; fflush(stdin); gets(DIACHI);
    cout<<"SDT: "; fflush(stdin); gets(SDT);
}

void CUNG::xuat()
{
    cout<<"Ma nha cung cap: "<<MAC<<setw(39)<<"Ten nha cung cap: "<<TEN<<endl;
    cout<<"Dia chi: "<<DIACHI<<setw(15)<<"SDT: "<<SDT<<endl;
}

class SANPHAM
{
    char MASP[30];
    char TENSP[30];
    int SL;
    float DONGIA;
    friend class PHIEU;
    friend void TIMKIEM(PHIEU P);
    friend void XEP(PHIEU P);
public:
    void nhap();
    void xuat();
};

void SANPHAM::nhap()
{
    cout<<"Ma SP: "; fflush(stdin); gets(MASP);
    cout<<"Ten SP: "; fflush(stdin); gets(TENSP);
    cout<<"So luong: "; cin>>SL;
    cout<<"Don gia: "; cin>>DONGIA;
}

void SANPHAM::xuat()
{
    cout<<setw(10)<<MASP<<setw(15)<<TENSP<<setw(15)<<SL<<setw(10)<<DONGIA<<setw(15)<<SL*DONGIA<<endl;;
}

class PHIEU{
    char MAP[30];
    DATE D;
    CUNG C;
    SANPHAM *S;
    int n;
    friend void TIMKIEM(PHIEU P);
    friend void XEP(PHIEU P);
public:
    void nhap();
    void xuat();
};

void PHIEU::nhap()
{
    cout<<"Ma phieu: "; fflush(stdin); gets(MAP);
    D.nhap();
    C.nhap();
    cout<<"So SP: "; cin>>n;
    S = new SANPHAM[n];
    for(int i=0;i<n;i++)
        S[i].nhap();
}

void PHIEU::xuat()
{
    cout<<"Dai hoc Victory"<<endl;
    cout<<setw(40)<<"PHIEU NHAP VAN PHONG PHAM"<<endl;
    cout<<"Ma SP: "<<setw(15)<<MAP<<setw(26);
    D.xuat();

    C.xuat();
    cout<<setw(10)<<"Ma SP"<<setw(15)<<"Ten SP"<<setw(15)<<"So luong"<<setw(10)<<"Don gia"<<setw(15)<<"Thanh tien"<<endl;
    int t=0;
    for(int i=0;i<n;i++)
    {
        S[i].xuat();
        t+=(S[i].SL * S[i].DONGIA);
    }
    cout<<setw(30)<<"TONG"<<setw(35)<<t<<endl;
    cout<<endl;
    cout<<setw(15)<<"Hieu truong"<<setw(20)<<"Phong tai chinh"<<setw(20)<<"Nguoi lap"<<endl;
    cout<<"**********************************************************************"<<endl;
}

void TIMKIEM(PHIEU P)
{
    int d=0;
    for(int i=0;i<P.n;i++)
        if(P.S[i].SL < 80)
            d++;
    cout<<"So SP co so luong nho hon 80 la: "<<d<<endl;
}

void XEP(PHIEU P)
{
    for(int i=0;i<P.n;i++)
        for(int j=i+1;j<P.n;j++)
            if(P.S[i].DONGIA > P.S[j].DONGIA)
                swap(P.S[i], P.S[j]);
}

int main()
{
    PHIEU P;
    P.nhap();
    P.xuat();
    cout<<endl;
    TIMKIEM(P);
    cout<<endl;
    XEP(P);
    P.xuat();
}
