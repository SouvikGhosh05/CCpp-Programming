#include <stdio.h>
int main()
{
	int i, length = 0;
	char a[100];
	printf("Enter the string: ");
	scanf("%s", a);

	for (i = 0; a[i] != '\0'; i++)
	{
		length++;
	}
	printf("length is %d", length);
	return 0;
}
