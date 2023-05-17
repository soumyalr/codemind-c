#include<stdio.h>
int main()
{
    int n,k,m,d;
    scanf("%d%d%d",&n,&k,&m);
    d=k*m;
    if(n%d==0)
    {
        printf("%d",(n/(k*m)));
    }
    else
    {
        printf("%d",(n/(k*m))+1);
    }
}