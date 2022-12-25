#include<stdio.h>
int main()
{
    int m,n,i,ct,ct2,r,q;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {q=i;
	ct=0;
     ct2=0;
        while(q!=0)
        {   ct2++; 
            r=q%10;
            if(r!=0 && i%r==0)
            {
                ct++;
            }
            q=q/10;
            
        }
        if(ct==ct2)
          {
            printf("%d ",i);
          }
    }
}