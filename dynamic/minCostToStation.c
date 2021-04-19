/* 
PROBLEM:
There are N stations in a route, staring from 0 to N-1.
A train Mives from first station (0) to the last station
(N-1) in only farward direction. The cost of the ticket 
between any two stations is given. FInd the mimimum cost 
of the travel from station 0 to station N-1.
Example : 
cost[4][4] = {
    {0,10,75,94},
    {-1,0,35,50},
    {-1,-1,0,80},
    {-1,-1,-1,0}
}
*/

#include<stdio.h>
#define MAX 100
int cost[MAX][MAX] = {
    {0,10,75,94,140,150,200,130},
    {-1,0,35,50,75,90,130,170},
    {-1,-1,0,80,100,120,150,175},
    {-1,-1,-1,0,10,37,67,99},
    {-1,-1,-1,-1,0,25,60,105},
    {-1,-1,-1,-1,-1,0,15,60},
    {-1,-1,-1,-1,-1,-1,0,30},
    {-1,-1,-1,-1,-1,-1,-1,0}
};

int calculateMinimumCost(int s,int d){/* condition */
    if(s == d || s== d-1){ return cost[s][d];}
    int minimumCost = cost[s][d];
    for (int i = s+1 ; i < d; i++)
    {
        int temp = calculateMinimumCost(s,i) + calculateMinimumCost(i,d);
        if (temp < minimumCost)
        {
            minimumCost =temp;
        }
    }
    return minimumCost;
}

int main(void){
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i==j || i < j)
            {
                printf("From Station %d to Station %d : $ %d\n",i,j,calculateMinimumCost(i,j));
            }
            
        }
        
    }
    
    return 0;
}

