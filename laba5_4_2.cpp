#include <iostream>
#include <string>
#include <algorithm>
int main() {
    using namespace std;
    setlocale(LC_ALL, "RU");
    string str1, str2;
    int c = 0;
    cout << "введите первую строку:";
    getline(cin, str1);
    cout << "введите вторую строку:";
    getline(cin, str2);
    sort(str2.begin(), str2.end());
    sort(str1.begin(), str1.end());
    if (str1 == str2) {
        cout << " анаграмма";
    }
    else {
        cout << "не анаграмма";
    }
    return 0;
}