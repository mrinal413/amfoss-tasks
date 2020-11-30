#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int T;
    do
    {
        scanf("%d\n", &T);
    }while(T<1 || T>100000);

    int N[T];
    for(int i=0; i<T; i++)
    {
        do
        {
        scanf("%d\n", &N[i]);
        }while(N[i]<1 || N[i]>1000000000);
    }

    for(int i=0; i<T; i++)
    {
        int sum = 0;
        for(int j=1; j<N[i]; j++)
        {
            if(j%3==0 || j%5==0)
            {
                sum = sum+j;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}
