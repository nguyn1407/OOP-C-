#include <bits/stdc++.h>
using namespace std;

class SP{
    float thuc, ao;
public:
    SP();
    SP(float thuc, float ao);
    friend ostream& operator << (ostream& x, SP y);
    SP operator+(SP y);
    SP operator-(SP y);
};

SP::SP()
{
    thuc = ao = 0;
}

SP::SP(float thuc, float ao)
{
    this->thuc = thuc;
    this->ao = ao;
}

ostream& operator << (ostream& x, SP y)
{
    cout<<"SP: "<<y.thuc<<"+"<<y.ao<<"*i"<<endl;
    return x;
}

SP SP::operator+(SP y)
{
    SP ans;
    ans.thuc = thuc + y.thuc;
    ans.ao = ao + y.ao;
    return ans;
}

SP SP::operator-(SP y)
{
    SP ans;
    ans.thuc = thuc - y.thuc;
    ans.ao = ao - y.ao;
    return ans;
}

int main()
{
    SP SP1(1,2);
    SP SP2(3,4);
    SP SP3 = SP1 - SP2;
    SP SP4 = SP1 + SP2;

    ofstream o ("/BT.txt", ios::out);
    o<<SP3<<SP4<<endl;
    o.close();
    return 0;
}
