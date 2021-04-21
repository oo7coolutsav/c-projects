#include<stdio.h>
// this function is for 2*(n)
int calculatePossibleWays(int n){
    if(n == 0){return 0;}
    if(n == 1){return 1;}
    if(n == 2){return 2;}
    return calculatePossibleWays(n-1) + calculatePossibleWays(n-2);
}
// for 3*(n)
int calculateWays(int n){
    if(n == 0){return 0;}
    if(n == 1){return 2;}
    if(n == 2){return 3;}
    return calculatePossibleWays(n-1) + calculatePossibleWays(n-2);
}


int main(void){
    printf("%d",calculateWays(3));
}