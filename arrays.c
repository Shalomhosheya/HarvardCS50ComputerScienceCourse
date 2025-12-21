#include <cs50.h>
#include <stdio.h>

int main(void){
    int score[3];
    for (int i = 0; i < score.size; i++)
    {
        score[i] = get_int("Score: ");
    }
    printf("Average: %f\n", (score[0] + score[1] + score[2]) / (float)3);
    
}