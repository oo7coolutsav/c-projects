#include<stdio.h>

int test(int n){

    if(n<0){return 0;}
    
        printf("%d\n",n);
        test(n-1);
        printf("%d\n",n);
    
}

int main(void){
    test(5);
}