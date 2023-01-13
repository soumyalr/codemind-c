#include<stdio.h>
int prime(int n);
int digitprime(int n);
int fullprime(int n);
int main()
{
    int n,r,c=0,c2=0,q;
    scanf("%d",&n);
    if(fullprime(n))
          {
              printf("Mega Prime");
          }
        else  printf("Not Mega Prime");
   
}
int prime(int n)
{
    int i,ct=0;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int digitprime(int n)
{ int q,r;
    q=n;
    while(q!=0)
    {
        r=q%10;
        if(r!=2 && r!=3 && r!=5 && r!=7)
        {
            return false;
        }
        q=q/10;
    }
    return true;
}
int fullprime(int n)
{
    return (digitprime(n)&&prime(n));
}