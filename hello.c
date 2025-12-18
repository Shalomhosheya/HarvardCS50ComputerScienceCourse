#include <cs50.h>
#include <stdio.h>

int main(void) {
    string answer = get_string("what is your first name ");
    string answer2 = get_string("what is your last name ");
    printf("Hello,%s %s\n",answer,answer2);
}   
//could run in the bottom codespace
// https://cs50.dev 