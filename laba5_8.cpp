
#include <iostream>
#include <string>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    string str;
    cout << "Введите строку: ";
    getline(cin, str);

    int c = 0;
    bool word=false;
    for (int  i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            word = false;
        }
        else if (!word) {
            c++;
            word = true;
        }
    }

    cout << "Количество слов в строке: " << c << std::endl;
    return 0;
}
