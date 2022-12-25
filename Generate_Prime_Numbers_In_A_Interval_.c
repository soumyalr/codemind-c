#include<stdio.h>
int prime(int n);
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(prime(i)==1)
        {
            printf("%d
",i);
        }
    }
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