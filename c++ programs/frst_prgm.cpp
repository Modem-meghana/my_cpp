#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    float b;
    cout << "Hello" << endl << "world";
    cout <<"Enter the data" << endl;
    cin >> a;
    cin >> b;
    cout << "Entered data:" << a << endl;
    cout << "Entered data:" << fixed << setprecision(2) << b << endl;
}