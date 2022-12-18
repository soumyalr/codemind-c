#include<stdio.h>
int main()
{
    int n,q,r,fact,sum=0,i;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        fact=1;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        q=q/10;
    }
    if(sum==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}