#include <stdio.h>

int main(){
    char *number;
    char *name;
    FILE *f =fopen("phonebook.csv","a");
    printf("Enter name and number: ");
    scanf("%s %s", name, number);

    fprintf(f,"%s %s\n", name, number);
    fclose(f);

}