#include<stdio.h>

int main(void){
    int a=4,b=6;
    int *pa,*pb;
    pa= &a;
    pb= &b;
    printf("%d\n",*pa + 1);
    printf("%d",*pb * 2);
    printf("\n%d\n%d", a,b);
    return 0;
}