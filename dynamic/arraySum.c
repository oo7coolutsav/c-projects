// program to replace each element of the array with 
// the sum of their previous elements including the 
// current element also.

#include<stdio.h>

int sumArr(int* arr,int size){
    if(size<=0){
        return 0;
    }
    else
        return arr[size-1] + sumArr(arr,size-1);  
}


int main(void){
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int size = sizeof(a)/sizeof(a[0]);
    for (int i = size; i > 0; i--)
    {    
        int temp[i];
        for (int j = 0; j < i; j++)
        {
            temp[j]=a[j];
        }
        a[i]=a[i] + sumArr(temp,i);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d",a[i]);
        printf("\n");
    } 
}