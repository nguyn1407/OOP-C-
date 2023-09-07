#include<bits/stdc++.h>
using namespace std;

class HINHTHANG{
    float a,b,h;
public:
    HINHTHANG();
    HINHTHANG(float a, float b, float h);
    friend istream& operator >> (istream &x, HINHTHANG &y);
    friend ostream& operator << (ostream &x, HINHTHANG y);
    float operator++();
    HINHTHANG operator+(HINHTHANG y);
    bool operator%(HINHTHANG y);
};

HINHTHANG::HINHTHANG()
{
    a = b = h = 0;
}

HINHTHANG::HINHTHANG(float a, float b, float h)
{
    this->a = a;
    this->b = b;
    this->h = h;
}

istream& operator >> (istream &x, HINHTHANG &y)
{
    cout<<"Nhap day lon: "; x>>y.a;
    cout<<"Nhap day nho: "; x>>y.b;
    cout<<"Nhap chieu cao: "; x>>y.h;
    return x;
}

ostream& operator << (ostream &x, HINHTHANG y)
{
    x<<"Thong tin hinh thang: "<<endl;
    x<<"Day lon: "<<y.a<<endl;
    x<<"Day nho: "<<y.b<<endl;
    x<<"Chieu cao: "<<y.h<<endl;
    return x;
}

float HINHTHANG::operator++()
{
    return (float) (a+b)*h/2;
}

HINHTHANG HINHTHANG::operator+(HINHTHANG y)
{
    HINHTHANG ans;
    ans.a = a + y.a;
    ans.b = b + y.b;
    ans.h = h + y.h;
    return ans;
}

bool HINHTHANG::operator%(HINHTHANG y)
{
    if(++*this == ++y)
        return true;
    else
        return false;
}


int main()
{
    HINHTHANG A,B;
    cout<<"Nhap thong tin hinh thang A: "<<endl;
    cin>>A;
    cout<<"Nhap thong tin hinh thang B: "<<endl;
    cin>>B;
    cout<<endl;
    cout<<A<<endl;
    cout<<"Dien tich hinh thang A: "<<++A<<endl;
    cout<<endl;
    cout<<B<<endl;
    cout<<"Dien tich hinh thang B: "<<++B<<endl;

    ofstream f;
    f.open("HINHTHANG15.txt", ios::out);
    f<<A<<endl;
    f<<"Dien tich hinh thang A: "<<++A<<endl;
    f<<endl;
    f<<B<<endl;
    f<<"Dien tich hinh thang B: "<<++B<<endl;
    f<<endl;
    f.close();

    HINHTHANG H = A + B;
    f.open("HINHTHANG15.txt", ios::app);
    f<<H<<endl;
    f<<"Dien tich hinh thang H: "<<++H<<endl;
    f.close();

    if(A%B)
        cout<<"Hai Hinh Thang dien tich bang nhau!"<<endl;
    else
        cout<<"Hai Hinh Thang dien tich khong bang nhau!"<<endl;

    return 0;
}
