#include<stdio.h>
int main(void)
{
    int i,j,k,n=58;
    for(i=0;i<n;i++)
    {
        for(j=n-i+1;j>0;j--)
            printf(" ");
        printf("*");
        for(k=0;k<i;k++)
        {
            if(i==0)
                continue;
            else
                printf(" *");
        }
        printf("\n");
    }
    return 0;
}
