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
        }while(N[i]<10);
    }

    for(int i=0; i<T; i++)
    {
        int t1=1, t2=2, next;
        int F[N[i]];
        F[0]=1, F[1]=2;
        int sum=0;
        for(int j=2; j<N[i]; j++)
        {
            next = t1+t2;
            F[j] = next;
            t1=t2; t2=next;
            if(F[j]%2==0)
            {
                sum=sum+F[j];
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
