#include<stdio.h>
int main()
{
    int n,m,k,d;
    scanf("%d%d%d",&n,&m,&k);
    d=k*m;
    if(m*k<n)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}