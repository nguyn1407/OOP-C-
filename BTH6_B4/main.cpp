#include <bits/stdc++.h>
using namespace std;

class ELECTRONIC{
protected:
    float congsuat;
    float dienap;
public:
    ELECTRONIC();
    ELECTRONIC(float a, float b);
};

ELECTRONIC::ELECTRONIC(float a, float b)
{
    congsuat = a;
    dienap = b;
}

class MAYGIAT: public ELECTRONIC{
    float dungtich;
    char loai[30];
public:
    MAYGIAT();
    MAYGIAT(float a, float b, float c, char*d);
    void xuat();
};

MAYGIAT::MAYGIAT(float a, float b, float c, char*d):ELECTRONIC(a,b)
{
    dungtich = c;
    strcpy(loai, d);
}
void MAYGIAT::xuat()
{
    cout<<"Cong suat: "<<congsuat<<endl;
    cout<<"Dien ap: "<<dienap<<endl;
    cout<<"Dung tich: "<<dungtich<<endl;
    cout<<"Loai: "<<loai<<endl;
}

class TULANH: public ELECTRONIC{
    float dungtich;
    int songan;
public:
    TULANH();
    TULANH(float a, float b, float c, int d);
    void xuat();
};

TULANH::TULANH(float a, float b, float c, int d):ELECTRONIC(a,b)
{
    dungtich = c;
    songan = d;
}

void TULANH::xuat()
{
    cout<<"Cong suat: "<<congsuat<<endl;
    cout<<"Dien ap: "<<dienap<<endl;
    cout<<"Dung tich: "<<dungtich<<endl;
    cout<<"So ngan: "<<songan<<endl;
}

int main()
{
    MAYGIAT M(2,4,6,"Co nap");
    TULANH T(4,5,6,10);
    cout<<"Xuat may giat: "<<endl;
    M.xuat();
    cout<<"Xuat tu lanh: "<<endl;
    T.xuat();

}
