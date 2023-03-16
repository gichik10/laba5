#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    char c;
    cout << "Enter str:";
    cin >> str;
    cout << "Enter char:";
    cin >> c;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == c) {
            str[i] = ' ';
        }
        
    }
    cout << "new str:" << str;
    return 0;
}