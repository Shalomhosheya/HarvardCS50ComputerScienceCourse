#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    string s  = get_string("Input: ");
    printf("before: %s\n",s);
    printf("after: ");
    for(int i = 0 , n = strlen(s);i < n;i++){
        // if(islower(s[i])){
        //     printf("%c",toupper(s[i]));
        // }else{       complex #1
        //     printf("%c",s[i]);
        // }
        printf("%c",toupper(s[i])); // easier #2

    }
    printf("\n");
}
