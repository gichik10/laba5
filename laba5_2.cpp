#include <iostream>
#include <string>
using namespace std;
int main()
{
    //2.	Напишите функцию, которая принимает на вход строку и возвращает её длину.
    setlocale(LC_ALL, "Rus");
    string a;
    cout << "введите строку:";
    getline(cin,a);
    cout << "length:" << a.length();
    return 0;
}
   