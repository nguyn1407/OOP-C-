#include <bits/stdc++.h>
using namespace std;

class SCHOOL{
    char name[30];
    char Date[30];
    friend class FACULTY;
    friend class STUDENT;
};

class FACULTY{
    char name[30];
    char date[30];
    SCHOOL x;
    friend class STUDENT;
public:
    void input();
    void output();

};

void FACULTY::input()
{
    cout<<"Ten khoa: "; fflush(stdin); gets(name);
    cout<<"Ngay khoa: "; fflush(stdin); gets(date);
    cout<<"Ten truong: "; fflush(stdin); gets(x.name);
    cout<<"Ngay truong: "; fflush(stdin); gets(x.Date);
}

void FACULTY::output()
{
    cout<<"Ten khoa: "<<name<<endl;;
    cout<<"Ngay khoa: "<<date<<endl;
    cout<<"Ten truong: "<<x.name<<endl;
    cout<<"Ngay truong: "<<x.Date<<endl;
}

class PERSON{
    char Name[30];
    char Birth[30];
    char Address[30];
public:
    void input();
    void output();
    PERSON();
};

PERSON::PERSON()
{
    strcpy(Name, "");
    strcpy(Birth, "");
    strcpy(Address, "");
}

void PERSON::input()
{
    cout<<"Ten nguoi: "; fflush(stdin); gets(Name);
    cout<<"Ngay sinh: "; fflush(stdin); gets(Birth);
    cout<<"Dia chi: "; fflush(stdin); gets(Address);
}

void PERSON::output()
{
    cout<<"Ten nguoi: "<<Name<<endl;
    cout<<"Ngay sinh: "<<Birth<<endl;
    cout<<"Dia chi: "<<Address<<endl;
}

class STUDENT : public PERSON{
    FACULTY y;
    char Class[30];
    float Score;
public:
    void input();
    void output();
    STUDENT();
};

STUDENT::STUDENT()
{
    strcpy(y.name, "");
    strcpy(y.date, "");
    strcpy(y.x.name, "");
    strcpy(y.x.Date, "");
    strcpy(Class, "");
    Score = 0;
}

void STUDENT::input()
{
    y.input();
    PERSON::input();
    cout<<"Class: "; fflush(stdin); gets(Class);
    cout<<"Score: "; cin>>Score;
}

void STUDENT::output()
{
    y.output();
    PERSON::output();
    cout<<"Class: "<<Class<<endl;
    cout<<"Score: "<<Score<<endl;
}

int main()
{
    PERSON P;
    P.input();
    cout<<endl;
    P.output();
}
