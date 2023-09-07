#include <bits/stdc++.h>

using namespace std;

class PHUONGTRINH{
    float a,b,c;
public:
    void NHAP();
    void GIAI();
    void XUAT();
};

void PHUONGTRINH::NHAP()
{
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;
}

void PHUONGTRINH::GIAI()
{
    if(a == 0)
        cout<<"PT khong phai bac 2"<<endl;
    else
    {
        float delta = b*b - 4*a*c;
        if(delta < 0)
            cout<<"PT vo nghiem"<<endl;
        else if(delta == 0)
            cout<<"PT co nghiem: "<<-b/(2*a)<<endl;
        else
        {
            cout<<"PT co nghiem thu 1: "<< (-b + sqrt(delta))/(2*a) <<endl;
            cout<<"PT co nghiem thu 2: "<< (-b - sqrt(delta))/(2*a) <<endl;
        }
    }
}

void PHUONGTRINH::XUAT()
{
    cout<<"("<<a<<") x^2 + "<<"("<<b<<") x + "<<"("<<c<<")"<<endl;
}

int main()
{
    PHUONGTRINH a;
    a.NHAP();
    a.GIAI();
    a.XUAT();
}
