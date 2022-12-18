#include<stdio.h>
int main()
{
   int n,ct,ct2=0,i,j;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {ct=0;
       for(j=1;j<=i;j++)
       {
           if(i%j==0)
           {
               ct++;
           }
       }
       if(ct==9)
       {
           printf("%d ",i);
           ct2++;
       }
   }
   printf("
Total=%d",ct2);
}