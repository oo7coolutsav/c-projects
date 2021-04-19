#include<stdio.h>
// Max size for cache memory.
#define MAX_SIZE 100


// Fibbinacci Number using memoisation to optimise the time complexity.
static long int cache[MAX_SIZE];
long int fibbonacci(int n){
    if (cache[n] != 0){
        return cache[n];
    }
    if (n == 0 || n ==1 ){
        cache[n] = 1;
    }
    else { 
        cache[n] = fibbonacci(n-1) + fibbonacci(n-2);
    }
    return cache[n];
}


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
    int a=1,b=1,result;
    if(n == 1 ){ return 1;}
    if(n == 2){ return 2; }
    for (int i = 2; i <= n; i++)
    {
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}


int main(void){
    printf("%ld",fibbonacci(45));
}