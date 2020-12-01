#include <stdio.h>
#include <stdlib.h>
void print(int l,int n)
{
    int i, *p;
    p = (int*) malloc(l* sizeof(int));
    for(i = 0; i < n; i++)
    {
       scanf("%d",(p+i));
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t",*(p+i));
    }
    free(p);
}
int main()
{
    int c, len, num;
    printf("Enter the length of array: ");
    scanf("%d",&len);
    printf("\nEnter the number of elements: ");
    scanf("%d",&num);
    printf("\nEnter values to put in the array: ");
    print(len, num);
    return 0;
}