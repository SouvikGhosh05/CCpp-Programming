#include <stdio.h>

int main()
{
    int a = 10;
    int *p;
    p = &a; // p is a pointer to the address of a
    printf("Memory address of a: %p\n", (void *)&a);
    printf("%d\n", *p);

    int b = 20;
    a = b; // b's value is changed to a's value, not the address
    printf("Memory address of b: %p\n", (void *)&b);
    printf("%d\n", *p); // *p's value also changed because p is the reference of a

    int c = 10;
    printf("Memory address of c: %p\n", (void *)&c);

    printf("So, C is not Python, which allocates the same memory address for any variable that holds the same value.\n");
    printf("Which is done by CPython using reference counting.\n");
    printf("CPython just increment the reference count of that variable, which will hold that same value.\n");
    return 0;
}