#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void){
    string s [] = {"dot","green","mac","gems","violet","blue","red"};
    string value =  get_string("What are you looking for?\n");

    for (int i = 0; i < 6; i++)
    {
        if(strcmp(s[i],value)==0){
            printf("found\n");
            return 0;
        }
        printf("not found\n");
        return 1;
    }
}
