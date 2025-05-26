#include<iostream>
using namespace std;
int main()
{
    size_t a,d,c,f;
    a = sizeof(int);
    d = sizeof(double);
    c = sizeof(char);
    f = sizeof(float);
    cout << "sizeof int  " << a << endl;
    cout << "sizeof double  " << d << endl;
    cout << "sizeof char  " << c << endl;
    cout << "sizeof float  " << f << endl;
}
