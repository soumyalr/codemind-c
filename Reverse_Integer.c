#include<stdio.h>
int main()
{
    int n,r,sum=0,q;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        sum=sum*10+r;
        q=q/10;
    }
     printf("%d",sum);
}