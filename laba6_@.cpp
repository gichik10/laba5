#include <cctype>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str, a;
    cout << "Enter str:";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
       a=(toupper(str[i]));
       cout << a;
    }
    return 0;
}