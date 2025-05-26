#include<iostream>
using namespace std;
float multiply(float a,float b);
int main()
{
    float a,b,mul;
    cout << "Enter the a and b values: " << endl;
    cin >> a;
    cin >> b;
    mul = multiply(a,b);
    cout << "multiplied output" << mul << endl;
return 0;
}
float multiply(float a,float b)
{
    float mul=0;
    mul = a*b;
    return mul;
}