#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,j,fact;
        scanf("%d",&n);
            fact=1;
            for(j=1;j<=n;j++)
            {
                fact=fact*j;
            }
            printf("%d
",fact);
    }
}