#include<stdio.h>
int main()
{
    int n1,n2,i,j,ct,n,flag=0;
    scanf("%d%d",&n1,&n2);
    n=n1+n2;
    for(i=n+1;;i++)
    {ct=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                ct++;
            }
        }
        if(ct==2)
        {
            flag++;
            break;
        }
    }
    if(flag==1)
    {
        printf("%d",i-n);
    }
}