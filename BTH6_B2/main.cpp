#include <bits/stdc++.h>
using namespace std;

class PRINTER{
protected:
    float trongluong;
    char hangsx[30];
    int namsx;
    int tocdo;
};

class DOTPRINTER: public PRINTER{
    int matdokim;
    friend void sua(DOTPRINTER &a);
public:
    void nhap();
    void xuat();
};

void DOTPRINTER::nhap()
{
    cout<<"Trong luong: "; cin>>trongluong;
    cout<<"Hang sx: "; fflush(stdin); gets(hangsx);
    cout<<"Nam sx: "; cin>>namsx;
    cout<<"Toc do: "; cin>>tocdo;
    cout<<"Mat do kim: "; cin>>matdokim;
}

void DOTPRINTER::xuat()
{
    cout<<"Trong luong: "<<trongluong<<endl;
    cout<<"Hang sx: "<<hangsx<<endl;
    cout<<"Nam sx: "<<namsx<<endl;
    cout<<"Toc do: "<<tocdo<<endl;
    cout<<"Mat do kim: "<<matdokim<<endl;
}


class LASERPRINTER: public PRINTER{
    int dophangiai;
    friend void sua(LASERPRINTER &b);
public:
    void nhap();
    void xuat();
};

void LASERPRINTER::nhap()
{
    cout<<"Trong luong: "; cin>>trongluong;
    cout<<"Hang sx: "; fflush(stdin); gets(hangsx);
    cout<<"Nam sx: "; cin>>namsx;
    cout<<"Toc do: "; cin>>tocdo;
    cout<<"Do phan giai: "; cin>>dophangiai;
}

void LASERPRINTER::xuat()
{
    cout<<"Trong luong: "<<trongluong<<endl;
    cout<<"Hang sx: "<<hangsx<<endl;
    cout<<"Nam sx: "<<namsx<<endl;
    cout<<"Toc do: "<<tocdo<<endl;
    cout<<"Do phan giai: "<<dophangiai<<endl;
}

void sua(DOTPRINTER &a)
{
    a.namsx = 2021;
}

void sua(LASERPRINTER &b)
{
    b.namsx = 2021;
}
int main()
{
   DOTPRINTER D;
   LASERPRINTER L;
   cout<<"Nhap may DOTPRINTER: "<<endl;
   D.nhap();
   cout<<"Nhap may LASERPRINTER: "<<endl;
   L.nhap();
   cout<<endl;
   cout<<"Xuat DOTPRINTER: "<<endl;
   D.xuat();
   cout<<"Xuat LASERPINTER: "<<endl;
   L.xuat();
   cout<<endl;
   sua(D);
   sua(L);
   cout<<"Xuat DOTPRINTER: "<<endl;
   D.xuat();
   cout<<"Xuat LASERPINTER: "<<endl;
   L.xuat();
}
