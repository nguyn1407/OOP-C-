#include <bits/stdc++.h>
using namespace std;

class BENHVIEN{
    char TenBenhVien[30];
    char DiaChi[30];
    char GiamDoc[30];
    friend class BENHNHAN;
};

class NGUOI{
protected:
    char HoTen[30];
    int Tuoi;
    BENHVIEN B;
public:
    void nhap();
    void xuat();
};

void NGUOI::nhap()
{
    cout<<"Ten benh vien: "; fflush(stdin); gets(B.TenBenhVien);
    cout<<"Dia chi: "; fflush(stdin); gets(B.DiaChi);
    cout<<"Giam doc: "; fflush(stdin); gets(B.GiamDoc);
    cout<<"Ho ten: "; fflush(stdin); gets(HoTen);
    cout<<"Tuoi: "; cin>>Tuoi;
}

void NGUOI::xuat()
{
    cout<<"Ten benh vien: "<<B.TenBenhVien<<endl;
    cout<<"Dia chi: "<<B.DiaChi<<endl;
    cout<<"Giam doc: "<<B.GiamDoc<<endl;
    cout<<setw(15)<<HoTen<<setw(15)<<Tuoi<<setw(15);
}

class BENHNHAN : public NGUOI{
    char Ma[30];
    char TienSu[30];
    char ChuanDoan[30];
public:
    void nhap();
    void xuat();
};

void BENHNHAN::nhap()
{
    cout<<"Ten benh vien: "; fflush(stdin); gets(B.TenBenhVien);
    cout<<"Dia chi: "; fflush(stdin); gets(B.DiaChi);
    cout<<"Giam doc: "; fflush(stdin); gets(B.GiamDoc);
    cout<<"Ma benh nhan: "; fflush(stdin); gets(Ma);
    cout<<"Tien su: "; fflush(stdin); gets(TienSu);
    cout<<"Chuan doan: "; fflush(stdin); gets(ChuanDoan);
    NGUOI::nhap();
}

void BENHNHAN::xuat()
{
    cout<<"Ten benh vien: "; fflush(stdin); gets(B.TenBenhVien);
    cout<<"Dia chi: "; fflush(stdin); gets(B.DiaChi);
    cout<<"Giam doc: "; fflush(stdin); gets(B.GiamDoc);

    NGUOI::xuat();
    cout<<Ma<<setw(15)<<TienSu<<setw(15)<<ChuanDoan<<endl;
}



int main()
{
   BENHNHAN B;
   B.nhap();
   cout<<endl;
   B.xuat();
}
