#include <iostream>
using namespace std;
int main()
{
    float fr,cl=0;
    cout << "Enter fahrenheit value" << endl;
   
    cin >> fr;
    cl = (fr-32)*5/9;
    cout << "fr to cl  " << cl << endl;
}