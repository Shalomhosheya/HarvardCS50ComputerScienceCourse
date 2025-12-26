#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    printf("The address of a is %p\n", p); // %p is used to print the address
    printf("The address of a is %i\n", *p); // *p is used to print the value at the address
}