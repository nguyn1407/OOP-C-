#include<bits/stdc++.h>
using namespace std;

class HANG{
    char MAH[30];
    char TENH[30];
    float DG;
    int SL, NAM;
public:
    HANG();
    HANG(char*a, char*b, float c, int d, int e);
    friend istream& operator >> (istream& x, HANG &y);
    friend ostream& operator << (ostream& x, HANG y);
    friend void timkiem(HANG*H, int n);
    friend void sapxep(HANG* H, int n);
    friend void xoa1(HANG*& H, int& n);
    friend void xoa2(HANG*& H, int& n);
};

 HANG::HANG()
 {
     strcpy(MAH, "");
     strcpy(TENH, "");
     DG = 0;
     SL = NAM = 0;
 }

 HANG::HANG(char*a, char*b, float c, int d, int e)
 {
     strcpy(MAH, a);
     strcpy(TENH, b);
     DG = c;
     SL = d;
     NAM = e;
 }

 istream& operator >> (istream& x, HANG &y)
 {
     cout<<"Ma hang: "; fflush(stdin); x.getline(y.MAH, 30);
     cout<<"Ten hang: "; fflush(stdin); x.getline(y.TENH, 30);
     cout<<"Don gia: "; x >> y.DG;
     cout<<"So luong: "; x >> y.SL;
     cout<<"Nam: "; x >> y.NAM;
 }

 ostream& operator << (ostream& x, HANG y)
 {
     x << setw(10) <<  y.MAH << setw(10) << y.TENH << setw(10) << y.DG << setw(10) << y.SL << setw(10) << y.NAM <<endl;
 }

 void timkiem(HANG*H, int n)
 {
     bool check = false;
     for(int i=0;i<n;i++)
        if(!strcmp(H[i].TENH, "IPHONE 12") )
        {
            check = true;
            break;
        }
    if(check)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
 }

 void sapxep(HANG* H, int n)
 {
     for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(H[i].DG * H[i].SL > H[j].DG * H[j].SL)
                swap(H[i], H[j]);
 }

 void xoa1(HANG*& H, int& n)
 {
     for(int i=0;i<n;i++)
        if( !strcmp(H[i].MAH, "H005") )
        {
            for(int j=i;j<n-1;j++)
                H[j] = H[j+1];
            n--;
            break;
        }
    H = (HANG*) realloc(H, n*sizeof(HANG));
 }

 void xoa2(HANG*& H, int& n)
 {
     for(int i=0;i<n;i++)
        while(H[i].DG < 20 && i<n)
        {
            for(int j=i;j<n-1;j++)
                H[j] = H[j+1];
            n--;
        }
        H = (HANG*) realloc(H, n*sizeof(HANG));
 }

int main()
{
    HANG* H;
    int n;
    cout<<"Nhap n: "; cin>>n;
    H = new HANG[n];
    for(int i=0;i<n;i++)
        cin>>H[i];

    ofstream o("D:/HANGNHAP.DAT", ios::out);
    for(int i=0;i<n;i++)
        o << H[i];
    o.close();

    timkiem(H, n);

}
