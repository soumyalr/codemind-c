#include<stdio.h>
int main()
{
    int l,r,k,ct=0,i;
    scanf("%d%d%d",&l,&r,&k);
    for(i=l;i<=r;i++)
    {
        if(i%k==0)
        {
            ct++;
        }
    }
    printf("%d",ct);
}