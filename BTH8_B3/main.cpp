#include <bits/stdc++.h>
using namespace std;

class TAMTHUC{
    float a,b,c;
public:
    TAMTHUC();
    TAMTHUC(float a, float b, float c);
    friend ostream& operator << (ostream& x, TAMTHUC y);
    TAMTHUC operator--();
    TAMTHUC operator+(TAMTHUC y);
    TAMTHUC operator-(TAMTHUC y);
};

TAMTHUC::TAMTHUC()
{
    a = b = c = 0;
}

TAMTHUC::TAMTHUC(float a, float b, float c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

ostream& operator << (ostream& x, TAMTHUC y)
{
    cout<<"Tam thuc: "<<y.a<<"x^2 + "<<y.b<<"x + "<<y.c<<endl;
    return x;
}

TAMTHUC TAMTHUC::operator--()
{
    this->a = -a;
    this->b = -b;
    this->c = -c;
}

TAMTHUC TAMTHUC::operator+(TAMTHUC y)
{
    TAMTHUC ans;
    ans.a = a + y.a;
    ans.b = b + y.b;
    ans.c = c + y.c;
    return ans;
}

TAMTHUC TAMTHUC::operator-(TAMTHUC y)
{
    TAMTHUC ans;
    ans.a = a - y.a;
    ans.b = b - y.b;
    ans.c = c - y.c;
    return ans;
}

int main()
{
    TAMTHUC T1(3,4,5);
    TAMTHUC T2(2,3,4);
    --T1;
    --T2;
    TAMTHUC T3 = T1+T2;
    TAMTHUC T4 = T1-T2;

    ofstream o("BT.txt", ios::out);
    o<<"Tam thuc sau khi doi dau: "<<T1<<endl;
    o<<"Tam thuc sau khi doi dau: "<<T2<<endl;



    o<<"Tam thuc sau khi cong: "<<T3<<endl;
    o<<"Tam thuc sau khi tru: "<<T4<<endl;

    return 0;
}
