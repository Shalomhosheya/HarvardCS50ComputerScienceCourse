#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
    char *s = get_string("Copy from: ");
    char *t = malloc(strlen(s+1));

    // for (int i = 0, n=strlen(s)+1; i < n; i++)
    // {
    //     t[i] = s[i];
    // }

    strcpy(t,s);
    if(strlen(t)>0){
      t[0]= toupper(t[0]);
    }
    printf("Copy to: %s\n", t);
    printf("Copy to: %s\n", s);


}
