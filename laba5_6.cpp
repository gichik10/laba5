//Напишите программу, которая запрашивает у пользователя строку и выводит ее верхний регистр
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
string a;
cout << "enter string:";
getline(cin, a);
cout << "Символы в верхнем регистре: ";
for (int i = 0;i<a.length();i++)
{
    char c = a[i];
    if (isupper(c)) {
        cout << c << " ";
    }
}
return 0;
}
