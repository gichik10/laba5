
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	char c;
	cout << "enter str:";
	cin >> str;
	cout << "enter char:";
	cin >> c;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == c)
		{
			str.replace(i,1, " ");
		}
	}
	cout << str << endl;
	return 0;
}