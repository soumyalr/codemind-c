#include<stdio.h>
int hn(int n)
{
    int q,r,sum=0;
    q=n;
    while(q!=0)
    {
        r=q%10;
        sum=sum+(r*r);
        q=q/10;
    }
    return sum;
}
int main()
{
    int n,q;
    scanf("%d",&n);
    q=n;
    while(q!=1&&q!=4)
    {
       q=hn(q);
    }
    if(q==1)
    {
        printf("True");
    }
    else if (q==4)
    {
        printf("False");
    }
    
}
 