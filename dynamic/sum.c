#include<stdio.h>

int sumUptoN(int n){
    if (n==1)
        return 1;
    else
        return n + sumUptoN(n-1);
}

int main(void){
    printf("The sum of the N natural numbers is : %d",sumUptoN(10000));
}