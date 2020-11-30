#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main(void)
{
    int T;
    do
    {
        scanf("%d\n", &T);
    }while(T<1||T>10);

    int N[T];
    for(int i=0; i<T; i++)
    {
    do
    {
    scanf("%d\n", &N[i]);
    }while(N[i]<1||N[i]>40);
    }
    for(int j=0; j<T; j++)
    {
    int count=0, num=N[j];
    while(count!=N[j])
    {
        for(int i=1; i<=N[j]; i++)
        {
            if(num%i==0)
            {count++;}
        }
        num++;
    }
    printf("%d", count);
    }
}
