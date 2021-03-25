#include<stdio.h>

long int facto(unsigned int n){
    if(n<=1)
        return 1;
    else
        return n*facto(n-1);
}

int main(void){
    int val = 15;
    printf("The Factorial of %d is %ld",val,facto(val));
}