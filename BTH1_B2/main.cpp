#include <bits/stdc++.h>

using namespace std;

class HCN{
    float D, R;
public:
    void NHAP();
    void VE();
    float DIENTICH();
    float CHUVI();
};

void HCN::NHAP()
{
    cout<<"Chieu dai: "; cin>>D;
    cout<<"Chieu rong: "; cin>>R;
}

void HCN::VE()
{
    for(int i=1;i<=D;i++)
    {
        cout<<setw(5);
        for(int i=1;i<=R;i++)
            cout<<"*";
        cout<<endl;
    }
}

float HCN::DIENTICH()
{
    return D*R;
}

float HCN::CHUVI()
{
    return (D+R)*2;
}

int main()
{
   HCN x;
   x.NHAP();
   x.VE();
   cout<<"Dien tich: "<<x.DIENTICH()<<endl;
   cout<<"Chu vi: "<<x.CHUVI()<<endl;
}
