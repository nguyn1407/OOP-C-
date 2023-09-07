#include<bits/stdc++.h>
using namespace std;

class matrix
{
    int **a;
    int n,m;
public:
    int operator!(); //tim max
    friend istream& operator>>(istream& x, matrix &y);
    friend ostream& operator<<(ostream& x, matrix y);
};

int main()
{

}
