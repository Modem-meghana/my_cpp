#include<iostream>
using namespace std;
int main()
{
    char a;
    cout << "enter char value:" << endl;
    cin >> a;
    if(a >= 'A' and a<= 'Z' || a>= 'a' and a<= 'z')
    {
        cout << a  << " It is a alphabet" << endl;
    }
    else
    {
        cout << a  << "is not a alphabet" << endl;
    }
}
