// char is vowels,consonants or special char
#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << ch << " is a vowel." << endl;
    }
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        cout << ch << " is a consonant." << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << ch << " is a digit." << endl;
    }
    else {
        cout << ch << " is a special character." << endl;
    }

    return 0;
}
