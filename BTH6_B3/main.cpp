#include <bits/stdc++.h>
using namespace std;

class VEHICLE{
protected:
    char nhanhieu[30];
    int namsx;
    char hang[30];
public:
    void nhap();
    void xuat();
};

void VEHICLE::nhap()
{
    cout<<"Nhan hieu: "; fflush(stdin); gets(nhanhieu);
    cout<<"Nam sx: "; cin>>namsx;
    cout<<"Hang: "; fflush(stdin); gets(hang);
}

void VEHICLE::xuat()
{
    cout<<"Nhan hieu: "<<nhanhieu<<endl;
    cout<<"Nam sx: "<<namsx<<endl;
    cout<<"Hang: "<<hang<<endl;
}


class OTO : public VEHICLE{
    int sochongoi;
    float dungtich;
    friend void sua(OTO &k);
public:
    void nhap();
    void xuat();
};

void OTO::nhap()
{
    VEHICLE::nhap();
    cout<<"So cho ngoi: "; cin>>sochongoi;
    cout<<"Dung tich: "; cin>>dungtich;
}

void OTO::xuat()
{
    VEHICLE::xuat();
    cout<<"So cho ngoi: "<<sochongoi<<endl;
    cout<<"Dung tich: "<<dungtich<<endl;
}

class MOTO: public VEHICLE{
    float phankhoi;
public:
    void nhap();
    void xuat();
};

void MOTO::nhap()
{
    VEHICLE::nhap();
    cout<<"Phan khoi: "; cin>>phankhoi;
}

void MOTO::xuat()
{
    VEHICLE::xuat();
    cout<<"Phan khoi: "<<phankhoi<<endl;
}

void sua(OTO &k)
{
    k.dungtich = 3.0;
}

int main()
{
    OTO O;
    MOTO M;
    cout<<"Nhap OTO: "<<endl;
    O.nhap();
    cout<<"Nhap MOTO: "<<endl;
    M.nhap();
    cout<<endl;
    cout<<"Xuat OTO: "<<endl;
    O.xuat();
    cout<<"Xuat MOTO: "<<endl;
    M.xuat();
    sua(O);
    cout<<endl;
    cout<<"Xuat OTO: "<<endl;
    O.xuat();
}
