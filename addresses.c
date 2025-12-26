#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    printf("The address of a is %p\n", p); // %p is used to print the address
    printf("The address of a is %i\n", *p); // *p is used to print the value at the address

    char *s="Hi";//it does exist as String variable
    printf("%p,\n",s);
    printf("%s,\n",s);
    printf("%p,\n",&s[0]);
    printf("%p,\n",&s[1]);
    printf("%p,\n",&s[2]);
    printf("%p,\n",&s[3]);
}