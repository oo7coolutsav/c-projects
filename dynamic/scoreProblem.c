#include<stdio.h>
#define MAX 10000

// possible solution but not optimised
int possibleWaysToScore(int score){
    if(score < 0){return 0;}
    if(score == 0){return 1;}
    return possibleWaysToScore(score-3)+possibleWaysToScore(score-5)+possibleWaysToScore(score-10);
}

// optimised solution
int cache[MAX];
int possibleScore(int score){
    if(score < 0){return 0;}
    if(score == 0){return 1;}
    if(cache[score - 2] != 0){
        return cache[score -2];
    }
    else{
        int temp = possibleScore(score-3)+possibleScore(score-5)+possibleScore(score-10);
        cache[score -2] = temp;
        return temp;
    }
}

int main(void){
    printf(" Optimised: %d\n",possibleScore(100));
    // printf("Reccursively: %d\n",possibleWaysToScore(100));
    // for (int i = 0; i <100; i++)
    // {
    //     printf("%d\n",cache[i]);
    // }
    
    return 0;
}