#include<stdio.h>
int main()
{
    int n,i,r;
    scanf("%d%d",&n,&r);
    for(i=1;i<=r;i++)
    {
        if(i%2!=0)
        {
        printf("%d x %d = %d
",n,i,i*n);
        }
    }
}