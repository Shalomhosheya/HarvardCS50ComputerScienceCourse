#include <cs50.h>
#include <stdio.h>


int main(void){
    long x = get_long("add value 1 ");
    long y = get_long("add value 2 ");
    printf("%li\n",x+y);

    float z = (float) x/ (float)y;
    printf("%f\n",z);
    printf("%.20f\n",z);

}
