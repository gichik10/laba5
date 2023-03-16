
#include <iostream>
#include <string>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    string str;
    int c = 0;
    cout << "Введите строку: ";
    getline(cin, str);
    for (int i =0; i <str.length(); i++) {
        if (str[i] == str[str.length() - i - 1]) {
            c++;
       }
    }
    if (c == str.length()) {
        cout << "палиндром";
    }
    else {
        cout << "не палиндром";
    }
    return 0;
}