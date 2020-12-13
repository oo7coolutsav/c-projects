#include<stdio.h>
int main(void)
{
    int a;
    printf("Enter a Number:");
    scanf("%d",&a);
    if(a%2==0)
        printf("Even Number");
    else
        printf("Odd Number");
    return 0;
}
