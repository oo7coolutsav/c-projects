#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("Enter Value Of A:");
    scanf("%d",&a);
    printf("Enter Value Of B:");
    scanf("%d",&b);
    printf("Enter Value Of C:");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
            printf("A is greater:%d",a);
        else
            printf("C is greater:%d",c);
    }
    else if(b>c)
            printf("B is greater:%d",b);
        else
            printf("C is greater:%d",c);
    return 0;
}
