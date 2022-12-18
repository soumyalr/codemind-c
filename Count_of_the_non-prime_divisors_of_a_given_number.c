#include<stdio.h>
int pri(int );
int main()
{
    int n,i,ct=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(!pri(i))
            {
                ct++;
            }
        }
    }
    printf("%d",ct);
}
int pri(int n)
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