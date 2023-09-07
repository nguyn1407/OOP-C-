#include <bits/stdc++.h>

using namespace std;

class ARRAY{
    int *VALUE;
    int n;
public:
    ARRAY();
    ARRAY(int n);
    ~ARRAY();
    void nhap();
    void xuat();
};

ARRAY::ARRAY()
{
    n = 0;
    VALUE = NULL;
}

ARRAY::ARRAY(int a)
{
    n = a;
    VALUE = new int [n];
    for(int i=0;i<n;i++)
        VALUE[i] = 0;
}

ARRAY::~ARRAY()
{
    n = 0;
    delete VALUE;
}

void ARRAY::nhap()
{
    cout<<"Nhap n = "; cin>>n;
    cout<<"Nhap mang: ";
    for(int i=0;i<n;i++)
        cin>>VALUE[i];
}

void ARRAY::xuat()
{
    cout<<"Mang la: ";
    for(int i=0;i<n;i++)
        cout<<VALUE[i]<<" ";
}


int main()
{
    ARRAY a(3);
    a.xuat();
    a.nhap();
    a.xuat();
}
