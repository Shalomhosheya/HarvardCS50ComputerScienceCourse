#include <cs50.h>
#include <stdio.h>

const int n = 3;
float average(int array[],int length);

int main(void){
    int score[n];
    for (int i = 0; i < n; i++)
    {
        score[i] = get_int("Score: ");
    }
    printf("Average: %f\n", average(score,n));
    
}

float average(int array[],int lenght){
    float avg = 0;
    for(int i = 0 ; i < lenght;i++){
            avg += array[i] ;
    }
    return avg/ lenght;

}