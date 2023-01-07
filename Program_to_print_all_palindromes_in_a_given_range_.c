#include<stdio.h>
int palin(int n);
int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
       palin(i);
    }
    
}
int palin(int n)
{ int s=0,r,q;
     q=n;
        while(q!=0)
        {
            r=q%10;
            s=s*10+r;
            q=q/10;
        }
        if(s==n)
        {
            printf("%d ",n);
        }
}