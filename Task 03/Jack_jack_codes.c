#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, M;
    do{
        scanf("%d %d", &N, &M);
    }while(N<2 || N>100000);
    
    int A[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d ", &A[i]);
    }
    
    int count=0;
    for (int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(A[i]!=A[j])
            {
                if(A[i]+A[j] == M)
                    count++;
            }
        }
    }
    count>0 ? printf("True") : printf("False");
    return 0;
}
