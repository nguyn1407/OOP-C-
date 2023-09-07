#include <bits/stdc++.h>
using namespace std;

class PERSON{
protected:
    char hoten[30];
    char ngaysinh[30];
    char quequan[30];
};

class KYSU : public PERSON{
    char nganh[30];
    int namTN;
    friend void timkiem(KYSU *k, int n);
public:
    void nhap();
    void xuat();
};

void KYSU::nhap()
{
    cout<<"Ho ten: "; fflush(stdin); gets(hoten);
    cout<<"Ngay sinh: "; fflush(stdin); gets(ngaysinh);
    cout<<"Que quan: "; fflush(stdin); gets(quequan);
    cout<<"Nganh: "; fflush(stdin); gets(nganh);
    cout<<"Nam tot nghiep: "; cin>>namTN;
}

void KYSU::xuat()
{
    cout<<hoten<<setw(25)<<ngaysinh<<setw(25)<<quequan<<setw(25)<<nganh<<setw(25)<<namTN<<endl;
}

void timkiem(KYSU *k, int n)
{
    int maxx = k[0].namTN;
    for(int i=0; i<n;i++)
        if(k[i].namTN > maxx)
            maxx = k[i].namTN;
    for(int i=0;i<n;i++)
        if(k[i].namTN == maxx)
        {
            cout<<"Ho ten"<<setw(25)<<"Ngay sinh"<<setw(25)<<"Que quan"<<setw(25)<<"Nganh"<<setw(25)<<"Nam tot nghiep"<<endl;
            cout<<k[i].hoten<<setw(25)<<k[i].ngaysinh<<setw(25)<<k[i].quequan<<setw(25)<<k[i].nganh<<setw(25)<<k[i].namTN<<endl;
        }

}
int main()
{
    int n;
    cout<<"Nhap so luong ky su: "; cin>>n;
    KYSU *k;
    k = new KYSU[n];
    for(int i=0;i<n;i++)
        k[i].nhap();
    cout<<"Ho ten"<<setw(25)<<"Ngay sinh"<<setw(25)<<"Que quan"<<setw(25)<<"Nganh"<<setw(25)<<"Nam tot nghiep"<<endl;
    for(int i=0;i<n;i++)
        k[i].xuat();
    cout<<endl;
    cout<<"Thong tin cac ky su tot nghiep gan day nhat: "<<endl;
    timkiem(k,n);
}
