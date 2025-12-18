#include <cs50.h>
#include <stdio.h>

int main(void){
    int x =  get_int("what is X ? ");
    int y =  get_int("what is y ? ");

    if(x>y){
        printf("x is greater than y\n");
    }else if(x<y){
        printf("x is less than y\n");
    }else if(x==y){
        printf("x is equal to y\n");
    }
}

//could run in the bottom codespace
// https://cs50.dev 