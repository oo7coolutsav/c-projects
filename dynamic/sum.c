#include<stdio.h>

int sumUptoN(unsigned int n){
    if (n==1)
        return 1;
    else if (n==0)
        return 0;
    else
        return n + sumUptoN(n-1);
}

int main(void){
    int val=10;
    printf("The sum of the N natural numbers is : %d",sumUptoN(val));
}