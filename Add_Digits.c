#include<stdio.h>
int main()
{
    int n,r,s=0,q;
    scanf("%d",&n);
    q=n;
    while(q>9)
    {
        r=q%10;
        q=q/10;
         q=q+r;
    }
    printf("%d",q);
}