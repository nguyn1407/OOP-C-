#include <bits/stdc++.h>

using namespace std;

class PT2{
    float a,b,c;
public:
    void nhap();
    void xuat();
    void giai();
    PT2();
    PT2(float a, float b, float c);
};

PT2::PT2()
{
    a = 0;
    b = 0;
    c = 0;
}

PT2::PT2(float e, float d, float f)
{
    a = e;
    b = d;
    c = f;
}

void PT2::nhap()
{
    cout<<"Nhap a: "; cin>>a;
    cout<<"Nhap b: "; cin>>b;
    cout<<"Nhap c: "; cin>>c;
}

void PT2::giai()
{
    if(a==0) cout<<"PT khong la PT2"<<endl;
    else
    {
        float delta = b*b - 4*a*c;
        if(delta > 0)
        {
            float x1 = (float)(b + sqrt(delta))/(2*a);
            float x2 = (float)(-b + sqrt(delta))/(2*a);
            cout<<"PT co nghiem x1: "<<x1<<endl;
            cout<<"PT co nghiem x2: "<<x2<<endl;
        }
        else if(delta == 0)
        {
            float x = -b/(2*a);
            cout<<"PT co nghiem kep x: "<<x<<endl;
        }
        else
            cout<<"PT vo nghiem"<<endl;
    }
}

void PT2::xuat()
{
    cout<<"PT bac 2 la: ("<<a<<")x^2 + ("<<b<<")x + ("<<c<<")"<<endl;
}

int main()
{
   PT2 P(1,2,-3);
   P.xuat();
   P.giai();
   PT2 Q;
   Q.nhap();
   Q.giai();
   Q.xuat();
}
