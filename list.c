#include <stdio.h>
#include <stdlib.h>

int main(){
    int *list=malloc(3*sizeof(int));
    list[0]=1;
    list[1]=2;
    list[2]=3;

    if (list == NULL)
    {
        return 1;
    }
    int *tmp = malloc(4*sizeof(int));
    if(tmp == NULL){
        free(list);
        return 1;
    }
    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }

    tmp[3]= 4 ;
    free(list);
    list = tmp;
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n",list[i]);
    }


    free(list);
    return 0;
    
}

// Key Concepts You Should Remember
// ✅ malloc

// Allocates memory dynamically

// Returns a pointer

// May return NULL

// ✅ Why use tmp

// Safe resizing

// Prevents data loss if allocation fails

// ✅ Why copy manually?

// C does not resize arrays automatically

// ✅ Why free memory?

// OS does NOT clean up for you in C