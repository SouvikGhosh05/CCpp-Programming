#include <stdio.h>
int main()
{
	int i, j;

	for (i = 5; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			if (i == j + 1)
			{
				printf("%d %d \n", i, j);
			}
		}
	}
	return 0;
}
