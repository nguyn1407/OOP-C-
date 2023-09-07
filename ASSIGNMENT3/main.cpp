#include <bits/stdc++.h>

using namespace std;

class PS{
    int T, M;
public:
    PS();
    PS(int T, int M);
    PS operator*(PS y);
    float operator!();
    friend istream& operator >> (istream &x, PS &y);
    friend ostream& operator << (ostream &x, PS y);

};

PS::PS()
{
    T = M = 0;
}

PS::PS(int T, int M)
{
    this->T = T;
    this->M = M;
}

PS PS::operator*(PS y)
{
    PS ans;
    ans.T = T * y.T;
    ans.M = M * y.M;
    return ans;
}

float PS::operator!()
{
    return (float) T/M;
}

istream& operator >> (istream &x, PS &y)
{
    cout<<"Tu so: "; x>>y.T;
    cout<<"Mau so: "; x>>y.M;
    return x;
}

ostream& operator << (ostream &x, PS y)
{
    x<<"PS: "<<y.T<<"/"<<y.M<<endl;
    return x;
}

int main()
{
    PS A,B;
    cout<<"Nhap PS A: "<<endl;
    cin>>A;
    cout<<"Nhap PS B: "<<endl;
    cin>>B;

    ofstream f;
    f.open("PHANSO.txt", ios::out);
    PS T = A*B;
    f<<T<<endl;
    f<<"Gia tri cua PS la: "<<!T<<endl;
    f.close();

    return 0;
}
