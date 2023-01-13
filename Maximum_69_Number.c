// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main()
{
int n,temp,i,idx=0,res=0;
scanf("%d",&n);
temp=n;
i=0;
while(temp>0)
{
    i++;
   int  digit=temp%10;
    temp/=10;
    if(digit==6)
    {
        idx=i;
    }
}
temp=n;
i=0;
while(temp!=0)
{i++;
    int digit=temp%10;
    temp=temp/10;
    if(i==idx)
    {
        digit=9;
    }
    res=res+digit*pow(10,i-1);
}
printf("%d",res);
}