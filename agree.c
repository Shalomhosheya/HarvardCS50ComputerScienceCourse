#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char x = get_char("Do you agree? ");
    if (x == 'y'|| x=='Y')
    {
        printf("Agreed\n");
    }else if (x == 'N' || x =='n')
    {
        printf("Not agreed\n");
    }
    
    
}