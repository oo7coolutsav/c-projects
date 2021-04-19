#include<stdio.h>

//  Fibbonacci Number using reccursive function
int fibbo(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    else{
        return fibbo(n-1) + fibbo(n-2);
    }
}

// Fibonacci number using simple iterative function
int fib(int n){
    int result;
    if(n == 1 ){
        return 1;
    }
    if(n == 2){
        return 2;
    }
    int a=1;
    int b=1;
    for (int i = 2; i <= n; i++)
    {
        result = a + b;
        a = b;
        b = result;

    }
    return result;
    
}
//1 1 2 3 5 8 13
int main(void){
    printf("%d",fibbo(45));
}