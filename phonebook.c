
#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    string name;
    string num;
}
person;

int main(void){
    person p[2];
   p[0].name = "shalom";
   p[0].num = "9485184818";

   p[1].name = "brayan";
   p[1].num = "9484881489";

    string value =  get_string("Enter name?\n");
    for(int i = 0 ;i < 2;i++){
        if(strcmp(p[i].name,value)==0){
            printf("found %s \n",p[i].num);
            return 0;
        }
    }
    printf("not found\n");
    return 1;

}
