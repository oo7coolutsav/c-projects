#include<stdio.h>
#include<math.h>

unsigned long int calcNthPower(int x,int n){
    if(n == 0)
        return 1;
    else if(n == 1)
        return n;
    else
        return x*pow(x,(n-1));
}

int main(void){
    printf("%d",calcNthPower(5,5));
}