#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    bool Even = (num % 2 == 0); 

    cout << boolalpha << Even << endl; 

    return 0;
}
