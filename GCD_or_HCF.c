#include<stdio.h>
int main()
{
    int n,m,i,min;
    scanf("%d%d",&n,&m);
   min=(m<n)?n:m;
    for(i=min;i>=1;i--)
    {
        if(m%i==0&&n%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}