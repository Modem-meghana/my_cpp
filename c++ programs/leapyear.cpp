#include<iostream>
using namespace std;
int main()
{
    int leap;
    cout << "Enter the year to be leap:" << endl;
    cin >> leap;
    if(leap % 4 ==0 and leap % 100 !=0 or leap % 400 == 0)
    {
        cout <<  leap  << "is a leap year" << endl;
    }
    else{
        cout << leap  << "is a not leap year" << endl;
    }
}
