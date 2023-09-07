#include <bits/stdc++.h>

using namespace std;

class HANG{
    char maH[30];
    char tenH[30];
    int donGia;
public:
    void nhap();
    void xuat();
};

void HANG::nhap()
{
    cout<< "Nhap ma hang: ";     fflush(stdin); gets(maH);
    cout<< "Nhap ten hang: ";    fflush(stdin); gets(tenH);
    cout<< "Nhap don gia: ";     cin>> donGia;
}

void HANG::xuat()
{
    cout<< "Ma hang: " << maH << "\n";
    cout<< "Ten hang: " << tenH << "\n";
    cout<< "Don gia: " << donGia << "\n";
}

int main()
{
    HANG *H;
    int n;
    cout<< "Nhap so luong hang: "; cin>> n;
    H = new HANG[n];

    for(int i=0; i<n; i++)
    {
        cout<< "Nhap hang thu " << i+1 << "\n";
        H[i].nhap();
    }

    for(int i=0; i<n; i++)
    {
        cout<< "Hang thu " << i+1 << "\n";
        H[i].xuat();
        cout<< "\n";
    }

    return 0;
}
