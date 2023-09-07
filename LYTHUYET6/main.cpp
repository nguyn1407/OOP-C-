#include <bits/stdc++.h>

using namespace std;

/*
class HANG
{
    char maH[30];
    char tenH[30];
    float dongia;
public:
    friend istream& operator>>(istream& x, HANG& y);
    friend ostream& operator<<(ostream&x, HANG y);
};

istream& operator>>(istream& x, HANG& y)
{
    cout<<"Ma hang: "; x.getline(y.maH, 30);
    cout<<"Ten hang: "; x.getline(y.tenH, 30);
    cout<<"Don gia: "; x>>y.dongia;
    x.ignore();
    return x;
}

ostream& operator<<(ostream&x, HANG y)
{
    x << setw(15) << y.maH << setw(15) << y.tenH <<setw(15) << y.dongia <<endl;
    return x;
}

int main()
{
    HANG H;
    cin>>H;
    cout<<endl;
    cout<<H;

    ifstream tep;
    tep.open("D:/LYTHUYET6", ios::in)
    tep>>H;

}*/


class HANG
{
    char maH[30], tenH[30], mausac[30];
    float dongia, TL;
public:
    friend istream& operator >> (istream& x, HANG &y);
    friend ostream& operator << (ostream&x, HANG y);
};

istream& operator >> (istream& x, HANG &y)
{
    x.getline(y.maH, 30);
    x.getline(y.tenH, 30);
    x >> y.dongia;
    x >> y.TL;
    x.getline(y.mausac, 30);
    x.ignore();
    return x;
}

ostream& operator << (ostream&x, HANG y)
{
    x << y.maH <<endl;
    x << y.tenH <<endl;
    x << y.dongia <<endl;
    x << y.TL <<endl;
    x << y.mausac <<endl;
    return x;
}


int main()
{
    int n; cin >> n;
    HANG *H;
    H = new HANG[n];
    for(int i=0;i<n;i++)
        cin>>H[i];

    ofstream tep("D:/DOCTEP", ios::app);
    for(int i=0;i<n;i++) tep<<H[i]<<endl;
    tep.close();



        ifstream tep2;
        tep2.open("D:/DOCTEP", ios::in);
        HANG T;
        //cach2
        for(int i=0;i<n;i++)
        {
            tep2>>T;
            cout<<T;
        }

        //cach 1
        /*char s[200];
        while(!tep2.eof())
        {
            tep2.getline(s,200);
            cout<<s<<endl;
        }*/
        tep2.close();
}
