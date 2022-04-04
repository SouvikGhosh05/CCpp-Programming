#include <iostream>
using namespace std;
int main()
{
	int i, num, j, g[20], temp;
	cout << "Enter the number of elements in the array: ";
	cin >> num;
	cout << "Enter the array: ";
	for (i = 0; i < num; i++)
	{
		cin >> g[i];
	}
	for (i = 0; i < num; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			if (g[i] > g[j])
			{
				temp = g[i];
				g[i] = g[j];
				g[j] = temp;
			}
		}
	}
	cout << "The ascending order is: ";
	for (i = 0; i < num; i++)
	{
		cout << " " << g[i];
	}
	return 0;
}
