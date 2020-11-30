#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    do
    {
        scanf("%d ", &n);
    }while(n<=1||n>30||n%2==0);
    int m = (n+1)/2;
    int x = m;
    for(int i = 1;i<=n;i++)
    {  
        if(i<=m)
        {
        for(int j = 0;j<n;j++)
        {
           j>=(m-i)&&j<x ? printf("D") : printf("*");
        }}
        else
        {
            for(int k = 0;k<n;k++)
            {
                k>=(i-m)&&k<x ? printf("D") : printf("*");
            }
        }
        i<m? x++ : x--;
        printf("\n");
    }
    return 0;
}  else
        {
            for(int k = 0;k<n;k++)
            {
                k>=(i-m)&&k<x ? printf("D") : printf("*");
            }
        }
        i<m? x++ : x--;
        printf("\n");
    }
}
