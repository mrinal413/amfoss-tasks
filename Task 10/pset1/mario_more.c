#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("height: ");
    }while(n<1||n>8);
    for(int i=1; i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            j>=(n-i) ? printf("#") : printf(" ");
        }
        printf("  ");
        for(int k=0;k<n;k++)
        {
            k<i ? printf("#") : printf(" ");
        }
        printf("\n");
    }
}
