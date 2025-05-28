#include<iostream>
using namespace std;
int main()
{
    char a;
    cout << "enter the a value:" << endl;
    cin >> a;
    if(a == 'a' or a == 'e' or a == 'i' or a == 'o' or a == 'u' or a == 'A' or a == 'E' or a == 'I' or a == 'O' or a == 'U')
    {
        cout << a << " is a vowel" << endl;
    }
    else
    {
        cout << a << " is a consonant" << endl;
    }
}
