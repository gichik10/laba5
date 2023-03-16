#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    string a;
    string b;
    cout << "введите первую строку:";
    getline(cin,a);
    cout << "введите вторую строку:";
    getline(cin, b);;
    cout << a+b;
    return 0;
}