#include <bits/stdc++.h>

using namespace std;

class SV{
    char maSV[30];
    char tenSV[30];
    char lop[30];
    char khoa[30];
public:
    void nhap();
    void xuat();
};

void SV::nhap()
{
    cout << "Ma SV: "; fflush(stdin); gets(maSV);
    cout << "Ten SV: "; fflush(stdin); gets(tenSV);
    cout << "Lop: "; fflush(stdin); gets(lop);
    cout << "Khoa: "; fflush(stdin); gets(khoa);
}

void SV::xuat()
{
    cout << setw(5) << "Ma SV: " << maSV << setw(10) << "Ten SV: " << tenSV << endl;
    cout << setw(5) << "Lop: " << lop << setw(10) << "Khoa: " << khoa << endl;
}

class Subject{
    char tenS[30];
    int sotrinh;
    float diem;
    friend class PHIEU;
public:
    void nhap();
    void xuat();
};

void Subject::nhap()
{
    cout << "Ten mon: "; fflush(stdin); gets(tenS);
    cout << "So trinh: "; cin >> sotrinh;
    cout << "Diem: "; cin >> diem;
}

void Subject::xuat()
{
    cout << tenS << setw(20) << sotrinh << setw(15) << diem <<endl;
}

class PHIEU{
    SV x;
    Subject *s;
    int n;
public:
    void nhap();
    void xuat();
};

void PHIEU::nhap()
{
    x.nhap();
    cout << "So luong mon: "; cin >> n;
    s = new Subject[n];
    for(int i=0; i<n; i++)
        s[i].nhap();
}

void PHIEU::xuat()
{
    cout << setw(15) << "PHIEU BAO DIEM" << endl;
    x.xuat();
    cout << endl;
    cout << "Bang diem: " << endl;
    int sum1 = 0;
    float sum2 = 0;
    cout << "Ten mon" << setw(20) << "So trinh" << setw(15) << "Diem" <<endl;
    for(int i=0; i<n; i++)
    {
        s[i].xuat();
        sum1 += s[i].sotrinh;
        sum2 += s[i].sotrinh * s[i].diem;
    }
    cout << setw(30) << "Diem trung binh: " << sum2/sum1 << endl;
}

int main()
{
    PHIEU P;
    P.nhap();
    P.xuat();
}
