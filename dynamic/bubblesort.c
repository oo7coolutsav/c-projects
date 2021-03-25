#include<stdio.h>

void swap(int *a,int *b){
    *a ^= *b;
    *b ^= *a;
    *a ^= *b; 
}

void reccursiveBubbleSort(int *arr,int size){
    for (int i = 0; i < size -1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(&arr[i],&arr[i+1]);
        }
    }
    reccursiveBubbleSort(arr,size-1);  
}

void bubbleSort(int *arr,int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
            
        }
        
    }
    
}

int main(void){
    int a[5] = {9,0,1,8,2};
    reccursiveBubbleSort(a,5);
    for (int k = 0; k < 5; k++)
    {
        printf("%d \t",a[k]);
    }
    
}