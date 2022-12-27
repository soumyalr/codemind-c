#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i,j,ct,d=0;
    scanf("%d%d",&m,&n);
    if(m==1)
    {
        m++;
    }
    for(i=m;i<=n;i++)
    {ct=0;
        for(j=1;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                ct++;
            }
        }
     if(ct==1)
     {
        d++;
     }
    }
    printf("%d",d);
}