#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    long t1=1, t2=2, t3=3;
    long nextT, F[50];
    F[0]=1; F[1]=2; F[2]=3;

    for(long i=3; i<50; i++)
    {
        nextT = t1+t2+t3;
        F[i]=nextT;
        t1=t2; t2=t3; t3=nextT;
    }

    long T;
    scanf("%li ", &T);
    long a[T], b[T];

    for(long i=0; i<T; i++)
    {
        scanf("%li ", &a[i]);
    }

    for(long i=0; i<T; i++)
    {
        long pos, num, rev=0, d;
        pos=a[i];
        num=F[pos];
        while(num!=0)
        {
            d=num%10;
            rev = rev*10 +d;
            num=num/10;
        }
        b[i]=rev;  
    }
    for(int i=0; i<T; i++)
    {
        printf("%li ", b[i]);
    }
}
