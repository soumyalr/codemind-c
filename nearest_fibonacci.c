#include<stdio.h>
int fib(int n)
{
    int a=0,b=1,c,d=0,i;
    for(i=1;i<=n;i++)
    {

    c=a+b;
    if(c==n)
    {
        d++;
        break;
    }
    a=b;
    b=c;
    }
    if(d==0)return 0;
    else return 1;
}
int main()
{
    int i,nf1,nf2,d1=0,d2=0,n;
     scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(fib(i))
        {
            d1=i-n;
            nf1=i;
            break;
        }
    }
    for(i=n-1;;i--)
    {
        if(fib(i))
        {
            d2=n-i;
            nf2=i;
            break;
        }
    }
    if(d1<d2)printf("%d",nf1);
    else if(d2<d1)printf("%d",nf2);
    else printf("%d %d",nf2,nf1);
}