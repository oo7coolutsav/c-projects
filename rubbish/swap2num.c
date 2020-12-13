#include<stdio.h>
int main(void)
{
    int a,b;
    printf("Enter value A:");
    scanf("%d",&a);
    printf("Enter value B:");
    scanf("%d",&b);
    printf("Before Swapping \nValue of A=%d",a);
    printf("\nValue of b=%d \n",b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("After Swappimg \nValue of A=%d",a);
    printf("\nValue of B=%d",b);
    return 0;
}
