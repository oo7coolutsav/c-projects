//program to print the table of a given number
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the Number:");
    scanf("%d",&num);
    for (int i = 1; i <= 10 ; i++)
    {
        /* code */
        printf("%d * %d = %d \n",num,i,i*num);
    }
    
    return 0;
}
