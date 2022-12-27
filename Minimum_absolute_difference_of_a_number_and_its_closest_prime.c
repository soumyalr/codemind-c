#include<stdio.h>
#include<math.h>
int prime(int n);
int main()
{ int n,i,ap,d1=0,bp,d2=0;
scanf("%d",&n);
if(prime(n)==1)
{
    printf("%d",n-n);
}
else
{
    for(i=n+1;;i++)
    {
        if(prime(i)==1)
        {
            ap=i;
            d1=ap-n;
            break;
        }
    }
    for(i=n-1;;i--)
    {
        if(prime(i)==1)
        {
            bp=i;
            d2=n-bp;
            break;
        }
    }
    if(d1<d2)
    {
        printf("%d",d1);
    }
    else if(d2<d1)
    {
        printf("%d",d2);
    }
    else
    {
        printf("%d",d1);
    }
}
    
}
int prime(int n)
{
    int i,ct=0;
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            ct++;
        }
    }
    if(ct==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}