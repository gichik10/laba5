#include <iostream>
#include <string>
int main() {
    using namespace std;
    setlocale(LC_ALL, "RU");
    string str1;
    char str2;
    cout << "введите строку:";
    getline(cin, str1);
    cout << "введите символ:";
    cin >> str2;
    int a = str1.length();
    cout << "длинна строки:" << a << endl;
    size_t i = str1.find(str2);
    if (i != string::npos) {
        cout << "индекс первого вхождения символа в строку:"<<i  << endl;
    }
    else {
        cout << "Символ не найден в строке";
    }
    return 0;
}
