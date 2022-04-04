#include <stdio.h>
#include <string.h>
int main()
{
	int i, size = 0;
	char g[20], reverse_g[20];
	printf("Enter the string: ");
	scanf("%s", g);
	for (i = 0; g[i] != '\0'; i++)
	{
		size++;
	}
	for (i = size - 1; i >= 0; i--)
	{
		reverse_g[size - 1 - i] = g[i];
	}
	reverse_g[size] = '\0';
	if (strcmp(g, reverse_g) == 0)
	{
		printf("The string is a palindrome.\n");
	}
	else
	{
		printf("The string is not a palindrome.\n");
	}
}
