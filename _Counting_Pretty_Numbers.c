#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int m,n,j,r,ct=0;
        scanf("%d%d",&m,&n);
        for(j=m;j<=n;j++)
        {
                r=j%10;
            if(r==2||r==3||r==9)
            {
                ct++;
            }
        }
        printf("%d
",ct);
    }
}