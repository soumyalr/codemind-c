#include <stdio.h>
int main()  
{
    int n,m,min,i;
    scanf("%d%d",&n,&m);
     min=(n>m) ? n:m;
    for(i=min;i>=1;i--)
    {
      if(n%i==0&&m%i==0)
     {
       printf("%d",i);
       break;
     }
    }
    return 0;
}