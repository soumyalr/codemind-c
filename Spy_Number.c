#include<stdio.h>
int main()
{
    int n,q,s=0,m=1,r;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        s=s+r;
        m=m*r;
        q=q/10;
    }
    if(s==m)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}