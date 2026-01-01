#include <stdio.lb>
#include <stdio.h>

int main(){
    int *list=malloc(3*sizeof(int));
    list[0]=1;
    list[1]=2;
    list[2]=3;

    if (list == NULL)
    {
        return 1;
    }
    
}