#include <iostream>
using namespace std;

int main()
{
	int i, length = 0;
	char s[20], reverse_s[20];
	cout << "Enter the string: ";
	cin >> s;
	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		reverse_s[length - 1 - i] = s[i];
	}
	reverse_s[length] = '\0';
	cout << "The reverse string is: \n";
	for (i = 0; i < length; i++)
	{
		cout << "" << reverse_s[i];
	}
	return 0;
}
