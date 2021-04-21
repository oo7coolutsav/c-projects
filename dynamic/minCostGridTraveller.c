#include<stdio.h>
#define N 3
#define M 2 
int gridCost[N][M] = {
    {1,3,5,8},
    {4,2,1,7},
    {4,3,2,3}
};

int getMin(int a,int b){ return a>b?b:a;}

int minCostGridTraveller(int n,int m){
    if (n== 0 && m == 0){ return gridCost[0][0];}
    if (m == 0) { return minCostGridTraveller(n-1,m) + gridCost[n][0];}
    if (n == 0) { return minCostGridTraveller(n,m-1) + gridCost[0][m];}

    int a= minCostGridTraveller(n-1,m); 
    int b= minCostGridTraveller(n,m-1);
    return getMin(a,b) + gridCost[n][m];
}

int main(void){
    printf("%d",minCostGridTraveller(2,0));
    return 0;
}