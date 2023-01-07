#include<stdio.h>
int prime(int n);
int palin(int n);
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(prime(i)==1)
        {
            if(palin(i)==1)
            {
                printf("%d",i);
                break;
            }
        }
    }
    return 0;
}
int prime(int n)
{
    int i,ct=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            ct++;
        }
    }
    if(ct==2) 
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int palin(int n)
{ int r,s=0,t;
     t=n;
    while(t!=0)
    {
        r=t%10;
        s=s*10+r;
        t=t/10;
    }
    if(s==n) 
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}