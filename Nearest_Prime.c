#include<stdio.h>
#include<math.h>
int prime(int n)
{
	int i,c=0;
	for(i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			c=c+1;
		}
	}
	if(c==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
    int v,j;
scanf("%d",&v);
for(j=1;j<=v;j++)
{
 int n,i,d1=0,d2=0,np1=0,np2=0;
 scanf("%d",&n);
 for(i=n;;i++)
 {
 	if(prime(i))
 	{
 		d2=i-n;
 		np1=i;
 		break;
 		
	}
 }
 for(i=n;;i--)
 {
 	if(prime(i))
 	{
 		d1=n-i;
 		np2=i;
 		break;
 		
	}
 }
 
 if(d1<d2)
 {
 	printf("%d
",np2);
 }
 else if(d1>d2)
 {
 	printf("%d
",np1);
 }
 else
 {
 	printf("%d
",np2);
 }
	
}

}