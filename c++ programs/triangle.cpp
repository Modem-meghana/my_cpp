#include<iostream>
using namespace std;

int main()
{
    int an1, an2, an3;

    cout << "Enter three angles of a triangle: ";
    cin >> an1 >> an2 >> an3;
    if ((an1 > 0 && an2 > 0 && an3 > 0) &&
        (an1 + an2 + an3 == 180))
    {
        cout << "The triangle is valid." << endl;
    }
    else
    {
        cout << "The triangle is not valid." << endl;
    }

    return 0;
}
