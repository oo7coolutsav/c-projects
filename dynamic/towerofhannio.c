#include<stdio.h>

void towerofhanoi(char s,char d,char e,int n){
    if(n<=0)
        return;
    towerofhanoi(s,e,d,n-1);
    printf("Move Disk-%d From %c to %c \n",n,s,d);
    towerofhanoi(e,d,s,n-1);
}

int main(void){
    int i=0;
    towerofhanoi('s','d','e',8);
}