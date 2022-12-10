#include<stdio.h>
int main()

{
    int n,sum=0,r,r2,r3,sum2=0,sq;
    scanf("%d",&n);
    sq=n*n;
    while(n!=0)
    {
         r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    r2=sum*sum;
    while(r2!=0)
    {
        r3=r2%10;
        sum2=sum2*10+r3;
        r2=r2/10;
    }
    if(sum2==sq)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}