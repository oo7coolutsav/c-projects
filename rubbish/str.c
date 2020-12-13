#include<stdio.h>
int main(void){
    char name[50];
    printf("Enter a string:");
    scanf("%[^\n]%*c",&name);
    printf("%s",name);
    return 0;
}