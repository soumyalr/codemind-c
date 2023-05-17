#include<stdio.h>
int main()
{
    int n,m,i,r;
    scanf("%d %d",&n,&m);
    for(i=n;i<=m;i++)
  {int ct=0,ct1=0;
  int q=i;
    while(q>0)
     {
         ct1++;
        r=q%10;
        if(r!=0 && i%r==0)
        {
            ct++;
        }
        q=q/10;
        
     }
    if(ct1==ct)
    {
        printf("%d ",i);
    }
  }
}