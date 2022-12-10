#include<stdio.h>
int main()
{
   int a,r,ld=0,q;
   scanf("%d",&a);
   q=a;
   while(q!=0)
   {
       r=q%10;
       if(r>ld)
       {
           ld=r;
       }
       q=q/10;
   }
   printf("%d",ld);
}