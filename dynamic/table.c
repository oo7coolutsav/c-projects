#include<stdio.h>
int a= 1;
void printTable(int n){
    if (a > 10)
        return;
    printf("%d\n",n*(a++));
    printTable(n);

}
int main(void){
    printTable(5);
}