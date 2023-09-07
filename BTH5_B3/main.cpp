#include <bits/stdc++.h>

using namespace std;

class PHIEU;
class NV{
    char tenNV[30];
    char chucvu[30];
    char phong[30];
    char maphong[30];
    char truongphong[30];
public:
    void nhap();
    void xuat();
};

void NV::nhap()
{
    cout<<"Ten nv: ";       fflush(stdin); gets(tenNV);
    cout<<"Chuc vu: ";      fflush(stdin); gets(chucvu);
}

void NV::xuat()
{
    cout<< "Ten nhan vien: "<< tenNV << setw(15) << "Chuc vu: " << chucvu <<endl;
}


class PHONG{
    char phong[30];
    char maphong[30];
    char truongphong[30];
public:
    void nhap();
    void xuat();
};

void PHONG::nhap()
{
    cout<<"Phong: ";        fflush(stdin); gets(phong);
    cout<<"Ma phong: ";     fflush(stdin); gets(maphong);
    cout<<"Truong phong: "; fflush(stdin); gets(truongphong);
}

void PHONG::xuat()
{
    cout<< "Kiem ke tai phong: "<< phong << setw(10) << "Ma phong: " << maphong <<endl;
    cout<< "Truong phong: " << truongphong <<endl;
}

class TS{
    char tenTS[30];
    int soluong;
    char tinhtrang[30];
    friend class PHIEU;
    friend void Sua(PHIEU k);
    friend void sapxep(PHIEU k);
public:
    void nhap();
    void xuat();
};

void TS::nhap()
{
    cout<< "Ten SP: "; fflush(stdin); gets(tenTS);
    cout<< "So luong: "; cin>> soluong;
    cout<< "Tinh trang: "; fflush(stdin); gets(tinhtrang);
}

void TS::xuat()
{
    cout<< tenTS << setw(15) << soluong << setw(15) << tinhtrang <<endl;
}


class PHIEU{
    char maP[30];
    char ngay[30];
    NV x;
    PHONG y;
    TS *s;
    int n;
    friend void Sua(PHIEU k);
    friend void sapxep(PHIEU k);
public:
    void nhap();
    void xuat();
};

void PHIEU::nhap()
{
    cout<< "Ma phieu: "; fflush(stdin); gets(maP);
    cout<< "Ngay: "; fflush(stdin); gets(ngay);
    x.nhap();
    y.nhap();
    cout<< "So luong SP: "; cin>>n;
    s = new TS[n];
    for(int i=0; i<n; i++)
        s[i].nhap();
}

void PHIEU::xuat()
{
    cout<< setw(30) << "PHIEU KIEM KE TAI SAN" <<endl;
    cout<< "Ma phieu: " << maP << setw(15) << "Ngay kiem ke: " << ngay <<endl;
    x.xuat();
    y.xuat();
    cout<<endl;
    int sum = 0;
    cout<< "Ten tai san" << setw(15) << "So luong" << setw(15) << "Tinh trang" <<endl;
    for(int i=0; i<n; i++)
    {
        s[i].xuat();
        sum += s[i].soluong;
    }
    cout<<"So tai san da kiem ke: " << n <<setw(15)<< "Tong so luong: " << sum <<endl;
    cout<<"****************************************************************************"<<endl;
}

void Sua(PHIEU k)
{
    for(int i=0; i<k.n; i++)
    {
        if(strcmp(k.s[i].tenTS, "May vi tinh") == 0)
            k.s[i].soluong = 20;
    }
}

void sapxep(PHIEU k)
{
    for(int i=0; i<k.n; i++)
        for(int j=i+1; j<k.n; j++)
            if(k.s[i].soluong > k.s[j].soluong)
                swap(k.s[i],k.s[j]);
}

int main()
{
    PHIEU P;
    P.nhap();
    P.xuat();
    Sua(P);
    P.xuat();
    sapxep(P);
    P.xuat();
}
