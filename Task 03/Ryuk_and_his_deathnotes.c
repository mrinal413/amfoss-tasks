#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d ", &N);
    int a[N], b[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d ", &a[i]);
    }
    for(int j=0;j<N;j++)
    {
        scanf("%d ", &b[j]);
    }
    int counter = 1000000000, x;
    for(int k=0;k<N;k++)
    {
        x = b[k]/a[k];
        if(x<counter)
        {
            counter = x;
        }
    }
    printf("%d", counter );    
    return 0;
}
