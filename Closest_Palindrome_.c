#include<stdio.h>
int pal(int n);
int main()
{ 
int n,i,np,d1,d2,bp;
scanf("%d",&n);
for(i=n+1;;i++)
{
    if(pal(i)==1)
    {
        np=i;
        d1=i-n;
        break;
    }
}
for(i=n-1;;i--)
{
    if(pal(i)==1)
    {
        bp=i;
        d2=n-i;
        break;
    }
}
if(d1<d2)
{
    printf("%d",np);
}
else if(d2<d1)
{
    printf("%d",bp);
}
else
{
    printf("%d %d",bp,np);
}
}
 int pal(int n)
 {
 	int r,sum=0,q;
 	q=n;
 	while(q!=0)
 	{
 		r=q%10;
 		sum=sum*10+r;
 		q=q/10;
	 }
	 if(sum==n)
	 {
	 	return 1;
	 }
	 else
	 {
	 	return 0;
	 }
 }