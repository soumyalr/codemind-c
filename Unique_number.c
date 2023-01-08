#include<stdio.h>
int main()
{
    int a[100];   //taking a array
    int n,q,r,k=0,i,j,flag=1;
    scanf("%d",&n); 
   q=n;
   while(q!=0)
   {
       r=q%10;  //taking the reminder
       a[k]=r;  //storing the reminder value in k
       q=q/10;  //quifitient 
       ++k;     //incrimenting k value(pre or post incriment)
   }
   for(i=0;i<k;i++) //index array
   {
   	for(j=i+1;j<k;j++) //taking j index value as the next digit after i
   	   {
   		if(a[i]==a[j]) //comparing a[i] & a[j] value
   		   {
   			flag=0;   
		   }
	   }
   }
   if(flag==1) printf("Unique Number");
   else printf("Not Unique Number");
   return 0;
}