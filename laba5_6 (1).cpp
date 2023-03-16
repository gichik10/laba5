#include <iostream>
#include <string>
int main() {
    using namespace std;
    setlocale(LC_ALL, "RU");
    string str1;
    cout << "введите  строку:";
    getline(cin, str1);
    for (int i = str1.length()-1; i >= 0; i--) {
        cout << str1[i];
    }
    return 0;
}