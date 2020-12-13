#include<stdio.h>
int main(void)
{
    int a;
    char b;
    float c;
    double d;
    long double e;
    printf("Enter a character:");
    scanf("%c",&b);
    printf("Enter a integer: ");
    scanf("%d",&a);
    printf("Enter a floating point value:");
    scanf("%f",&c);
    printf("Enter a double value:");
    scanf("%ld",&d);
    printf("Enter a long double valve:");
    scanf("%lld",&e);
    printf("The size of values are : \n %d \n %d \n %d \n %d \n %d ",sizeof(b),sizeof(a),sizeof(c),sizeof(d),sizeof(e));
    return 0;
}
