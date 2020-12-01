#include <stdio.h>
#include <stdlib.h>
void assign(int l,int n, int r)
{
    int i, *p, length=0;
    p = (int*) malloc(l* sizeof(int));
    for(i = 0; i < n; i++)
    {
       *(p+i)=r;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t",*(p+i));
    }
    free(p);
}
int main()
{
    int j, ele, len, num;
    printf("Enter the length of the dynamic array: ");
    scanf("%d",&len);
    printf("\nEnter the number of elements: ");
    scanf("%d",&num);
    for(j=0; j<num; j++)
    {
        scanf("%d",&ele);
        assign(len, num, ele);
    }
    
    return 0;
}