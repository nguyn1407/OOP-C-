#include <bits/stdc++.h>
using namespace std;

class LOPHOC;
class NGUOI{
    char hoten[30];
    char ngaysinh[30];
    char quequan[30];
public:
    void nhap();
    void xuat();
};

void NGUOI::nhap()
{
    cout<<"Ho ten: "; fflush(stdin); gets(hoten);
    cout<<"Ngay sinh: "; fflush(stdin); gets(ngaysinh);
    cout<<"Que quan: "; fflush(stdin); gets(quequan);
}

void NGUOI::xuat()
{
    cout<<setw(25)<<hoten<<setw(20)<<ngaysinh<<quequan<<endl;
}

class SINHVIEN : public NGUOI{
    char masv[30];
    char nganh[30];
    int khoahoc;
    friend class LOPHOC;
    friend void dem(LOPHOC k);
    friend void sapxep(LOPHOC k);
public:
    void nhap();
    void xuat();
};

void SINHVIEN::nhap()
{
    cout<<"Ma sv: "; fflush(stdin); gets(masv);
    cout<<"Nganh hoc: "; fflush(stdin); gets(nganh);
    cout<<"Khoa hoc: "; cin>>khoahoc;
    NGUOI::nhap();
}

void SINHVIEN::xuat()
{
    cout<<setw(20)<<masv<<setw(20)<<nganh<<setw(20)<<khoahoc<<setw(15);
    NGUOI::xuat();
}

class LOPHOC{
    char malh[30];
    char tenlh[30];
    char ngaymo[30];
    SINHVIEN *x;
    int n;
    char giaovien[30];
    friend void dem(LOPHOC k);
    friend void sapxep(LOPHOC k);
public:
    void nhap();
    void xuat();
};

void LOPHOC::nhap()
{
    cout<<"Ma lop hoc: "; fflush(stdin); gets(malh);
    cout<<"Ten lop hoc: "; fflush(stdin); gets(tenlh);
    cout<<"Ngay mo: "; fflush(stdin); gets(ngaymo);
    cout<<"Giao vien: "; fflush(stdin); gets(giaovien);
    cout<<"So luong sv: "; cin>>n;
    x = new SINHVIEN[n];
    for(int i=0;i<n;i++)
        x[i].nhap();
}

void LOPHOC::xuat()
{
    cout<<"-------------IMFORMATION OF CLASS-------------"<<endl;
    cout<<left<<setw(12)<<"Ma lop: "<<setw(12)<<malh<<setw(20)<<"Ten lop hoc"<<setw(20)<<tenlh<<endl;
    cout<<left<<setw(12)<<"Ngay mo: "<<setw(12)<<ngaymo<<setw(20)<<"Giao vien: "<<setw(20)<<giaovien<<endl;
    cout<<"IMFORMATION OF STUDENTS: "<<endl;
    cout<<setw(20)<<"Ma sv"<<setw(20)<<"Nganh"<<setw(20)<<"Khoa hoc"<<setw(20)<<"Ho ten"<<setw(20)<<"Ngay sinh"<<"Que quan"<<endl;
    for(int i=0;i<n;i++)
        x[i].xuat();
    cout<<endl;
}

void dem(LOPHOC k)
{
    int sum = 0;
    for(int i=0;i<k.n;i++)
        if(k.x[i].khoahoc == 11)
            sum++;
    cout<<"So sv khoa 11 la: "<<sum<<endl;
}

void sapxep(LOPHOC k)
{
    for(int i=0;i<k.n;i++)
        for(int j=i+1;j<k.n;j++)
            if(k.x[i].khoahoc > k.x[j].khoahoc)
                swap(k.x[i], k.x[j]);
}

int main()
{
    LOPHOC L;
    L.nhap();
    cout<<endl;
    L.xuat();
    dem(L);
    sapxep(L);
    L.xuat();
}
