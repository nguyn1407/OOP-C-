#include <bits/stdc++.h>
using namespace std;

class PS{
    float TS, MS;
public:
    PS operator+ (PS y);
    PS operator- (PS y);
    PS operator* (PS y);
    PS operator/ (PS y);
    float operator- ();
    friend istream& operator >> (istream& x, PS& y);
    friend ostream& operator << (ostream& x, PS y);
};

PS PS::operator+(PS y)
{
    PS temp;
    temp.TS = TS*y.MS + MS*y.TS;
    temp.MS = MS*y.MS;
    return temp;
}


int main()
{

    return 0;
}
