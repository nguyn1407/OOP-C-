#include <bits/stdc++.h>

using namespace std;

class NCC{
    char maNCC[30];
    char tenNCC[30];
    char diachi[30];
public:
    void nhap();
    void xuat();
};

void NCC::nhap()
{
    cout << "Ma NCC: "; fflush(stdin); gets(maNCC);
    cout << "Ten NCC: "; fflush(stdin); gets(tenNCC);
    cout << "Dia chi NCC: "; fflush(stdin); gets(diachi);
}

void NCC::xuat()
{
    cout << "Ma NCC: " << maNCC << setw(20) << "Ten NCC: " << tenNCC << endl;
    cout << "Dia chi NCC: " << diachi << endl;
}

class SP{
    char tenSP[30];
    float dongia;
    int soluong;
    friend class PHIEU;
public:
    void nhap();
    void xuat();
};

void SP::nhap()
{
    cout << "Ten SP: "; fflush(stdin); gets(tenSP);
    cout << "Don gia: "; cin >> dongia;
    cout << "So luong: "; cin >> soluong;
}

void SP::xuat()
{
    cout << tenSP << setw(15) << dongia << setw(15) << soluong << setw(15) << dongia*soluong << endl;
}


class PHIEU{
    char maP[30];
    char ngay[30];
    int n;
public:
    void nhap();
    void xuat();
    NCC x;
    SP *s;
};

void PHIEU::nhap()
{
    cout << "Ma Phieu: "; fflush(stdin); gets(maP);
    cout << "Ngay nhap: "; fflush(stdin); gets(ngay);
    x.nhap();
    cout << "Nhap so luong SP: "; cin >> n;
    s = new SP[n];
    for(int i=0; i<n; i++)
        s[i].nhap();
}

void PHIEU::xuat()
{
    cout << setw(25) << "PHIEU NHAP HANG" << endl;
    cout << "Ma phieu: " << maP << setw(20) << "Ngay lap: " << ngay << endl;
    x.xuat();
    cout << endl;
    cout << "Ten SP" << setw(15) << "Don gia" << setw(15) << "So luong" << setw(15) << "Thanh tien" << endl;
    float sum = 0;
    for(int i=0; i<n; i++)
    {
        s[i].xuat();
        sum += s[i].dongia * s[i].soluong;
    }
    cout << setw(50) << "Cong thanh tien: " << sum << endl;
}

int main()
{
    PHIEU P;
    P.nhap();
    P.xuat();
}
