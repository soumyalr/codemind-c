#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,q,r,sum=0;
        scanf("%d",&a);
        q=a;
        while(q!=0)
        {
            r=q%10;
            sum=sum*10+r;
            q=q/10;
        }
        if(sum==a)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}