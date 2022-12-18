#include<stdio.h>
int main()
{
    int n,q,r,sum=0,mul=1;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        sum=sum+r;
        mul=mul*r;
        q=q/10;
    }
    printf("%d",mul-sum);
}