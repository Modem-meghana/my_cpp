#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter the a,b, and c values:" << endl;
    if(a > b and a>c)
    {
        cout << "A is maximum" << endl;
    }
    else if(b>a and b>c)
    {
        cout << "B is maximun" << endl;
    }
    else
    {
        cout << "C is maximuum" << endl;
    }
   /* cin >> a >> b >> c;
    (a>b)? (a>c? cout << "A is maximum": cout << "C is maximum"):
    (b>c? cout << "B is maximum": cout <<  "C is maximum");*?
}